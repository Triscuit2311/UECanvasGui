#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FPSCounter.W_FPSCounter_C
// (None)

class UClass* UW_FPSCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FPSCounter_C");

	return Clss;
}


// W_FPSCounter_C W_FPSCounter.Default__W_FPSCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FPSCounter_C* UW_FPSCounter_C::GetDefaultObj()
{
	static class UW_FPSCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FPSCounter_C*>(UW_FPSCounter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FPSCounter.W_FPSCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_FPSCounter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FPSCounter_C", "PreConstruct");

	Params::UW_FPSCounter_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FPSCounter.W_FPSCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_FPSCounter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FPSCounter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FPSCounter.W_FPSCounter_C.Check If Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FPSCounter_C::Check_If_Enabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FPSCounter_C", "Check If Enabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FPSCounter.W_FPSCounter_C.ExecuteUbergraph_W_FPSCounter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_bShowFPS                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_GetReflexLatency_bGameToRenderLatencyEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetReflexLatency_GametoRenderLatency                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatency_bGameLatencyEnabled                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetReflexLatency_GameLatencyInMS                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatency_bRenderLatencyEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetReflexLatency_RenderLatencyInMS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UW_FPSCounter_C::ExecuteUbergraph_W_FPSCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_GetShowFPS_bShowFPS, bool CallFunc_GetShowFPS_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GetReflexLatency_bGameToRenderLatencyEnabled, float CallFunc_GetReflexLatency_GametoRenderLatency, bool CallFunc_GetReflexLatency_bGameLatencyEnabled, float CallFunc_GetReflexLatency_GameLatencyInMS, bool CallFunc_GetReflexLatency_bRenderLatencyEnabled, float CallFunc_GetReflexLatency_RenderLatencyInMS, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FPSCounter_C", "ExecuteUbergraph_W_FPSCounter");

	Params::UW_FPSCounter_C_ExecuteUbergraph_W_FPSCounter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetShowFPS_bShowFPS = CallFunc_GetShowFPS_bShowFPS;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetReflexLatency_bGameToRenderLatencyEnabled = CallFunc_GetReflexLatency_bGameToRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatency_GametoRenderLatency = CallFunc_GetReflexLatency_GametoRenderLatency;
	Parms.CallFunc_GetReflexLatency_bGameLatencyEnabled = CallFunc_GetReflexLatency_bGameLatencyEnabled;
	Parms.CallFunc_GetReflexLatency_GameLatencyInMS = CallFunc_GetReflexLatency_GameLatencyInMS;
	Parms.CallFunc_GetReflexLatency_bRenderLatencyEnabled = CallFunc_GetReflexLatency_bRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatency_RenderLatencyInMS = CallFunc_GetReflexLatency_RenderLatencyInMS;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


