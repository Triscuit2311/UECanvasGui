#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Button.W_Button_C
// (None)

class UClass* UW_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Button_C");

	return Clss;
}


// W_Button_C W_Button.Default__W_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Button_C* UW_Button_C::GetDefaultObj()
{
	static class UW_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Button_C*>(UW_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Button.W_Button_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_Button_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnMouseButtonUp");

	Params::UW_Button_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Button.W_Button_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_Button_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnMouseButtonDown");

	Params::UW_Button_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Button.W_Button_C.PassthroughInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::PassthroughInteraction(bool PassThrough, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "PassthroughInteraction");

	Params::UW_Button_C_PassthroughInteraction_Params Parms{};

	Parms.PassThrough = PassThrough;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.IgnoreInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ignore                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::IgnoreInteraction(bool Ignore, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "IgnoreInteraction");

	Params::UW_Button_C_IgnoreInteraction_Params Parms{};

	Parms.Ignore = Ignore;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_GetButtonLabel
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCommonTextBlock*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonTextBlock* UW_Button_C::BP_GetButtonLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_GetButtonLabel");

	Params::UW_Button_C_BP_GetButtonLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Button.W_Button_C.TruncateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Truncate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CharacterLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TruncationCharacters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TruncateText_TruncatedText                              (None)

void UW_Button_C::TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText CallFunc_TruncateText_TruncatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "TruncateText");

	Params::UW_Button_C_TruncateText_Params Parms{};

	Parms.Truncate = Truncate;
	Parms.CharacterLimit = CharacterLimit;
	Parms.TruncationCharacters = TruncationCharacters;
	Parms.CallFunc_TruncateText_TruncatedText = CallFunc_TruncateText_TruncatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.DisableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::DisableInteraction(bool Disable, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "DisableInteraction");

	Params::UW_Button_C_DisableInteraction_Params Parms{};

	Parms.Disable = Disable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWidgetSwitcherSlot*         CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetSwitcherSlot*         CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue, class UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Initialize");

	Params::UW_Button_C_Initialize_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue = CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue;
	Parms.CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1 = CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::Enable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Enable");

	Params::UW_Button_C_Enable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.SetBackgroundTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::SetBackgroundTint(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "SetBackgroundTint");

	Params::UW_Button_C_SetBackgroundTint_Params Parms{};

	Parms.InBackgroundColor = InBackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::SetButtonText(class FText Text, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "SetButtonText");

	Params::UW_Button_C_SetButtonText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.InitContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::InitContent(bool CallFunc_HasAnyChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "InitContent");

	Params::UW_Button_C_InitContent_Params Parms{};

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "PreConstruct");

	Params::UW_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.ForceDoubleClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::ForceDoubleClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "ForceDoubleClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnDoubleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnActionProgress");

	Params::UW_Button_C_OnActionProgress_Params Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnActionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Button_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.OnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.EventOnReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::EventOnReleased(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "EventOnReleased");

	Params::UW_Button_C_EventOnReleased_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.EventOnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::EventOnPressed(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "EventOnPressed");

	Params::UW_Button_C_EventOnPressed_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.RightMousePressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::RightMousePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "RightMousePressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.RightMouseReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::RightMouseReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "RightMouseReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.ExecuteUbergraph_W_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// float                              K2Node_Event_HeldPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetCustomPadding_OutCustomPadding                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     CallFunc_GetButtonPadding_OutButtonPadding                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::ExecuteUbergraph_W_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, float K2Node_Event_HeldPercent, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style, bool K2Node_DynamicCast_bSuccess, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_1, const struct FMargin& CallFunc_GetCustomPadding_OutCustomPadding, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetButtonPadding_OutButtonPadding, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_2, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_2, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_Select_Default_1, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UCommonButtonBase* K2Node_CustomEvent_Button, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_3, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "ExecuteUbergraph_W_Button");

	Params::UW_Button_C_ExecuteUbergraph_W_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Button_Style = K2Node_DynamicCast_AsBase_Button_Style;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStyle_ReturnValue_1 = CallFunc_GetStyle_ReturnValue_1;
	Parms.CallFunc_GetCustomPadding_OutCustomPadding = CallFunc_GetCustomPadding_OutCustomPadding;
	Parms.K2Node_DynamicCast_AsBase_Button_Style_1 = K2Node_DynamicCast_AsBase_Button_Style_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetButtonPadding_OutButtonPadding = CallFunc_GetButtonPadding_OutButtonPadding;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetStyle_ReturnValue_2 = CallFunc_GetStyle_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBase_Button_Style_2 = K2Node_DynamicCast_AsBase_Button_Style_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetStyle_ReturnValue_3 = CallFunc_GetStyle_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.OnRightMouseReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::OnRightMouseReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnRightMouseReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.OnRightMousePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::OnRightMousePressed__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "OnRightMousePressed__DelegateSignature");

	Params::UW_Button_C_OnRightMousePressed__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Deselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::Deselected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Deselected__DelegateSignature");

	Params::UW_Button_C_Deselected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::Selected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Selected__DelegateSignature");

	Params::UW_Button_C_Selected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.DoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "DoubleClicked__DelegateSignature");

	Params::UW_Button_C_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Button_C::Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Button.W_Button_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Hovered__DelegateSignature");

	Params::UW_Button_C_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Button.W_Button_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Button_C", "Clicked__DelegateSignature");

	Params::UW_Button_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


