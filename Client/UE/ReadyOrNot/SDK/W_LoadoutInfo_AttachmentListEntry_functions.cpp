#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C
// (None)

class UClass* UW_LoadoutInfo_AttachmentListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutInfo_AttachmentListEntry_C");

	return Clss;
}


// W_LoadoutInfo_AttachmentListEntry_C W_LoadoutInfo_AttachmentListEntry.Default__W_LoadoutInfo_AttachmentListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutInfo_AttachmentListEntry_C* UW_LoadoutInfo_AttachmentListEntry_C::GetDefaultObj()
{
	static class UW_LoadoutInfo_AttachmentListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutInfo_AttachmentListEntry_C*>(UW_LoadoutInfo_AttachmentListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_AttachmentListEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BackPage");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "GetFocusTarget");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_LoadoutInfo_AttachmentListEntry_C::SetInfo(class UClass* AttachmentClass, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetInfo");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_SetInfo_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_AttachmentListEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetInputMode");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "ChangePage");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateActiveLoadout");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateCurrentSlot");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "UpdateCurrentItemMap");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "SetLoadoutWidget");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "HeaderSubpageNavigation");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_AttachmentListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "PreConstruct");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutInfo_AttachmentListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Reveal");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_AttachmentListEntry_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "Hide");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry(int32 EntryPoint, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnRemoveClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutInfo_AttachmentListEntry_C*TriggeredBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::OnRemoveClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "OnRemoveClicked__DelegateSignature");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_OnRemoveClicked__DelegateSignature_Params Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutInfo_AttachmentListEntry_C*TriggeredBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_AttachmentListEntry_C::OnClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_AttachmentListEntry_C", "OnClicked__DelegateSignature");

	Params::UW_LoadoutInfo_AttachmentListEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);

}

}


