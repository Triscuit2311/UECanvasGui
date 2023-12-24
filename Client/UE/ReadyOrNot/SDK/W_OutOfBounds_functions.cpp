#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_OutOfBounds.W_OutOfBounds_C
// (None)

class UClass* UW_OutOfBounds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_OutOfBounds_C");

	return Clss;
}


// W_OutOfBounds_C W_OutOfBounds.Default__W_OutOfBounds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_OutOfBounds_C* UW_OutOfBounds_C::GetDefaultObj()
{
	static class UW_OutOfBounds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_OutOfBounds_C*>(UW_OutOfBounds_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_OutOfBounds.W_OutOfBounds_C.SequenceEvent__ENTRYPOINTW_OutOfBounds_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::SequenceEvent__ENTRYPOINTW_OutOfBounds_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "SequenceEvent__ENTRYPOINTW_OutOfBounds_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OutOfBounds.W_OutOfBounds_C.SequenceEvent__ENTRYPOINTW_OutOfBounds_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::SequenceEvent__ENTRYPOINTW_OutOfBounds_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "SequenceEvent__ENTRYPOINTW_OutOfBounds_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OutOfBounds.W_OutOfBounds_C.UpdateTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UW_OutOfBounds_C::UpdateTimeRemaining(float Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "UpdateTimeRemaining");

	Params::UW_OutOfBounds_C_UpdateTimeRemaining_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OutOfBounds.W_OutOfBounds_C.HideWarningInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OutOfBounds_C::HideWarningInfo(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "HideWarningInfo");

	Params::UW_OutOfBounds_C_HideWarningInfo_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OutOfBounds.W_OutOfBounds_C.ShowWarningInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OutOfBounds_C::ShowWarningInfo(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "ShowWarningInfo");

	Params::UW_OutOfBounds_C_ShowWarningInfo_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OutOfBounds.W_OutOfBounds_C.FadeIn_StartCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::FadeIn_StartCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "FadeIn_StartCountdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OutOfBounds.W_OutOfBounds_C.FadeOut_StopCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::FadeOut_StopCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "FadeOut_StopCountdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OutOfBounds.W_OutOfBounds_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_OutOfBounds_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "PreConstruct");

	Params::UW_OutOfBounds_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OutOfBounds.W_OutOfBounds_C.ExecuteUbergraph_W_OutOfBounds
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_OutOfBounds_C::ExecuteUbergraph_W_OutOfBounds(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "ExecuteUbergraph_W_OutOfBounds");

	Params::UW_OutOfBounds_C_ExecuteUbergraph_W_OutOfBounds_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OutOfBounds.W_OutOfBounds_C.Event_StopCountdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::Event_StopCountdown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "Event_StopCountdown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OutOfBounds.W_OutOfBounds_C.Event_StartCountdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OutOfBounds_C::Event_StartCountdown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OutOfBounds_C", "Event_StartCountdown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


