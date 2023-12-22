#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C
// (None)

class UClass* UW_ItemSlotTactical_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSlotTactical_V2_C");

	return Clss;
}


// W_ItemSlotTactical_V2_C W_ItemSlotTactical_V2.Default__W_ItemSlotTactical_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSlotTactical_V2_C* UW_ItemSlotTactical_V2_C::GetDefaultObj()
{
	static class UW_ItemSlotTactical_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSlotTactical_V2_C*>(UW_ItemSlotTactical_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.SetVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSlotTactical_V2_C::SetVisualState(bool Hovered, bool Equipped, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "SetVisualState");

	Params::UW_ItemSlotTactical_V2_C_SetVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Equipped = Equipped;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSlotTactical_V2_C::BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ItemSlotTactical_V2_C_BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSlotTactical_V2_C::BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ItemSlotTactical_V2_C_BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSlotTactical_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "PreConstruct");

	Params::UW_ItemSlotTactical_V2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_ItemSlotTactical_V2_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnAddedToFocusPath");

	Params::UW_ItemSlotTactical_V2_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnEquipped_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::OnEquipped_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnEquipped_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_ItemSlotTactical_V2_LeftArrow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "BndEvt__W_ItemSlotTactical_V2_RightArrow_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnSlotsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::OnSlotsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnSlotsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.ExecuteUbergraph_W_ItemSlotTactical_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_OnNavigateLeft_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_OnNavigateRight_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSlotTactical_V2_C::ExecuteUbergraph_W_ItemSlotTactical_V2(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_IsHovered_ReturnValue, class UWidget* CallFunc_OnNavigateLeft_ReturnValue, class UWidget* CallFunc_OnNavigateRight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "ExecuteUbergraph_W_ItemSlotTactical_V2");

	Params::UW_ItemSlotTactical_V2_C_ExecuteUbergraph_W_ItemSlotTactical_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_OnNavigateLeft_ReturnValue = CallFunc_OnNavigateLeft_ReturnValue;
	Parms.CallFunc_OnNavigateRight_ReturnValue = CallFunc_OnNavigateRight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::OnUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::OnClickRight__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnClickRight__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnClickLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSlotTactical_V2_C::OnClickLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnClickLeft__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSlotTactical_V2.W_ItemSlotTactical_V2_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ItemSlot_v2_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSlotTactical_V2_C::OnClick__DelegateSignature(class UW_ItemSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSlotTactical_V2_C", "OnClick__DelegateSignature");

	Params::UW_ItemSlotTactical_V2_C_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


