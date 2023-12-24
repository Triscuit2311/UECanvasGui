#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NetworkStatusErrors.W_NetworkStatusErrors_C
// (None)

class UClass* UW_NetworkStatusErrors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NetworkStatusErrors_C");

	return Clss;
}


// W_NetworkStatusErrors_C W_NetworkStatusErrors.Default__W_NetworkStatusErrors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NetworkStatusErrors_C* UW_NetworkStatusErrors_C::GetDefaultObj()
{
	static class UW_NetworkStatusErrors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NetworkStatusErrors_C*>(UW_NetworkStatusErrors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NetworkStatusErrors_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NetworkStatusErrors_C", "PreConstruct");

	Params::UW_NetworkStatusErrors_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.UpdateLagStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_NetworkStatusErrors_C::UpdateLagStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NetworkStatusErrors_C", "UpdateLagStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_NetworkStatusErrors_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NetworkStatusErrors_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NetworkStatusErrors.W_NetworkStatusErrors_C.ExecuteUbergraph_W_NetworkStatusErrors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNetworkConnectionStatus_AvgLag                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNetworkConnectionStatus_OutLostPackets               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNetworkConnectionStatus_InLostPackets                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNetworkStatus_AvgLag                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NetworkStatusErrors_C::ExecuteUbergraph_W_NetworkStatusErrors(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetNetworkConnectionStatus_AvgLag, int32 CallFunc_GetNetworkConnectionStatus_OutLostPackets, int32 CallFunc_GetNetworkConnectionStatus_InLostPackets, int32 CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt, int32 CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNetworkStatus_AvgLag, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NetworkStatusErrors_C", "ExecuteUbergraph_W_NetworkStatusErrors");

	Params::UW_NetworkStatusErrors_C_ExecuteUbergraph_W_NetworkStatusErrors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNetworkConnectionStatus_AvgLag = CallFunc_GetNetworkConnectionStatus_AvgLag;
	Parms.CallFunc_GetNetworkConnectionStatus_OutLostPackets = CallFunc_GetNetworkConnectionStatus_OutLostPackets;
	Parms.CallFunc_GetNetworkConnectionStatus_InLostPackets = CallFunc_GetNetworkConnectionStatus_InLostPackets;
	Parms.CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt = CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt;
	Parms.CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt = CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNetworkStatus_AvgLag = CallFunc_GetNetworkStatus_AvgLag;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


