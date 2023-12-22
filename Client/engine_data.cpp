#include "pch.h"
#include "engine_data.hpp"

bool engine_data::static_objects::ensure()
{
	if(!KismetSystemLibrary)
	{
		update();
		if(!KismetSystemLibrary)
		{
			return false;
		}
	}
	return true;
}

bool engine_data::static_objects::update()
{
	try {
		KismetSystemLibrary = reinterpret_cast<SDK::UKismetSystemLibrary*>(SDK::UKismetSystemLibrary::StaticClass());
	}
	catch (...)
	{
		return false;
	}
	return true;
}


bool engine_data::local_player_data::ensure()
{
	if(!player || !controller || !character)
	{
		update();
		if (!player || !controller  || !character)
		{
			return false;
		}
	}
	return true;
}

bool engine_data::local_player_data::update()
{
	try {
		player = (SDK::ULocalPlayer*)GWORLD->OwningGameInstance->LocalPlayers[0];
		controller = (SDK::AReadyOrNotPlayerController*)player->PlayerController;
		character = (SDK::APlayerCharacter*)controller->Character;
	}
	catch (...)
	{
		return false;
	}
	return true;
}

bool engine_data::current_game_data::ensure()
{
	if (!game_mode || !game_state)
	{
		update();
		if (!game_mode || !game_state)
		{
			return false;
		}
	}
	return true;
}

bool engine_data::current_game_data::update()
{
	try {
		game_mode = (SDK::AReadyOrNotGameMode*)GWORLD->AuthorityGameMode;
		game_state = game_mode->GetReadyOrNotGameState();
	}
	catch (...)
	{
		return false;
	}
	return true;
}

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
