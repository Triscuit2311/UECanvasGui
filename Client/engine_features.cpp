#include "pch.h"
#include "engine_features.hpp"

#include "client_lib.hpp"


void engine_features::exec_thread_func()
{
	while (!thread_exit_signal) {
		std::this_thread::sleep_for(exec_thread_sleep_time);
		try{
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
		
		}catch(...){}
	}
	INF("features->exec_thread exiting");

}

void engine_features::lazy_thread_func()
{
	while (!thread_exit_signal) {
		std::this_thread::sleep_for(lazy_thread_sleep_time);
		try{
		///////////////////////////////////////////////////
		// Features that execute lazily
		///////////////////////////////////////////////////
		
		const SDK::AReadyOrNotGameState* game_state = engine_data::GetGameState();
		const auto player_character = engine_data::GetLocalPlayerCharacter();

		if(score_grace.enabled && game_state)
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
		}else if(!player_god_mode.enabled && player_character)
		{
			player_character->bCanBeDamaged = true;
		}

		if (crouch_super_speed.enabled && player_character)
		{
			player_character->SpeedModifier_Crouch = 1000.0f;
		}else if(!crouch_super_speed.enabled && player_character)
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



		engine_data::LoopAICharacters([this](SDK::ACyberneticCharacter* ai)
			{
				if (!ai) { return; }
				switch(const auto team = ai->GetTeam())
				{
				case SDK::ETeamType::TT_NONE:
					break;
				case SDK::ETeamType::TT_SERT_RED:
					lazy_loop_squad(ai);
					break;
				case SDK::ETeamType::TT_SERT_BLUE:
					lazy_loop_squad(ai);
					break;
				case SDK::ETeamType::TT_SUSPECT:
					lazy_loop_suspect(ai);
					break;
				case SDK::ETeamType::TT_CIVILIAN:
					lazy_loop_civ(ai);
					break;
				case SDK::ETeamType::TT_SQUAD:
					lazy_loop_squad(ai);
					break;
				case SDK::ETeamType::TT_MAX:
					break;
				}
			}, false);


		///////////////////////////////////////////////////
		
		}catch(...){}
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
		engine_data::LoopAICharacters([](SDK::ACyberneticCharacter* ai)
			{
				if(const auto team = ai->GetTeam(); team == SDK::ETeamType::TT_SUSPECT)
				{
					ai->Surrender();
				}
			}, false);
		};
	collect_evidence.on_exec = []()
		{

			engine_data::LoopItems([](SDK::ABaseItem* item)
				{
				if (item->bIsEvidence)
				{
					engine_data::GetLocalPlayerCharacter()->Server_CollectEvidence(item);

				}
				}, false);

			client_lib::modules::ui->Notify(L"Collected Evidence", 3);
		};

	test_feature.on_exec = []()
		{


			client_lib::modules::ui->Notify(L"TEST FEATURE RAN", 3);
		};

	color_models.on_exec = [this]() {

		if (!color_models.red_mat || !color_models.green_mat || !color_models.blue_mat) {
			try
			{
				auto& all_objects = SDK::UObject::GObjects;
				for (int i = 0; i < all_objects->Num(); i++)
				{
					if (const auto curr_object = all_objects->GetByIndex(i))
					{
						if (curr_object && curr_object->IsA(SDK::UMaterial::StaticClass()))
						{
							auto name = all_objects->GetByIndex(i)->GetName();
							if (name == "Red") { color_models.red_mat = (SDK::UMaterial*)curr_object; }
							if (name == "Green") { color_models.green_mat = (SDK::UMaterial*)curr_object; }
							if (name == "Blue") { color_models.blue_mat = (SDK::UMaterial*)curr_object; }
						}
					}
				}
			}
			catch (...)
			{
				ERR("Error Getting Materials For Color Models");
			}
		}

		engine_data::LoopAICharacters([this](SDK::ACyberneticCharacter* ai)
			{
				if (!ai) { return; }
				SDK::UMaterial* mat_to_use = nullptr;
				switch (const auto team = ai->GetTeam())
				{
				case SDK::ETeamType::TT_NONE:
					mat_to_use = color_models.blue_mat;
					break;
				case SDK::ETeamType::TT_SERT_RED:
					mat_to_use = color_models.blue_mat;
					break;
				case SDK::ETeamType::TT_SERT_BLUE:
					mat_to_use = color_models.blue_mat;
					break;
				case SDK::ETeamType::TT_SUSPECT:
					mat_to_use = color_models.red_mat;
					break;
				case SDK::ETeamType::TT_CIVILIAN:
					mat_to_use = color_models.green_mat;
					break;
				case SDK::ETeamType::TT_SQUAD:
					mat_to_use = color_models.blue_mat;
					break;
				case SDK::ETeamType::TT_MAX:
					break;
				}
				if (mat_to_use == nullptr) { return; }
				auto materials = ai->Mesh->GetMaterials();
				int set = 0;
				for (int i = 0; i < materials.Num(); i++) {
					auto mat = materials[i];
					if (!materials.IsValidIndex(i) || mat == nullptr) {
						continue;
					}
					ai->Mesh->SetMaterial(i, mat_to_use);
				}

			}, false);

	};
}

void engine_features::lazy_loop_squad(SDK::ACyberneticCharacter* ai) const
{
	if(squad_godmode.enabled)
	{
		ai->bCanBeDamaged = false;
	}else
	{
		ai->bCanBeDamaged = true;
	}
}

void engine_features::lazy_loop_civ(SDK::ACyberneticCharacter* ai) const
{
	if (civ_godmode.enabled)
	{
		ai->bCanBeDamaged = false;
	}
	else
	{
		ai->bCanBeDamaged = true;
	}
}

void engine_features::lazy_loop_suspect(SDK::ACyberneticCharacter* ai)
{
}
