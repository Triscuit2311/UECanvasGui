#include "pch.h"
#include "engine_data.hpp"

SDK::AReadyOrNotGameState* engine_data::GetGameState()
{
	SDK::AReadyOrNotGameMode* game_mode = (SDK::AReadyOrNotGameMode*)(GWORLD->AuthorityGameMode);
	return game_mode->GetReadyOrNotGameState();
}

SDK::AReadyOrNotGameMode* engine_data::GetGameMode()
{
	return (SDK::AReadyOrNotGameMode*)(GWORLD->AuthorityGameMode);
}

SDK::ULocalPlayer* engine_data::GetLocalPlayer()
{
	return GWORLD->OwningGameInstance->LocalPlayers[0];
}

SDK::AReadyOrNotPlayerController* engine_data::GetLocalPlayerController()
{
	return (SDK::AReadyOrNotPlayerController * )GWORLD->OwningGameInstance->LocalPlayers[0]->PlayerController;
}

SDK::APlayerCharacter* engine_data::GetLocalPlayerCharacter()
{
	return (SDK::APlayerCharacter*)GWORLD->OwningGameInstance->LocalPlayers[0]->PlayerController->Character;
}

engine_data::engine_data()
{
	fire_modes_unlocked = SDK::TArray<SDK::EFireMode>(3);
	fire_modes_unlocked[0] = SDK::EFireMode::FM_Single;
	fire_modes_unlocked[1] = SDK::EFireMode::FM_Auto;
	fire_modes_unlocked[2] = SDK::EFireMode::FM_Burst;
	fire_modes_unlocked[2] = SDK::EFireMode::FM_Continuous;
}


bool engine_data::LoopAICharacters(std::function<void(SDK::ACyberneticCharacter*)> func, bool exit_on_error)
{
	SDK::TArray<SDK::ACyberneticCharacter*> ai_arr = GetGameState()->AllAICharacters;
	for (int i = 0; i < ai_arr.Num(); ++i)
	{
		try
		{
			if (!ai_arr.IsValidIndex(i)) { continue; }
			func(ai_arr[i]);
		}
		catch (...)
		{
			if (exit_on_error) { return false; }
		}
	}
	return true;
}