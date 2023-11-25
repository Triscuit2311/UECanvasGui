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
		if (!player || !controller || !character)
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
		character = (SDK::APlayerCharacter*)controller->AcknowledgedPawn;
	}
	catch (...)
	{
		return false;
	}
	return true;
}


