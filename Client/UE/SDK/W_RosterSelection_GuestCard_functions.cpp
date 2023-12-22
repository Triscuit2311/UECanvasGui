#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C
// (None)

class UClass* UW_RosterSelection_GuestCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RosterSelection_GuestCard_C");

	return Clss;
}


// W_RosterSelection_GuestCard_C W_RosterSelection_GuestCard.Default__W_RosterSelection_GuestCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RosterSelection_GuestCard_C* UW_RosterSelection_GuestCard_C::GetDefaultObj()
{
	static class UW_RosterSelection_GuestCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RosterSelection_GuestCard_C*>(UW_RosterSelection_GuestCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RosterSelection_GuestCard_C::SetHoverState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "SetHoverState");

	Params::UW_RosterSelection_GuestCard_C_SetHoverState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.SetupAptitude
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                ProgressBar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UW_RosterSelection_GuestCard_C::SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "SetupAptitude");

	Params::UW_RosterSelection_GuestCard_C_SetupAptitude_Params Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.TextBlock = TextBlock;
	Parms.Percent = Percent;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_GuestCard_C::BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_GuestCard_C::BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_GuestCard_C::BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_GuestCard_C::BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_GuestCard_C::BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "BndEvt__W_RosterSelection_Card_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.ExecuteUbergraph_W_RosterSelection_GuestCard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_GuestCard_C::ExecuteUbergraph_W_RosterSelection_GuestCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "ExecuteUbergraph_W_RosterSelection_GuestCard");

	Params::UW_RosterSelection_GuestCard_C_ExecuteUbergraph_W_RosterSelection_GuestCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_GuestCard.W_RosterSelection_GuestCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_GuestCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_GuestCard_C::OnClicked__DelegateSignature(class UW_RosterSelection_GuestCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_GuestCard_C", "OnClicked__DelegateSignature");

	Params::UW_RosterSelection_GuestCard_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}

}


