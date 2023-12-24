#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PauseMenu_V2.W_PauseMenu_V2_C
// (None)

class UClass* UW_PauseMenu_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PauseMenu_V2_C");

	return Clss;
}


// W_PauseMenu_V2_C W_PauseMenu_V2.Default__W_PauseMenu_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PauseMenu_V2_C* UW_PauseMenu_V2_C::GetDefaultObj()
{
	static class UW_PauseMenu_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PauseMenu_V2_C*>(UW_PauseMenu_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Initialize Exit Query Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLobby_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UW_PauseMenu_V2_C::Initialize_Exit_Query_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Initialize Exit Query Modal");

	Params::UW_PauseMenu_V2_C_Initialize_Exit_Query_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsLobby_ReturnValue = CallFunc_IsLobby_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.IsInReplay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InReplay                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::IsInReplay(bool* InReplay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "IsInReplay");

	Params::UW_PauseMenu_V2_C_IsInReplay_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InReplay != nullptr)
		*InReplay = Parms.InReplay;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.IsInCommander
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InCommander                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::IsInCommander(bool* InCommander, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "IsInCommander");

	Params::UW_PauseMenu_V2_C_IsInCommander_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InCommander != nullptr)
		*InCommander = Parms.InCommander;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.IsInTraining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InTraining                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrainingGM*                 K2Node_DynamicCast_AsTraining_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::IsInTraining(bool* InTraining, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ATrainingGM* K2Node_DynamicCast_AsTraining_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "IsInTraining");

	Params::UW_PauseMenu_V2_C_IsInTraining_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsTraining_GM = K2Node_DynamicCast_AsTraining_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InTraining != nullptr)
		*InTraining = Parms.InTraining;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ExitToMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetPublicLobbyCooldown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPublicMissionInProgress_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreaming*             CallFunc_StreamInLevel_OutStreamedLevel                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StreamInLevel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ExitToMainMenu(bool CallFunc_SetPublicLobbyCooldown_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class ULevelStreaming* CallFunc_StreamInLevel_OutStreamedLevel, bool CallFunc_StreamInLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ExitToMainMenu");

	Params::UW_PauseMenu_V2_C_ExitToMainMenu_Params Parms{};

	Parms.CallFunc_SetPublicLobbyCooldown_ReturnValue = CallFunc_SetPublicLobbyCooldown_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_IsPublicMissionInProgress_ReturnValue = CallFunc_IsPublicMissionInProgress_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_StreamInLevel_OutStreamedLevel = CallFunc_StreamInLevel_OutStreamedLevel;
	Parms.CallFunc_StreamInLevel_ReturnValue = CallFunc_StreamInLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Initialize Exit Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Initialize_Exit_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Initialize Exit Modal");

	Params::UW_PauseMenu_V2_C_Initialize_Exit_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Initialize ReturnToLobby Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Initialize_ReturnToLobby_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Initialize ReturnToLobby Modal");

	Params::UW_PauseMenu_V2_C_Initialize_ReturnToLobby_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Initialize Restart Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Initialize Restart Modal");

	Params::UW_PauseMenu_V2_C_Initialize_Restart_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ShouldShowStationButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInReplay_InReplay                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInCommander_InCommander                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ShouldShowStationButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ShouldShowStationButton");

	Params::UW_PauseMenu_V2_C_ShouldShowStationButton_Params Parms{};

	Parms.CallFunc_IsInReplay_InReplay = CallFunc_IsInReplay_InReplay;
	Parms.CallFunc_IsInCommander_InCommander = CallFunc_IsInCommander_InCommander;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ShouldShowQuitToDesktopButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERuntimeDevice          CallFunc_GetRuntimeDeviceProfile_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ShouldShowQuitToDesktopButton(bool* Show, enum class ERuntimeDevice CallFunc_GetRuntimeDeviceProfile_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ShouldShowQuitToDesktopButton");

	Params::UW_PauseMenu_V2_C_ShouldShowQuitToDesktopButton_Params Parms{};

	Parms.CallFunc_GetRuntimeDeviceProfile_ReturnValue = CallFunc_GetRuntimeDeviceProfile_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ShouldShowRestartButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInReplay_InReplay                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInCommander_InCommander                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ShouldShowRestartButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ShouldShowRestartButton");

	Params::UW_PauseMenu_V2_C_ShouldShowRestartButton_Params Parms{};

	Parms.CallFunc_IsInReplay_InReplay = CallFunc_IsInReplay_InReplay;
	Parms.CallFunc_IsInCommander_InCommander = CallFunc_IsInCommander_InCommander;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ShouldShowLobbyManagerButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInReplay_InReplay                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ShouldShowLobbyManagerButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ShouldShowLobbyManagerButton");

	Params::UW_PauseMenu_V2_C_ShouldShowLobbyManagerButton_Params Parms{};

	Parms.CallFunc_IsInReplay_InReplay = CallFunc_IsInReplay_InReplay;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PauseMenu_V2_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BP_GetDesiredFocusTarget");

	Params::UW_PauseMenu_V2_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_PauseMenu_V2_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BP_OnHandleBackAction");

	Params::UW_PauseMenu_V2_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.GetMissionBoxVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_V2_C::GetMissionBoxVisibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "GetMissionBoxVisibility");

	Params::UW_PauseMenu_V2_C_GetMissionBoxVisibility_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Get_HorizontalBox_25_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_V2_C::Get_HorizontalBox_25_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Get_HorizontalBox_25_Visibility_0");

	Params::UW_PauseMenu_V2_C_Get_HorizontalBox_25_Visibility_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Get_Version_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_PauseMenu_V2_C::Get_Version_Text_0(const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Get_Version_Text_0");

	Params::UW_PauseMenu_V2_C_Get_Version_Text_0_Params Parms{};

	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PauseMenu_V2_C_BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Tick");

	Params::UW_PauseMenu_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Yes Restart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::Yes_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Yes Restart");

	Params::UW_PauseMenu_V2_C_Yes_Restart_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Yes ReturnToLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::Yes_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Yes ReturnToLobby");

	Params::UW_PauseMenu_V2_C_Yes_ReturnToLobby_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Cancel Modal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Cancel_Modal(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Cancel Modal");

	Params::UW_PauseMenu_V2_C_Cancel_Modal_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Exit to Main Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::Exit_to_Main_Menu(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Exit to Main Menu");

	Params::UW_PauseMenu_V2_C_Exit_to_Main_Menu_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Exit to Desktop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::Exit_to_Desktop(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Exit to Desktop");

	Params::UW_PauseMenu_V2_C_Exit_to_Desktop_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.No Restart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::No_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "No Restart");

	Params::UW_PauseMenu_V2_C_No_Restart_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.No ReturnToLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::No_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "No ReturnToLobby");

	Params::UW_PauseMenu_V2_C_No_ReturnToLobby_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Yes Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::Yes_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Yes Exit");

	Params::UW_PauseMenu_V2_C_Yes_Exit_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.No Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PauseMenu_V2_C::No_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "No Exit");

	Params::UW_PauseMenu_V2_C_No_Exit_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.Cancel Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_V2_C::Cancel_Exit(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "Cancel Exit");

	Params::UW_PauseMenu_V2_C_Cancel_Exit_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ExecuteUbergraph_W_PauseMenu_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ExfilPortal_C*           CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPublicMissionInProgress_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLobbyManagerButton_Show                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowQuitToDesktopButton_Show                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowRestartButton_Show                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShouldShowStationButton_Show                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialize_Restart_Modal_OutPopup                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_9                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_7                                   (None)
// class UW_StandardModal_C*          CallFunc_Initialize_ReturnToLobby_Modal_OutPopup                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_8                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_6                                   (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_7                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialize_Exit_Modal_OutPopup                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_6                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_5                                   (None)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_5                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_4                                   (None)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_3                                   (None)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_2                                   (None)
// class UReadyOrNotGameInstance*     CallFunc_GetRONGameInstance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSafeMode_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          CallFunc_Initialize_Exit_Query_Modal_OutPopup                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLobby_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_V2_C::ExecuteUbergraph_W_PauseMenu_V2(int32 EntryPoint, class ABP_ExfilPortal_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_ShouldShowLobbyManagerButton_Show, bool CallFunc_ShouldShowQuitToDesktopButton_Show, bool CallFunc_ShouldShowRestartButton_Show, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_ShouldShowStationButton_Show, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_9, class FText K2Node_CustomEvent_TextEntry_7, class UW_StandardModal_C* CallFunc_Initialize_ReturnToLobby_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_8, class FText K2Node_CustomEvent_TextEntry_6, class UStandardModal* K2Node_CustomEvent_CallingModal_7, class UW_StandardModal_C* CallFunc_Initialize_Exit_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_6, class FText K2Node_CustomEvent_TextEntry_5, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_5, class FText K2Node_CustomEvent_TextEntry_4, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_3, class FText K2Node_CustomEvent_TextEntry_2, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, bool CallFunc_IsSafeMode_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Exit_Query_Modal_OutPopup, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry, bool CallFunc_IsMultiplayer_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal, bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ExecuteUbergraph_W_PauseMenu_V2");

	Params::UW_PauseMenu_V2_C_ExecuteUbergraph_W_PauseMenu_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.CallFunc_IsPublicMissionInProgress_ReturnValue = CallFunc_IsPublicMissionInProgress_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_ShouldShowLobbyManagerButton_Show = CallFunc_ShouldShowLobbyManagerButton_Show;
	Parms.CallFunc_ShouldShowQuitToDesktopButton_Show = CallFunc_ShouldShowQuitToDesktopButton_Show;
	Parms.CallFunc_ShouldShowRestartButton_Show = CallFunc_ShouldShowRestartButton_Show;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_ShouldShowStationButton_Show = CallFunc_ShouldShowStationButton_Show;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Initialize_Restart_Modal_OutPopup = CallFunc_Initialize_Restart_Modal_OutPopup;
	Parms.K2Node_CustomEvent_CallingModal_9 = K2Node_CustomEvent_CallingModal_9;
	Parms.K2Node_CustomEvent_TextEntry_7 = K2Node_CustomEvent_TextEntry_7;
	Parms.CallFunc_Initialize_ReturnToLobby_Modal_OutPopup = CallFunc_Initialize_ReturnToLobby_Modal_OutPopup;
	Parms.K2Node_CustomEvent_CallingModal_8 = K2Node_CustomEvent_CallingModal_8;
	Parms.K2Node_CustomEvent_TextEntry_6 = K2Node_CustomEvent_TextEntry_6;
	Parms.K2Node_CustomEvent_CallingModal_7 = K2Node_CustomEvent_CallingModal_7;
	Parms.CallFunc_Initialize_Exit_Modal_OutPopup = CallFunc_Initialize_Exit_Modal_OutPopup;
	Parms.K2Node_CustomEvent_CallingModal_6 = K2Node_CustomEvent_CallingModal_6;
	Parms.K2Node_CustomEvent_TextEntry_5 = K2Node_CustomEvent_TextEntry_5;
	Parms.K2Node_CustomEvent_CallingModal_5 = K2Node_CustomEvent_CallingModal_5;
	Parms.K2Node_CustomEvent_TextEntry_4 = K2Node_CustomEvent_TextEntry_4;
	Parms.K2Node_CustomEvent_CallingModal_4 = K2Node_CustomEvent_CallingModal_4;
	Parms.K2Node_CustomEvent_TextEntry_3 = K2Node_CustomEvent_TextEntry_3;
	Parms.K2Node_CustomEvent_CallingModal_3 = K2Node_CustomEvent_CallingModal_3;
	Parms.K2Node_CustomEvent_TextEntry_2 = K2Node_CustomEvent_TextEntry_2;
	Parms.CallFunc_GetRONGameInstance_ReturnValue = CallFunc_GetRONGameInstance_ReturnValue;
	Parms.CallFunc_IsSafeMode_ReturnValue = CallFunc_IsSafeMode_ReturnValue;
	Parms.CallFunc_Initialize_Exit_Query_Modal_OutPopup = CallFunc_Initialize_Exit_Query_Modal_OutPopup;
	Parms.CallFunc_IsLobby_ReturnValue = CallFunc_IsLobby_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.QuitToDesktopClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::QuitToDesktopClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "QuitToDesktopClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.LobbyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::LobbyClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "LobbyClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.InviteFriendsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::InviteFriendsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "InviteFriendsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.RestartClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::RestartClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "RestartClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.SettingsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::SettingsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "SettingsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.LobbyManagerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::LobbyManagerClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "LobbyManagerClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_V2.W_PauseMenu_V2_C.ResumeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_V2_C::ResumeClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_V2_C", "ResumeClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


