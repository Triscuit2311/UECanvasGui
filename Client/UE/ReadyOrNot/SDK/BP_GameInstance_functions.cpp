#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// (None)

class UClass* UBP_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameInstance_C");

	return Clss;
}


// BP_GameInstance_C BP_GameInstance.Default__BP_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GameInstance_C* UBP_GameInstance_C::GetDefaultObj()
{
	static class UBP_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GameInstance_C*>(UBP_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameInstance.BP_GameInstance_C.OnFailure_A29261FE4E99C0ECFF6439AB0854D5B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::OnFailure_A29261FE4E99C0ECFF6439AB0854D5B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "OnFailure_A29261FE4E99C0ECFF6439AB0854D5B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_A29261FE4E99C0ECFF6439AB0854D5B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::OnSuccess_A29261FE4E99C0ECFF6439AB0854D5B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "OnSuccess_A29261FE4E99C0ECFF6439AB0854D5B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.AdjustVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::AdjustVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AdjustVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.AddPauseGameCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PauseCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::AddPauseGameCondition(const class FString& PauseCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AddPauseGameCondition");

	Params::UBP_GameInstance_C_AddPauseGameCondition_Params Parms{};

	Parms.PauseCondition = PauseCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.RemovePauseGameCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PauseCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::RemovePauseGameCondition(const class FString& PauseCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "RemovePauseGameCondition");

	Params::UBP_GameInstance_C_RemovePauseGameCondition_Params Parms{};

	Parms.PauseCondition = PauseCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.PauseGameWithConditon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewCondition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::PauseGameWithConditon(const class FString& NewCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "PauseGameWithConditon");

	Params::UBP_GameInstance_C_PauseGameWithConditon_Params Parms{};

	Parms.NewCondition = NewCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              PersonInvited                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GameInstance_C::OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "OnSessionInviteAccepted");

	Params::UBP_GameInstance_C_OnSessionInviteAccepted_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInvited = PersonInvited;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.AdjustAccessibilitySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::AdjustAccessibilitySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AdjustAccessibilitySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_PauseCondition_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PauseCondition                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_NewCondition                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LocalPlayerNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              K2Node_Event_PersonInvited                                       (None)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin                                       (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadColorblindStrength_ColorblindStrength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_StreamInSession_OutStreamedLevel                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StreamInSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorVisionDeficiency  CallFunc_LoadColorblindMode_ColorVisionDeficiency                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, const class FString& K2Node_Event_PauseCondition_1, const class FString& K2Node_Event_PauseCondition, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, const class FString& K2Node_CustomEvent_NewCondition, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, class ULevelStreaming* CallFunc_StreamInSession_OutStreamedLevel, bool CallFunc_StreamInSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "ExecuteUbergraph_BP_GameInstance");

	Params::UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.K2Node_Event_PauseCondition_1 = K2Node_Event_PauseCondition_1;
	Parms.K2Node_Event_PauseCondition = K2Node_Event_PauseCondition;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewCondition = K2Node_CustomEvent_NewCondition;
	Parms.K2Node_Event_LocalPlayerNum = K2Node_Event_LocalPlayerNum;
	Parms.K2Node_Event_PersonInvited = K2Node_Event_PersonInvited;
	Parms.K2Node_Event_SessionToJoin = K2Node_Event_SessionToJoin;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadColorblindStrength_ColorblindStrength = CallFunc_LoadColorblindStrength_ColorblindStrength;
	Parms.CallFunc_LoadColorblindStrength_ReturnValue = CallFunc_LoadColorblindStrength_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_StreamInSession_OutStreamedLevel = CallFunc_StreamInSession_OutStreamedLevel;
	Parms.CallFunc_StreamInSession_ReturnValue = CallFunc_StreamInSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadColorblindMode_ColorVisionDeficiency = CallFunc_LoadColorblindMode_ColorVisionDeficiency;
	Parms.CallFunc_LoadColorblindMode_ReturnValue = CallFunc_LoadColorblindMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


