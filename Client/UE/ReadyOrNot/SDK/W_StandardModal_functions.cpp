#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardModal.W_StandardModal_C
// (None)

class UClass* UW_StandardModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardModal_C");

	return Clss;
}


// W_StandardModal_C W_StandardModal.Default__W_StandardModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardModal_C* UW_StandardModal_C::GetDefaultObj()
{
	static class UW_StandardModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardModal_C*>(UW_StandardModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardModal.W_StandardModal_C.Confirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OkClicked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ApplyClicked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TextInputConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// bool                               CallFunc_IsTextUnderMin_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTextOverMax_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTextOverMax_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardModal_C::Confirm(bool OkClicked, bool ApplyClicked, bool TextInputConfirm, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, bool CallFunc_IsTextUnderMin_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "Confirm");

	Params::UW_StandardModal_C_Confirm_Params Parms{};

	Parms.OkClicked = OkClicked;
	Parms.ApplyClicked = ApplyClicked;
	Parms.TextInputConfirm = TextInputConfirm;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_IsTextUnderMin_ReturnValue = CallFunc_IsTextUnderMin_ReturnValue;
	Parms.CallFunc_IsTextOverMax_ReturnValue = CallFunc_IsTextOverMax_ReturnValue;
	Parms.CallFunc_IsTextOverMax_ReturnValue_1 = CallFunc_IsTextOverMax_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.WarnTextUnderMin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_StandardModal_C::WarnTextUnderMin(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "WarnTextUnderMin");

	Params::UW_StandardModal_C_WarnTextUnderMin_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.IsTextUnderMin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_StandardModal_C::IsTextUnderMin(bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "IsTextUnderMin");

	Params::UW_StandardModal_C_IsTextUnderMin_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardModal.W_StandardModal_C.WarnTextOverMax
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_StandardModal_C::WarnTextOverMax(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "WarnTextOverMax");

	Params::UW_StandardModal_C_WarnTextOverMax_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.HideWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardModal_C::HideWarningText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "HideWarningText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardModal.W_StandardModal_C.IsTextOverMax
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_StandardModal_C::IsTextOverMax(bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "IsTextOverMax");

	Params::UW_StandardModal_C_IsTextOverMax_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardModal.W_StandardModal_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ModalDescription                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardModal_C::SetDescriptionText(class FText ModalDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "SetDescriptionText");

	Params::UW_StandardModal_C_SetDescriptionText_Params Parms{};

	Parms.ModalDescription = ModalDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.DisplayWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        WarningText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::DisplayWarningText(class FText WarningText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "DisplayWarningText");

	Params::UW_StandardModal_C_DisplayWarningText_Params Parms{};

	Parms.WarningText = WarningText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.CancelConfirmTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardModal_C::CancelConfirmTextEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "CancelConfirmTextEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardModal.W_StandardModal_C.ConfirmTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ConfirmTitleText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ConfirmDescriptionText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardModal_C::ConfirmTextEntry(class FText ConfirmTitleText, class FText ConfirmDescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "ConfirmTextEntry");

	Params::UW_StandardModal_C_ConfirmTextEntry_Params Parms{};

	Parms.ConfirmTitleText = ConfirmTitleText;
	Parms.ConfirmDescriptionText = ConfirmDescriptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.Get_OkButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_StandardModal_C::Get_OkButton_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "Get_OkButton_bIsEnabled_0");

	Params::UW_StandardModal_C_Get_OkButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardModal.W_StandardModal_C.OnUserScrolled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::OnUserScrolled_Event_0(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "OnUserScrolled_Event_0");

	Params::UW_StandardModal_C_OnUserScrolled_Event_0_Params Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardModal.W_StandardModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "PreConstruct");

	Params::UW_StandardModal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardModal_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_StandardModal_C_BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_StandardModal_C_BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_StandardModal_C_BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardModal_C::BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_StandardModal_C_BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_StandardModal_C::BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UW_StandardModal_C_BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.ExecuteUbergraph_W_StandardModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentOffset                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// bool                               CallFunc_IsTextOverMax_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_StandardModal_C::ExecuteUbergraph_W_StandardModal(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_CustomEvent_CurrentOffset, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsTextOverMax_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "ExecuteUbergraph_W_StandardModal");

	Params::UW_StandardModal_C_ExecuteUbergraph_W_StandardModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentOffset = K2Node_CustomEvent_CurrentOffset;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_IsTextOverMax_ReturnValue = CallFunc_IsTextOverMax_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardModal_C::OnTextCommitted__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "OnTextCommitted__DelegateSignature");

	Params::UW_StandardModal_C_OnTextCommitted__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.OnApplyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardModal_C::OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "OnApplyClicked__DelegateSignature");

	Params::UW_StandardModal_C_OnApplyClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardModal.W_StandardModal_C.OnOkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardModal_C::OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardModal_C", "OnOkClicked__DelegateSignature");

	Params::UW_StandardModal_C_OnOkClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


