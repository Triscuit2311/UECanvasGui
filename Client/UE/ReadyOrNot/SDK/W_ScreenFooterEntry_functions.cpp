#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ScreenFooterEntry.W_ScreenFooterEntry_C
// (None)

class UClass* UW_ScreenFooterEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ScreenFooterEntry_C");

	return Clss;
}


// W_ScreenFooterEntry_C W_ScreenFooterEntry.Default__W_ScreenFooterEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ScreenFooterEntry_C* UW_ScreenFooterEntry_C::GetDefaultObj()
{
	static class UW_ScreenFooterEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ScreenFooterEntry_C*>(UW_ScreenFooterEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetFocusTarget");

	Params::UW_ScreenFooterEntry_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BackPage");

	Params::UW_ScreenFooterEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsButton_IsButton                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetButtonLabel_ButtonLabel                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)

void UW_ScreenFooterEntry_C::UpdateVisualState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, bool Temp_bool_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsButton_IsButton, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "UpdateVisualState");

	Params::UW_ScreenFooterEntry_C_UpdateVisualState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIsButton_IsButton = CallFunc_GetIsButton_IsButton;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetButtonLabel_ButtonLabel = CallFunc_GetButtonLabel_ButtonLabel;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetInputAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         InputAction                                                      (Parm, OutParm, NoDestructor)

void UW_ScreenFooterEntry_C::GetInputAction(struct FDataTableRowHandle* InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetInputAction");

	Params::UW_ScreenFooterEntry_C_GetInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputAction != nullptr)
		*InputAction = std::move(Parms.InputAction);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ButtonID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::GetButtonID(class FString* ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetButtonID");

	Params::UW_ScreenFooterEntry_C_GetButtonID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonID != nullptr)
		*ButtonID = std::move(Parms.ButtonID);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ButtonLabel                                                      (Parm, OutParm)

void UW_ScreenFooterEntry_C::GetButtonLabel(class FText* ButtonLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetButtonLabel");

	Params::UW_ScreenFooterEntry_C_GetButtonLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonLabel != nullptr)
		*ButtonLabel = Parms.ButtonLabel;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetIsButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsButton                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::GetIsButton(bool* IsButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetIsButton");

	Params::UW_ScreenFooterEntry_C_GetIsButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsButton != nullptr)
		*IsButton = Parms.IsButton;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::SetInputVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputVisibility");

	Params::UW_ScreenFooterEntry_C_SetInputVisibility_Params Parms{};

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


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputSwitched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGamepad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::InputSwitched(bool UseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "InputSwitched");

	Params::UW_ScreenFooterEntry_C_InputSwitched_Params Parms{};

	Parms.UseGamepad = UseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetFooterEntryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScreenFooterEntry          FooterEntryData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooterEntry_C::SetFooterEntryData(const struct FScreenFooterEntry& FooterEntryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetFooterEntryData");

	Params::UW_ScreenFooterEntry_C_SetFooterEntryData_Params Parms{};

	Parms.FooterEntryData = FooterEntryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         CallFunc_GetInputAction_InputAction                              (NoDestructor)

void UW_ScreenFooterEntry_C::UpdateEntry(const struct FDataTableRowHandle& CallFunc_GetInputAction_InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "UpdateEntry");

	Params::UW_ScreenFooterEntry_C_UpdateEntry_Params Parms{};

	Parms.CallFunc_GetInputAction_InputAction = CallFunc_GetInputAction_InputAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FText                        CallFunc_GetInputActionData_ActionName                           (None)
// struct FKey                        CallFunc_GetInputActionData_ActionKey                            (HasGetValueTypeHash)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_ScreenFooterEntry_C::SetInputAction(const struct FDataTableRowHandle& InputActionRow, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputAction");

	Params::UW_ScreenFooterEntry_C_SetInputAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CallFunc_GetInputActionData_ActionName = CallFunc_GetInputActionData_ActionName;
	Parms.CallFunc_GetInputActionData_ActionKey = CallFunc_GetInputActionData_ActionKey;
	Parms.CallFunc_Abbreviate_Key_Abreviated_Name = CallFunc_Abbreviate_Key_Abreviated_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooterEntry_C::SetLabel(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetLabel");

	Params::UW_ScreenFooterEntry_C_SetLabel_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Reveal");

	Params::UW_ScreenFooterEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Hide");

	Params::UW_ScreenFooterEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputMode");

	Params::UW_ScreenFooterEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "ChangePage");

	Params::UW_ScreenFooterEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "PreConstruct");

	Params::UW_ScreenFooterEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::InputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "InputMethodChanged");

	Params::UW_ScreenFooterEntry_C_InputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ExecuteUbergraph_W_ScreenFooterEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooterEntry_C::ExecuteUbergraph_W_ScreenFooterEntry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_CustomEvent_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "ExecuteUbergraph_W_ScreenFooterEntry");

	Params::UW_ScreenFooterEntry_C_ExecuteUbergraph_W_ScreenFooterEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnReleased__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnReleased__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnReleased__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnPressed__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnPressed__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnHovered__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnClicked__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


