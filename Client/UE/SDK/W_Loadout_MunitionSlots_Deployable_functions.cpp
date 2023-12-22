#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C
// (None)

class UClass* UW_Loadout_MunitionSlots_Deployable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_MunitionSlots_Deployable_C");

	return Clss;
}


// W_Loadout_MunitionSlots_Deployable_C W_Loadout_MunitionSlots_Deployable.Default__W_Loadout_MunitionSlots_Deployable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_MunitionSlots_Deployable_C* UW_Loadout_MunitionSlots_Deployable_C::GetDefaultObj()
{
	static class UW_Loadout_MunitionSlots_Deployable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_MunitionSlots_Deployable_C*>(UW_Loadout_MunitionSlots_Deployable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_MunitionSlots_Deployable_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "BackPage");

	Params::UW_Loadout_MunitionSlots_Deployable_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "GetFocusTarget");

	Params::UW_Loadout_MunitionSlots_Deployable_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_GetSlot_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_MunitionSlots_Deployable_C::SetCount(int32 Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "SetCount");

	Params::UW_Loadout_MunitionSlots_Deployable_C_SetCount_Params Parms{};

	Parms.Count = Count;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetSlot_ReturnValue = CallFunc_GetSlot_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrenade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::SetSlotVisibility(bool IsGrenade, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "SetSlotVisibility");

	Params::UW_Loadout_MunitionSlots_Deployable_C_SetSlotVisibility_Params Parms{};

	Parms.IsGrenade = IsGrenade;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_LoadoutSlot_C*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UW_LoadoutSlot_C* UW_Loadout_MunitionSlots_Deployable_C::GetSlot(bool Temp_bool_Variable, class UW_LoadoutSlot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "GetSlot");

	Params::UW_Loadout_MunitionSlots_Deployable_C_GetSlot_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowCountControls                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::DisplayCountControls(bool ShowCountControls, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "DisplayCountControls");

	Params::UW_Loadout_MunitionSlots_Deployable_C_DisplayCountControls_Params Parms{};

	Parms.ShowCountControls = ShowCountControls;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "Reveal");

	Params::UW_Loadout_MunitionSlots_Deployable_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_MunitionSlots_Deployable_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "Hide");

	Params::UW_Loadout_MunitionSlots_Deployable_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_MunitionSlots_Deployable_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "SetInputMode");

	Params::UW_Loadout_MunitionSlots_Deployable_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "ChangePage");

	Params::UW_Loadout_MunitionSlots_Deployable_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_MunitionSlots_Deployable_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "PreConstruct");

	Params::UW_Loadout_MunitionSlots_Deployable_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_MunitionSlots_Deployable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotClicked(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "LoadoutSlotClicked");

	Params::UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::SetItemClass(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "SetItemClass");

	Params::UW_Loadout_MunitionSlots_Deployable_C_SetItemClass_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotHovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "LoadoutSlotHovered");

	Params::UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "LoadoutSlotUnhovered");

	Params::UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotUnhovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_MunitionSlots_Deployable_C::ToggleAddButton(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "ToggleAddButton");

	Params::UW_Loadout_MunitionSlots_Deployable_C_ToggleAddButton_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_MunitionSlots_Deployable_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_GetSlot_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_GetSlot_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_C*            CallFunc_GetSlot_ReturnValue_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable(int32 EntryPoint, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_2, class UClass* K2Node_CustomEvent_ItemData, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot, bool K2Node_CustomEvent_Enabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue_2, class UW_LoadoutSlot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable");

	Params::UW_Loadout_MunitionSlots_Deployable_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSlot_ReturnValue = CallFunc_GetSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_TriggeringSlot_2 = K2Node_CustomEvent_TriggeringSlot_2;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.CallFunc_GetSlot_ReturnValue_1 = CallFunc_GetSlot_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetSlot_ReturnValue_2 = CallFunc_GetSlot_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_MunitionSlots_Deployable_C*TriggeringDeployableSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "OnDeployableSlotUnhovered__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotUnhovered__DelegateSignature_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.TriggeringDeployableSlot = TriggeringDeployableSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_MunitionSlots_Deployable_C*TriggeringDeployableSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "OnDeployableSlotHovered__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotHovered__DelegateSignature_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.TriggeringDeployableSlot = TriggeringDeployableSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_MunitionSlots_Deployable_C*TriggeringDeployableSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "OnDeployableSlotClicked__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringDeployableSlot = TriggeringDeployableSlot;
	Parms.LoadoutSlot = LoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_MunitionSlots_Deployable_C*TriggeringDeployableSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::OnMinusClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "OnMinusClicked__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_OnMinusClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringDeployableSlot = TriggeringDeployableSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_MunitionSlots_Deployable_C*TriggeringDeployableSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_MunitionSlots_Deployable_C::OnAddClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_MunitionSlots_Deployable_C", "OnAddClicked__DelegateSignature");

	Params::UW_Loadout_MunitionSlots_Deployable_C_OnAddClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringDeployableSlot = TriggeringDeployableSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


