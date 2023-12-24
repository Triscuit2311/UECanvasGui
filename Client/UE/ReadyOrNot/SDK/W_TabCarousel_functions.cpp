#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TabCarousel.W_TabCarousel_C
// (None)

class UClass* UW_TabCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TabCarousel_C");

	return Clss;
}


// W_TabCarousel_C W_TabCarousel.Default__W_TabCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TabCarousel_C* UW_TabCarousel_C::GetDefaultObj()
{
	static class UW_TabCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TabCarousel_C*>(UW_TabCarousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TabCarousel.W_TabCarousel_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "GetFocusTarget");

	Params::UW_TabCarousel_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_TabCarousel.W_TabCarousel_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::BackPage(bool* Handled, int32 CurrentIndex, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_SelectTabByID_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "BackPage");

	Params::UW_TabCarousel_C_BackPage_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_TabCarousel.W_TabCarousel_C.RemoveTabFromHistory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::RemoveTabFromHistory(class FName TabNameID, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "RemoveTabFromHistory");

	Params::UW_TabCarousel_C_RemoveTabFromHistory_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.SetDefaultTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::SetDefaultTab(class FName TabNameID, bool CallFunc_SelectTabByID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetDefaultTab");

	Params::UW_TabCarousel_C_SetDefaultTab_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.ClearHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TabCarousel_C::ClearHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "ClearHistory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabCarousel.W_TabCarousel_C.SetInputActionIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   IconSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetInputActionIconSize(const struct FVector2D& IconSize, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetInputActionIconSize");

	Params::UW_TabCarousel_C_SetInputActionIconSize_Params Parms{};

	Parms.IconSize = IconSize;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.SetTabOrientation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBoxSlot*          HorizontalBoxSlotItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// enum class EListItemAlignment      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::SetTabOrientation(class UHorizontalBoxSlot* HorizontalBoxSlotItem, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, enum class EListItemAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, enum class EHorizontalAlignment K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabOrientation");

	Params::UW_TabCarousel_C_SetTabOrientation_Params Parms{};

	Parms.HorizontalBoxSlotItem = HorizontalBoxSlotItem;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.RegisterStyledTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterTab_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::RegisterStyledTab(class FText ButtonText, class FName TabNameID, class UWidget* ContentWidget, bool CallFunc_RegisterTab_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "RegisterStyledTab");

	Params::UW_TabCarousel_C_RegisterStyledTab_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.TabNameID = TabNameID;
	Parms.ContentWidget = ContentWidget;
	Parms.CallFunc_RegisterTab_ReturnValue = CallFunc_RegisterTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "Reveal");

	Params::UW_TabCarousel_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "Hide");

	Params::UW_TabCarousel_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetInputMode");

	Params::UW_TabCarousel_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "ChangePage");

	Params::UW_TabCarousel_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "PreConstruct");

	Params::UW_TabCarousel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TabCarousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabCarousel.W_TabCarousel_C.HandleTabCreation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "HandleTabCreation");

	Params::UW_TabCarousel_C_HandleTabCreation_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.HandleTabRemoval
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "HandleTabRemoval");

	Params::UW_TabCarousel_C_HandleTabRemoval_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.SetTabName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_TabCarousel_C::SetTabName(class FName TabNameID, class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabName");

	Params::UW_TabCarousel_C_SetTabName_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TabCarousel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabCarousel.W_TabCarousel_C.SetTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ButtonStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::SetTabStyle(class FName TabNameID, class UClass* ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "SetTabStyle");

	Params::UW_TabCarousel_C_SetTabStyle_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonStyle = ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.BndEvt__W_Loadout_PageCarousel_LeftGamepadBind_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabCarousel_C::BndEvt__W_Loadout_PageCarousel_LeftGamepadBind_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "BndEvt__W_Loadout_PageCarousel_LeftGamepadBind_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UW_TabCarousel_C_BndEvt__W_Loadout_PageCarousel_LeftGamepadBind_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.LogTabHistory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::LogTabHistory(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "LogTabHistory");

	Params::UW_TabCarousel_C_LogTabHistory_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabCarousel.W_TabCarousel_C.ExecuteUbergraph_W_TabCarousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_TabNameID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton_1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_TabNameID_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ButtonText                                    (None)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_DynamicCast_AsW_Button                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_TabNameID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ButtonStyle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_DynamicCast_AsW_Button_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabCarousel_C::ExecuteUbergraph_W_TabCarousel(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, enum class ECommonInputType Temp_byte_Variable_4, class FName K2Node_CustomEvent_TabNameID_1, class FText K2Node_CustomEvent_ButtonText, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_Button_C* K2Node_DynamicCast_AsW_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_5, class FName K2Node_CustomEvent_TabNameID, class UClass* K2Node_CustomEvent_ButtonStyle, enum class ESlateVisibility Temp_byte_Variable_6, class UCommonButtonBase* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_Button_C* K2Node_DynamicCast_AsW_Button_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool Temp_bool_Variable, class FName K2Node_CustomEvent_TabId, enum class ESlateVisibility K2Node_Select_Default_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabCarousel_C", "ExecuteUbergraph_W_TabCarousel");

	Params::UW_TabCarousel_C_ExecuteUbergraph_W_TabCarousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_TabNameID_1 = K2Node_Event_TabNameID_1;
	Parms.K2Node_Event_TabButton_1 = K2Node_Event_TabButton_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_TabNameID = K2Node_Event_TabNameID;
	Parms.K2Node_Event_TabButton = K2Node_Event_TabButton;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_TabNameID_1 = K2Node_CustomEvent_TabNameID_1;
	Parms.K2Node_CustomEvent_ButtonText = K2Node_CustomEvent_ButtonText;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Button = K2Node_DynamicCast_AsW_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_TabNameID = K2Node_CustomEvent_TabNameID;
	Parms.K2Node_CustomEvent_ButtonStyle = K2Node_CustomEvent_ButtonStyle;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Button_1 = K2Node_DynamicCast_AsW_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


