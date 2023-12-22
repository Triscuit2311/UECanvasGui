#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RButton.RButton_C
// (None)

class UClass* URButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RButton_C");

	return Clss;
}


// RButton_C RButton.Default__RButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URButton_C* URButton_C::GetDefaultObj()
{
	static class URButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URButton_C*>(URButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RButton.RButton_C.ShouldInvertHoverColors?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Invert_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void URButton_C::ShouldInvertHoverColors_(bool Invert_, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "ShouldInvertHoverColors?");

	Params::URButton_C_ShouldInvertHoverColors__Params Parms{};

	Parms.Invert_ = Invert_;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RButton.RButton_C.SetDefaultColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URButton_C::SetDefaultColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "SetDefaultColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.SetSelectedColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URButton_C::SetSelectedColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "SetSelectedColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void URButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URButton_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RButton.RButton_C.ExecuteUbergraph_RButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URButton_C::ExecuteUbergraph_RButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RButton_C", "ExecuteUbergraph_RButton");

	Params::URButton_C_ExecuteUbergraph_RButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


