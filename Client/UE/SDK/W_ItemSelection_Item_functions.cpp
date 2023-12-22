#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSelection_Item.W_ItemSelection_Item_C
// (None)

class UClass* UW_ItemSelection_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSelection_Item_C");

	return Clss;
}


// W_ItemSelection_Item_C W_ItemSelection_Item.Default__W_ItemSelection_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSelection_Item_C* UW_ItemSelection_Item_C::GetDefaultObj()
{
	static class UW_ItemSelection_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSelection_Item_C*>(UW_ItemSelection_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopFadeOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::StopFadeOutAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "StopFadeOutAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopConfirmAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::StopConfirmAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "StopConfirmAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_Item_C::ConfirmSelection(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "ConfirmSelection");

	Params::UW_ItemSelection_Item_C_ConfirmSelection_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_Item_C::Deselect(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Deselect");

	Params::UW_ItemSelection_Item_C_Deselect_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_Item_C::Select(bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Select");

	Params::UW_ItemSelection_Item_C_Select_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_Item_C::FadeOut(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "FadeOut");

	Params::UW_ItemSelection_Item_C_FadeOut_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ChangeIconsIfBuildIsPirated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UW_ItemSelection_Item_C::ChangeIconsIfBuildIsPirated(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "ChangeIconsIfBuildIsPirated");

	Params::UW_ItemSelection_Item_C_ChangeIconsIfBuildIsPirated_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.OnAnimFadeOut_Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::OnAnimFadeOut_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "OnAnimFadeOut_Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_Item_C::Initialize(struct FSlateBrush& InBrush, bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Initialize");

	Params::UW_ItemSelection_Item_C_Initialize_Params Parms{};

	Parms.InBrush = InBrush;
	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Reset Selection Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::Reset_Selection_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Reset Selection Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Re-Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_Item_C::ReMinusInitialize(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "Re-Initialize");

	Params::UW_ItemSelection_Item_C_ReMinusInitialize_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "PreConstruct");

	Params::UW_ItemSelection_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ExecuteUbergraph_W_ItemSelection_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBuildPirated_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_CustomEvent_InBrush                                       (ConstParm)
// bool                               K2Node_CustomEvent_bIsVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bVisible                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildPirated_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_Item_C::ExecuteUbergraph_W_ItemSelection_Item(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsBuildPirated_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_CustomEvent_InBrush, bool K2Node_CustomEvent_bIsVisible, float K2Node_Select_Default, bool K2Node_CustomEvent_bVisible, bool K2Node_Event_IsDesignTime, bool CallFunc_IsBuildPirated_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "ExecuteUbergraph_W_ItemSelection_Item");

	Params::UW_ItemSelection_Item_C_ExecuteUbergraph_W_ItemSelection_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsBuildPirated_ReturnValue = CallFunc_IsBuildPirated_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_CustomEvent_InBrush = K2Node_CustomEvent_InBrush;
	Parms.K2Node_CustomEvent_bIsVisible = K2Node_CustomEvent_bIsVisible;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_bVisible = K2Node_CustomEvent_bVisible;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsBuildPirated_ReturnValue_1 = CallFunc_IsBuildPirated_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimSelectFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::ED_OnAnimSelectFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "ED_OnAnimSelectFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimFadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_Item_C::ED_OnAnimFadeOutFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_Item_C", "ED_OnAnimFadeOutFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


