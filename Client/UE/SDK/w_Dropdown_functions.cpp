#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_Dropdown.w_Dropdown_C
// (None)

class UClass* UW_Dropdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_Dropdown_C");

	return Clss;
}


// w_Dropdown_C w_Dropdown.Default__w_Dropdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Dropdown_C* UW_Dropdown_C::GetDefaultObj()
{
	static class UW_Dropdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Dropdown_C*>(UW_Dropdown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_Dropdown.w_Dropdown_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "BackPage");

	Params::UW_Dropdown_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function w_Dropdown.w_Dropdown_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "GetFocusTarget");

	Params::UW_Dropdown_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function w_Dropdown.w_Dropdown_C.EnableMenuInputConsume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::EnableMenuInputConsume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "EnableMenuInputConsume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.DisableMenuInputConsume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::DisableMenuInputConsume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "DisableMenuInputConsume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::OpenMenu(bool CallFunc_IsOpen_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OpenMenu");

	Params::UW_Dropdown_C_OpenMenu_Params Parms{};

	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.RemoveFooterOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::RemoveFooterOption(const class FString& ID, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "RemoveFooterOption");

	Params::UW_Dropdown_C_RemoveFooterOption_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.AddFooterOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FST_DropdownOptions         OptionData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Dropdown_C::AddFooterOption(const class FString& ID, const struct FST_DropdownOptions& OptionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "AddFooterOption");

	Params::UW_Dropdown_C_AddFooterOption_Params Parms{};

	Parms.ID = ID;
	Parms.OptionData = OptionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.SetFooterOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FST_DropdownOptions>FooterOptions                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Dropdown_C::SetFooterOptions(TMap<class FString, struct FST_DropdownOptions> FooterOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetFooterOptions");

	Params::UW_Dropdown_C_SetFooterOptions_Params Parms{};

	Parms.FooterOptions = FooterOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.ClearFooterOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::ClearFooterOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "ClearFooterOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "ClearOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OnDropdown Menu Desired Focus Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 DesiredFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnDropdown_Menu_Desired_Focus_Set(class UW_Button_C* DesiredFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnDropdown Menu Desired Focus Set");

	Params::UW_Dropdown_C_OnDropdown_Menu_Desired_Focus_Set_Params Parms{};

	Parms.DesiredFocus = DesiredFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.SetSelectionByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::SetSelectionByIndex(int32 Index, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetSelectionByIndex");

	Params::UW_Dropdown_C_SetSelectionByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "ClearSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.DisableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::DisableInteraction(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "DisableInteraction");

	Params::UW_Dropdown_C_DisableInteraction_Params Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::CloseMenu(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "CloseMenu");

	Params::UW_Dropdown_C_CloseMenu_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.SetLabelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LabelText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Dropdown_C::SetLabelText(class FText LabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetLabelText");

	Params::UW_Dropdown_C_SetLabelText_Params Parms{};

	Parms.LabelText = LabelText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.UpdateLabelText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::UpdateLabelText(const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "UpdateLabelText");

	Params::UW_Dropdown_C_UpdateLabelText_Params Parms{};

	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.SetSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::SetSelection(const class FString& OptionID, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetSelection");

	Params::UW_Dropdown_C_SetSelection_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.SetOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Options                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Dropdown_C::SetOptions(TMap<class FString, class FText> Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetOptions");

	Params::UW_Dropdown_C_SetOptions_Params Parms{};

	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.AddOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OptionText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Dropdown_C::AddOption(const class FString& OptionID, class FText OptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "AddOption");

	Params::UW_Dropdown_C_AddOption_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.OptionText = OptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_DropdownMenu_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)

class UUserWidget* UW_Dropdown_C::On_DropdownMenuAnchor_GetUserMenuContent_0(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_DropdownMenu_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "On_DropdownMenuAnchor_GetUserMenuContent_0");

	Params::UW_Dropdown_C_On_DropdownMenuAnchor_GetUserMenuContent_0_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_Dropdown.w_Dropdown_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "ChangePage");

	Params::UW_Dropdown_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "PreConstruct");

	Params::UW_Dropdown_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OptionSelected(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OptionSelected");

	Params::UW_Dropdown_C_OptionSelected_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::FooterOptionSelected(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionSelected");

	Params::UW_Dropdown_C_FooterOptionSelected_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "Reveal");

	Params::UW_Dropdown_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "Hide");

	Params::UW_Dropdown_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.Collapse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::Collapse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "Collapse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OptionHovered(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OptionHovered");

	Params::UW_Dropdown_C_OptionHovered_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.Clickaway
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::Clickaway()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "Clickaway");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Dropdown_C::BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OptionUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::OptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Dropdown_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "SetInputMode");

	Params::UW_Dropdown_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.FooterOptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::FooterOptionHovered(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionHovered");

	Params::UW_Dropdown_C_FooterOptionHovered_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.FooterOptionUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::FooterOptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OptionID_3                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_OptionID_2                                    (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_OptionID_1                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_OptionID                                      (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::ExecuteUbergraph_w_Dropdown(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const class FString& K2Node_CustomEvent_OptionID_3, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_CustomEvent_OptionID_2, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FName K2Node_Event_PageName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OptionID_1, bool K2Node_Event_IsGamepad, const class FString& K2Node_CustomEvent_OptionID, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "ExecuteUbergraph_w_Dropdown");

	Params::UW_Dropdown_C_ExecuteUbergraph_w_Dropdown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_CustomEvent_OptionID_3 = K2Node_CustomEvent_OptionID_3;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_OptionID_2 = K2Node_CustomEvent_OptionID_2;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_OptionID_1 = K2Node_CustomEvent_OptionID_1;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CustomEvent_OptionID = K2Node_CustomEvent_OptionID;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Dropdown_C*               Dropdown                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnHovered__DelegateSignature(class UW_Dropdown_C* Dropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnHovered__DelegateSignature");

	Params::UW_Dropdown_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Dropdown = Dropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnFooterOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::OnFooterOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnFooterOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OnFooterOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnFooterOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnFooterOptionHovered__DelegateSignature");

	Params::UW_Dropdown_C_OnFooterOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Dropdown_C::OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Dropdown_C*               TriggeringDropdown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnMenuClosed__DelegateSignature");

	Params::UW_Dropdown_C_OnMenuClosed__DelegateSignature_Params Parms{};

	Parms.TriggeringDropdown = TriggeringDropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnOptionHovered__DelegateSignature");

	Params::UW_Dropdown_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnFooterOptionSelected__DelegateSignature");

	Params::UW_Dropdown_C_OnFooterOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Dropdown_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_Dropdown_C", "OnOptionSelected__DelegateSignature");

	Params::UW_Dropdown_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}

}


