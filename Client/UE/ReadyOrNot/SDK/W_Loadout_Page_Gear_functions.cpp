#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_Gear.W_Loadout_Page_Gear_C
// (None)

class UClass* UW_Loadout_Page_Gear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_Gear_C");

	return Clss;
}


// W_Loadout_Page_Gear_C W_Loadout_Page_Gear.Default__W_Loadout_Page_Gear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_Gear_C* UW_Loadout_Page_Gear_C::GetDefaultObj()
{
	static class UW_Loadout_Page_Gear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_Gear_C*>(UW_Loadout_Page_Gear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_BackPage_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_Gear_C::BackPage(bool* Handled, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BackPage");

	Params::UW_Loadout_Page_Gear_C_BackPage_Params Parms{};

	Parms.CallFunc_BackPage_self_CastInput = CallFunc_BackPage_self_CastInput;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "GetFocusTarget");

	Params::UW_Loadout_Page_Gear_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.RegisterTabPages
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::RegisterTabPages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "RegisterTabPages");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_Gear_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_Gear_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Loadout_Page_Gear_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BP_OnHandleBackAction");

	Params::UW_Loadout_Page_Gear_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "UpdateStyle");

	Params::UW_Loadout_Page_Gear_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.TabChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::TabChanged(class FName TabId, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "TabChanged");

	Params::UW_Loadout_Page_Gear_C_TabChanged_Params Parms{};

	Parms.TabId = TabId;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "Reveal");

	Params::UW_Loadout_Page_Gear_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_Gear_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "Hide");

	Params::UW_Loadout_Page_Gear_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_Gear_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "SetInputMode");

	Params::UW_Loadout_Page_Gear_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Gear_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_Gear_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Page_Gear_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Gear_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_Gear_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "SetLoadoutWidget");

	Params::UW_Loadout_Page_Gear_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_Gear_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature");

	Params::UW_Loadout_Page_Gear_C_BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_4_OnSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_5_OnSlotHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_5_OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_5_OnSlotHovered__DelegateSignature");

	Params::UW_Loadout_Page_Gear_C_BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_5_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_6_OnSlotUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_6_OnSlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_LongTactical_K2Node_ComponentBoundEvent_6_OnSlotUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature");

	Params::UW_Loadout_Page_Gear_C_BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_7_OnSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_8_OnSlotHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_8_OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_8_OnSlotHovered__DelegateSignature");

	Params::UW_Loadout_Page_Gear_C_BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_8_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_9_OnSlotUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_9_OnSlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "BndEvt__W_Loadout_Page_Gear_Headwear_K2Node_ComponentBoundEvent_9_OnSlotUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "ChangePage");

	Params::UW_Loadout_Page_Gear_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "InputMethodChanged");

	Params::UW_Loadout_Page_Gear_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.ExecuteUbergraph_W_Loadout_Page_Gear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Gear_C::ExecuteUbergraph_W_Loadout_Page_Gear(int32 EntryPoint, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Event_PageName, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "ExecuteUbergraph_W_Loadout_Page_Gear");

	Params::UW_Loadout_Page_Gear_C_ExecuteUbergraph_W_Loadout_Page_Gear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_3 = K2Node_ComponentBoundEvent_TriggeringSlot_3;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_2 = K2Node_ComponentBoundEvent_TriggeringSlot_2;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::OnItemUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "OnItemUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Gear.W_Loadout_Page_Gear_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Gear_C::OnItemHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Gear_C", "OnItemHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


