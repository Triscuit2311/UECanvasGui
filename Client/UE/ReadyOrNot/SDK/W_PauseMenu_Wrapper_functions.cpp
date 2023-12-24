#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C
// (None)

class UClass* UW_PauseMenu_Wrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PauseMenu_Wrapper_C");

	return Clss;
}


// W_PauseMenu_Wrapper_C W_PauseMenu_Wrapper.Default__W_PauseMenu_Wrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PauseMenu_Wrapper_C* UW_PauseMenu_Wrapper_C::GetDefaultObj()
{
	static class UW_PauseMenu_Wrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PauseMenu_Wrapper_C*>(UW_PauseMenu_Wrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.ResumeClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::ResumeClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "ResumeClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.OnLobbyManagerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::OnLobbyManagerClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "OnLobbyManagerClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.SettingsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::SettingsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "SettingsClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.RestartClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::RestartClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "RestartClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.InviteFriendsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::InviteFriendsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "InviteFriendsClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.LobbyClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::LobbyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "LobbyClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.QuitToDesktopClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_Wrapper_C::QuitToDesktopClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "QuitToDesktopClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C.ExecuteUbergraph_W_PauseMenu_Wrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGM*                     K2Node_DynamicCast_AsCoop_GM                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_ConsoleLobbyManager_C*    CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SettingsMenuGamepad_C*    CallFunc_BP_AddWidget_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PauseMenu_V2_C*           K2Node_DynamicCast_AsW_Pause_Menu_V2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameMode*         K2Node_DynamicCast_AsReady_or_Not_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// enum class EBlueprintResultSwitch  CallFunc_ShowInviteUI_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)

void UW_PauseMenu_Wrapper_C::ExecuteUbergraph_W_PauseMenu_Wrapper(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_ConsoleLobbyManager_C* CallFunc_BP_AddWidget_ReturnValue, class UW_SettingsMenuGamepad_C* CallFunc_BP_AddWidget_ReturnValue_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_PauseMenu_V2_C* K2Node_DynamicCast_AsW_Pause_Menu_V2, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_Wrapper_C", "ExecuteUbergraph_W_PauseMenu_Wrapper");

	Params::UW_PauseMenu_Wrapper_C_ExecuteUbergraph_W_PauseMenu_Wrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GM = K2Node_DynamicCast_AsCoop_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.CallFunc_BP_AddWidget_ReturnValue_1 = CallFunc_BP_AddWidget_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Pause_Menu_V2 = K2Node_DynamicCast_AsW_Pause_Menu_V2;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Mode = K2Node_DynamicCast_AsReady_or_Not_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_ShowInviteUI_Result = CallFunc_ShowInviteUI_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


