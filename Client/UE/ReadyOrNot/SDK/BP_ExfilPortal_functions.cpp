#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExfilPortal.BP_ExfilPortal_C
// (Actor)

class UClass* ABP_ExfilPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExfilPortal_C");

	return Clss;
}


// BP_ExfilPortal_C BP_ExfilPortal.Default__BP_ExfilPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExfilPortal_C* ABP_ExfilPortal_C::GetDefaultObj()
{
	static class ABP_ExfilPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExfilPortal_C*>(ABP_ExfilPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExfilPortal.BP_ExfilPortal_C.OnPlayerInteracted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ExfilPortal_C::OnPlayerInteracted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExfilPortal_C", "OnPlayerInteracted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExfilPortal.BP_ExfilPortal_C.CancelModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExfilPortal_C::CancelModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExfilPortal_C", "CancelModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExfilPortal.BP_ExfilPortal_C.ConfirmModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExfilPortal_C::ConfirmModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExfilPortal_C", "ConfirmModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExfilPortal.BP_ExfilPortal_C.ExecuteUbergraph_BP_ExfilPortal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 CallFunc_CreateWidgetForPlayer_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ExfilOverlay_C*           K2Node_DynamicCast_AsW_Exfil_Overlay                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExfilPortal_C::ExecuteUbergraph_BP_ExfilPortal(int32 EntryPoint, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_CreateWidgetForPlayer_ReturnValue, class UW_ExfilOverlay_C* K2Node_DynamicCast_AsW_Exfil_Overlay, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExfilPortal_C", "ExecuteUbergraph_BP_ExfilPortal");

	Params::ABP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateWidgetForPlayer_ReturnValue = CallFunc_CreateWidgetForPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Exfil_Overlay = K2Node_DynamicCast_AsW_Exfil_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_2 = CallFunc_SetGamePaused_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


