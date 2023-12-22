#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayTimeBar.W_ReplayTimeBar_C
// (None)

class UClass* UW_ReplayTimeBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayTimeBar_C");

	return Clss;
}


// W_ReplayTimeBar_C W_ReplayTimeBar.Default__W_ReplayTimeBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayTimeBar_C* UW_ReplayTimeBar_C::GetDefaultObj()
{
	static class UW_ReplayTimeBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayTimeBar_C*>(UW_ReplayTimeBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Get_ReplaySlider_Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_ReplayTimeBar_C::Get_ReplaySlider_Value(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "Get_ReplaySlider_Value");

	Params::UW_ReplayTimeBar_C_Get_ReplaySlider_Value_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Get_ProgressBar__Percent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_ReplayTimeBar_C::Get_ProgressBar__Percent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "Get_ProgressBar__Percent_0");

	Params::UW_ReplayTimeBar_C_Get_ProgressBar__Percent_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayTimeBar_C::BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayTimeBar_C::BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReplayTimeBar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayTimeBar_C::BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.AddEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BarPercentage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReplayEvent                ReplayEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReplayTimeBar_C::AddEvent(float BarPercentage, const struct FReplayEvent& ReplayEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "AddEvent");

	Params::UW_ReplayTimeBar_C_AddEvent_Params Parms{};

	Parms.BarPercentage = BarPercentage;
	Parms.ReplayEvent = ReplayEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayTimeBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "Tick");

	Params::UW_ReplayTimeBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.ExecuteUbergraph_W_ReplayTimeBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetWidgetSize_Local_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayEventMarker_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BarPercentage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReplayEvent                K2Node_CustomEvent_ReplayEvent                                   (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UW_ReplayTimeBar_C::ExecuteUbergraph_W_ReplayTimeBar(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetWidgetSize_Local_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_ReplayEventMarker_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_ComponentBoundEvent_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float K2Node_CustomEvent_BarPercentage, const struct FReplayEvent& K2Node_CustomEvent_ReplayEvent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "ExecuteUbergraph_W_ReplayTimeBar");

	Params::UW_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetWidgetSize_Local_ReturnValue = CallFunc_GetWidgetSize_Local_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReplay_Controller_1 = K2Node_DynamicCast_AsReplay_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_BarPercentage = K2Node_CustomEvent_BarPercentage;
	Parms.K2Node_CustomEvent_ReplayEvent = K2Node_CustomEvent_ReplayEvent;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnChangeCurrentTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewCurrentTimeInSeconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayTimeBar_C::OnChangeCurrentTime__DelegateSignature(float NewCurrentTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "OnChangeCurrentTime__DelegateSignature");

	Params::UW_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature_Params Parms{};

	Parms.NewCurrentTimeInSeconds = NewCurrentTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnScrubbingEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewCurrentTimeInSeconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayTimeBar_C::OnScrubbingEnd__DelegateSignature(float NewCurrentTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "OnScrubbingEnd__DelegateSignature");

	Params::UW_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature_Params Parms{};

	Parms.NewCurrentTimeInSeconds = NewCurrentTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnScrubbingBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayTimeBar_C::OnScrubbingBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayTimeBar_C", "OnScrubbingBegin__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


