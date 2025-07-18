#include "pch.h"
#include "engine_data.hpp"

// SDK::AReadyOrNotGameState* engine_data::GetGameState()
// {
// 	SDK::AReadyOrNotGameMode* game_mode = (SDK::AReadyOrNotGameMode*)(GWORLD->AuthorityGameMode);
// 	return game_mode->GetReadyOrNotGameState();
// }
//
// SDK::AReadyOrNotGameMode* engine_data::GetGameMode()
// {
// 	return (SDK::AReadyOrNotGameMode*)(GWORLD->AuthorityGameMode);
// }

SDK::ULocalPlayer* engine_data::GetLocalPlayer()
{
	return GWORLD->OwningGameInstance->LocalPlayers[0];
}

engine_data::engine_data()
{
}

SDK::AValPlayerController* engine_data::GetLocalPlayerController()
{
	return (SDK::AValPlayerController*)GWORLD->OwningGameInstance->LocalPlayers[0]->PlayerController;
}


SDK::AValCharacter* engine_data::GetLocalPlayerCharacter()
{
	return (SDK::AValCharacter*)GWORLD->OwningGameInstance->LocalPlayers[0]->PlayerController->Character;
}



//
// bool engine_data::LoopAICharacters(std::function<void(SDK::ACyberneticCharacter*)> func, bool exit_on_error)
// {
// 	SDK::TArray<SDK::ACyberneticCharacter*> arr = GetGameState()->AllAICharacters;
// 	for (int i = 0; i < arr.Num(); ++i)
// 	{
// 		try
// 		{
// 			if (!arr.IsValidIndex(i)) { continue; }
// 			func(arr[i]);
// 		}
// 		catch (...)
// 		{
// 			if (exit_on_error) { return false; }
// 		}
// 	}
// 	return true;
// }
//
// bool engine_data::LoopItems(std::function<void(SDK::ABaseItem*)> func, bool exit_on_error)
// {
// 	SDK::TArray<SDK::ABaseItem*> arr = GetGameState()->AllItems;
// 	for (int i = 0; i < arr.Num(); ++i)
// 	{
// 		try
// 		{
// 			if (!arr.IsValidIndex(i)) { continue; }
// 			func(arr[i]);
// 		}
// 		catch (...)
// 		{
// 			if (exit_on_error) { return false; }
// 		}
// 	}
// 	return true;
// }
//
// bool engine_data::LoopReportables(std::function<void(SDK::AReportableActor*)> func, bool exit_on_error)
// {
// 	SDK::TArray<SDK::AReportableActor*> arr = GetGameState()->AllReportableActors;
// 	for (int i = 0; i < arr.Num(); ++i)
// 	{
// 		try
// 		{
// 			if (!arr.IsValidIndex(i)) { continue; }
// 			func(arr[i]);
// 		}
// 		catch (...)
// 		{
// 			if (exit_on_error) { return false; }
// 		}
// 	}
// 	return true;
// }
//
