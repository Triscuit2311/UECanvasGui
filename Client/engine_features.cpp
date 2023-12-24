#include "pch.h"
#include "engine_features.hpp"

#include "client_lib.hpp"


void engine_features::exec_thread_func()
{
	while (!thread_exit_signal) {
		std::this_thread::sleep_for(exec_thread_sleep_time);
		///////////////////////////////////////////////////
		// Features that execute quickly/constantly
		///////////////////////////////////////////////////
		const auto player_character = engine_data::GetLocalPlayerCharacter();



		if (keep_mags_full.enabled && player_character)
		{
			player_character->ReplenishAllMagazineAmmo();
		}

		if (auto_stop_bleed.enabled && player_character)
		{
			player_character->BleedComponent->StopBleeding();
		}


		///////////////////////////////////////////////////
	}
	INF("features->exec_thread exiting");

}

void engine_features::lazy_thread_func()
{
	while (!thread_exit_signal) {
		std::this_thread::sleep_for(lazy_thread_sleep_time);
		try {
			///////////////////////////////////////////////////
			// Features that execute lazily
			///////////////////////////////////////////////////

			const SDK::AReadyOrNotGameState* game_state = engine_data::GetGameState();
			const auto player_character = engine_data::GetLocalPlayerCharacter();

			if (score_grace.enabled && game_state)
			{
				if (game_state == nullptr || !game_state) { continue; }
				if (game_state->ScoringManager == nullptr) { continue; }

				if (game_state->ScoringManager->TotalScorePool != score_grace.last_modified_score)
				{
					int32 t = game_state->ScoringManager->TotalScorePool;
					game_state->ScoringManager->TotalScorePool -= score_grace.delta_score_threshold;
					score_grace.last_modified_score = game_state->ScoringManager->TotalScorePool;
					LOG("Updated Score From: %d -> %d", t, score_grace.last_modified_score.load());
				}
			}

			if (player_god_mode.enabled && player_character)
			{
				player_character->bCanBeDamaged = false;
			}
			else if (!player_god_mode.enabled && player_character)
			{
				player_character->bCanBeDamaged = true;
			}

			if (crouch_super_speed.enabled && player_character)
			{
				player_character->SpeedModifier_Crouch = 1000.0f;
			}
			else if (!crouch_super_speed.enabled && player_character)
			{
				player_character->SpeedModifier_Crouch = 0.5f;
			}


			const auto last_weapon = player_character->InventoryComp->LastEquippedWeapon;

			if (no_recoil.enabled && player_character)
			{
				last_weapon->FirstShotRecoil = 0;
				last_weapon->RecoilFireStrength = 0;
				last_weapon->RecoilFireStrengthFirst = 0;
				for (int i = 0; i < last_weapon->RecoilPattern.Num(); ++i) {
					if (!last_weapon->RecoilPattern.IsValidIndex(i)) { continue; }
					last_weapon->RecoilPattern[i].Yaw = 0;
					last_weapon->RecoilPattern[i].Pitch = 0;
					last_weapon->RecoilPattern[i].Roll = 0;
				}
			}


			if (no_spread.enabled && player_character)
			{
				last_weapon->SpreadPattern.Pitch = 0;
				last_weapon->SpreadPattern.Yaw = 0;
				last_weapon->SpreadPattern.Roll = 0;
				last_weapon->RecoilRandomness = 0;
				last_weapon->bIgnoreAmmoTypeSpread = true;
				last_weapon->SpreadReturnRate = 100.0f;
				last_weapon->FirstShotSpread = 0;
				last_weapon->VelocitySpreadMultiplier = 0;
				last_weapon->ADSSpreadMultiplier = 0;
			}


			if (always_full_auto.enabled && player_character)
			{
				last_weapon->CurrentFireMode = SDK::EFireMode::FM_Auto;
			}


			if (custom_fire_rate.enabled && player_character)
			{
				// Speed (Ref: P90 is 0.060, Revolver is 0.30)
				last_weapon->FireRate = custom_fire_rate.val;
			}





			///////////////////////////////////////////////////

		}
		catch (...) {}
	}
	INF("features->lazy_thread exiting");
}

void engine_features::start_threads()
{
	exec_thread = std::jthread(&engine_features::exec_thread_func, this);
	lazy_thread = std::jthread(&engine_features::lazy_thread_func, this);
}

void engine_features::join_threads()
{
	thread_exit_signal = true;
	lazy_thread.join();
	exec_thread.join();
}

