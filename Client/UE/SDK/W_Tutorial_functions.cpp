#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Tutorial.W_Tutorial_C
// (None)

class UClass* UW_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Tutorial_C");

	return Clss;
}


// W_Tutorial_C W_Tutorial.Default__W_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Tutorial_C* UW_Tutorial_C::GetDefaultObj()
{
	static class UW_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Tutorial_C*>(UW_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Tutorial.W_Tutorial_C.HideMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::HideMainWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "HideMainWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.ShowMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::ShowMainWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "ShowMainWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.Hide Widget End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::Hide_Widget_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "Hide Widget End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "RefreshWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Tutorial_C::BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.ExecuteUbergraph_W_Tutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::ExecuteUbergraph_W_Tutorial(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "ExecuteUbergraph_W_Tutorial");

	Params::UW_Tutorial_C_ExecuteUbergraph_W_Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tutorial.W_Tutorial_C.OnTutorialWidgetRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::OnTutorialWidgetRemoved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "OnTutorialWidgetRemoved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


