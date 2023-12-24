#include "pch.h"
#include "engine_features.hpp"
#include "../../client_lib.hpp"


void engine_features::exec_thread_func()
{
	while (!thread_exit_signal)
	{
		std::this_thread::sleep_for(exec_thread_sleep_time);
		try {
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
		}catch (...){}
	}
	INF("features->exec_thread exiting");
}

void engine_features::lazy_thread_func()
{
	while (!thread_exit_signal)
	{
		std::this_thread::sleep_for(lazy_thread_sleep_time);
		try
		{
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
				for (int i = 0; i < last_weapon->RecoilPattern.Num(); ++i)
				{
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

			// engine_data::LoopAICharacters([this](SDK::ACyberneticCharacter* ai)
			// 	{
			// 		switch (ai->GetTeam())
			// 		{
			// 		case SDK::ETeamType::TT_NONE:
			// 			break;
			// 		case SDK::ETeamType::TT_SERT_RED:
			// 			lazy_loop_squad(ai);
			// 			break;
			// 		case SDK::ETeamType::TT_SERT_BLUE:
			// 			lazy_loop_squad(ai);
			// 			break;
			// 		case SDK::ETeamType::TT_SUSPECT:
			// 			lazy_loop_suspect(ai);
			// 			break;
			// 		case SDK::ETeamType::TT_CIVILIAN:
			// 			lazy_loop_civ(ai);
			// 			break;
			// 		case SDK::ETeamType::TT_SQUAD:
			// 			lazy_loop_squad(ai);
			// 			break;
			// 		case SDK::ETeamType::TT_MAX:
			// 			break;
			// 		}
			// 	});

			///////////////////////////////////////////////////
		}
		catch (...)
		{
		}
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

	color_models.on_exec = [this]()
	{
		LOG("Coloring Models");
		try
		{
			if (!color_models.blue_mat || !color_models.red_mat || !color_models.green_mat)
			{
				for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
				{
					if (const auto object = SDK::UObject::GObjects->GetByIndex(i))
					{
						if (object && object->IsA(SDK::UMaterial::StaticClass()))
						{
							auto name = SDK::UObject::GObjects->GetByIndex(i)->GetName();

							if (name == "Green")
							{
								color_models.green_mat = (SDK::UMaterial*)object;
								LOG("Populated Green Material");
							}
							else if (name == "Blue")
							{
								color_models.blue_mat = (SDK::UMaterial*)object;
								LOG("Populated Blue Material");
							}
							else if (name == "Red")
							{
								color_models.red_mat = (SDK::UMaterial*)object;
								LOG("Populated Red Material");
							}
						}
					}
				}
			}
		}
		catch (...)
		{
			ERR("Error thrown when trying to populate materials for color models");
		}

		engine_data::LoopAICharacters([this](SDK::ACyberneticCharacter* ai)
			{
			SDK::UMaterial* mat_to_use = color_models.green_mat;

			switch (ai->GetTeam())
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
			for (int i = 0; i < materials.Num(); i++)
			{
				const auto mat = materials[i];
				if (!materials.IsValidIndex(i) || mat == nullptr)
				{
					continue;
				}

				ai->Mesh->SetMaterial(i, mat_to_use);
			}
			});
	};

	force_surrender.on_exec = []()
	{
		engine_data::LoopAICharacters([](SDK::ACyberneticCharacter* ai)
			{
				if(ai->GetTeam() == SDK::ETeamType::TT_SUSPECT)
				{
					ai->Surrender();
				}
			});
	};



	test_feature.on_exec = [this]()
	{
		try{




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


void engine_features::lazy_loop_squad(SDK::ACyberneticCharacter* ai) const
{
	if (squad_godmode.enabled)
	{
		ai->bCanBeDamaged = false;
	}
	else
	{
		ai->bCanBeDamaged = false;
	}
}

void engine_features::lazy_loop_civ(SDK::ACyberneticCharacter* ai) const
{
	if(civ_godmode.enabled)
	{
		ai->bCanBeDamaged = false;
	}else
	{
		ai->bCanBeDamaged = false;
	}
}

void engine_features::lazy_loop_suspect(SDK::ACyberneticCharacter* ai)
{
}