void engine_features::init()
{


	force_surrender.on_exec = []()
		{

			try {
				const auto game_state = engine_data::GetGameState();
				if (!game_state) { ERR("Error getting game state for force surrender!");  return; }

				SDK::TArray<SDK::ACyberneticCharacter*>ai_arr = game_state->AllAICharacters;

				LOG("Found %d Ai", ai_arr.Num());

				for (int i = 0; i < ai_arr.Num(); ++i)
				{
					try {
						if (!ai_arr.IsValidIndex(i)) { continue; }

						auto ai = ai_arr[i];

						LOG("\t%s", ai->Name.ToString().c_str());


						if (ai == nullptr) { continue; }

						auto team = ai->GetTeam();

						if (ai->Archetype == nullptr || ai->Controller == nullptr) { continue; }


						if (team == SDK::ETeamType::TT_SUSPECT)
						{
							ai->Surrender();
						}
					}
					catch (...)
					{
					}
				}
			}
			catch (...)
			{
			}
		};


	setup_mats.on_exec = [this]() {

		try
		{
			auto& objs = SDK::UObject::GObjects;
			for (int i = 0; i < objs->Num(); i++)
			{
				if (auto item = objs->GetByIndex(i))
				{
					if (item && item->IsA(SDK::UMaterial::StaticClass()))
					{
						auto name = objs->GetByIndex(i)->GetName();
						all_mats.emplace_back(name, (SDK::UMaterial*)item);
					}
				}
			}
		}
		catch (...)
		{
			ERR("Could not Get Material");
		}

		};

	test_feature.on_exec = [this]()
		{

			SDK::UMaterial* xray = nullptr;

			try
			{
				auto& objs = SDK::UObject::GObjects;
				for (int i = 0; i < objs->Num(); i++)
				{
					if (auto item = objs->GetByIndex(i))
					{
						if (item && item->IsA(SDK::UMaterial::StaticClass()))
						{
							auto name = objs->GetByIndex(i)->GetName();
							if (name == "Blue1") {
								xray = (SDK::UMaterial*)item;
							}
						}
					}
				}
			}
			catch (...)
			{
				ERR("Could not Get Material");
			}

			auto character = engine_data::GetLocalPlayerCharacter();
			// Full Godmode (can bleed but does not damage or kill player)
			{
				character->bCanBeDamaged = false;
			}

			INF("Using Mat: %s", all_mats.at(mat_idx).first.c_str());


			try {
				const auto game_state = engine_data::GetGameState();
				if (!game_state) { ERR("Error getting game state for force surrender!");  return; }

				SDK::TArray<SDK::ACyberneticCharacter*>ai_arr = game_state->AllAICharacters;

				LOG("Found %d Ai", ai_arr.Num());

				for (int i = 0; i < ai_arr.Num(); ++i)
				{
					try {
						if (!ai_arr.IsValidIndex(i)) { continue; }

						auto ai = ai_arr[i];

						LOG("\t%s", ai->Name.ToString().c_str());


						if (ai == nullptr) { continue; }

						auto team = ai->GetTeam();

						if (ai->Archetype == nullptr || ai->Controller == nullptr) { continue; }

						//SDK::ACyberneticController* controller = (SDK::ACyberneticController*)ai->Controller;

						auto materials = ai->Mesh->GetMaterials();
						int set = 0;
						for (int i = 0; i < materials.Num(); i++) {
							auto mat = materials[i];
							if (!materials.IsValidIndex(i))// || mat == nullptr)
								continue;

							//ai->Mesh->GetMaterials()[i]->GetBaseMaterial()->BlendMode = SDK::EBlendMode::BLEND_Additive;
							ai->Mesh->SetMaterial(i, xray);

						}
						LOG("SET %d MATS", set);

					}
					catch (...)
					{
					}
				}
			}
			catch (...)
			{
			}

			mat_idx++;
			return;



			SDK::UReadyOrNotDebugSubsystem* dbg = nullptr;
			try {
				// try
				// {
				//
				// 	auto& objs = SDK::UObject::GObjects;
				// 	for (int i = 0; i < objs->Num(); i++)
				// 	{
				// 		if (auto item = objs->GetByIndex(i))
				// 		{
				// 			if (item && item->IsA(SDK::UReadyOrNotDebugSubsystem::StaticClass()))
				// 			{
				// 				if (item == SDK::UReadyOrNotDebugSubsystem::GetDefaultObj()) { continue; }
				// 				auto name = objs->GetByIndex(i)->GetName();
				// 				LOG("Found: %s", name.c_str());
				// 				dbg = (SDK::UReadyOrNotDebugSubsystem*)item;
				// 			}
				// 		}
				// 	}
				// }
				// catch (...)
				// {
				// 	ERR("Could not iterate all objects");
				// }


				//PlayerTakenDamage(class AReadyOrNotCharacter* InstigatorCharacter, class AReadyOrNotCharacter* DamagedCharacter, class AActor* DamageCauser, float Damage, float HealthRemaining);



				//LOG("%.4f", engine_data::GetLocalPlayerCharacter()->InventoryComp->LastEquippedWeapon->FireRate);
				//engine_data::GetLocalPlayerCharacter()->InventoryComp->LastEquippedWeapon->FireRate = 0.001f;

				auto last_weapon = engine_data::GetLocalPlayerCharacter()->InventoryComp->LastEquippedWeapon;


				// set available modes
				// works but there is probably a better way
				// VARLOG_D(last_weapon->AvailableFireModes.Num());
				// last_weapon->AvailableFireModes.Data = reinterpret_cast<SDK::EFireMode*>(malloc(sizeof(uint8) * 3));
				// last_weapon->AvailableFireModes[0] = SDK::EFireMode::FM_Single;
				// last_weapon->AvailableFireModes[1] = SDK::EFireMode::FM_Auto;
				// last_weapon->AvailableFireModes[2] = SDK::EFireMode::FM_Burst;
				// last_weapon->AvailableFireModes.NumElements = 3;
				// last_weapon->AvailableFireModes.MaxElements = 3;


				auto character = engine_data::GetLocalPlayerCharacter();

				// I think this works but it doesnt play the effects.
				// character->QuickThrowItem->RedotonateCount = 5;
				// character->QuickThrowItem->ReDetonationTime = 0.5f;
				// character->QuickThrowItem->GrenadeSpeed = 100.0f;



				SPE("TEST FUNC COMPLETED WITHOUT ERROR");
				client_lib::modules::ui->Notify(L"Test Feature Ran Successfully", 1);
			}
			catch (...)
			{
				ERR("Threw on test feature");
				client_lib::modules::ui->Notify(L"Error in Test Feature", 1, true);

			}
		};
}
