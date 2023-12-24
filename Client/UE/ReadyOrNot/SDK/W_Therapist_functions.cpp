#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Therapist.W_Therapist_C
// (None)

class UClass* UW_Therapist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Therapist_C");

	return Clss;
}


// W_Therapist_C W_Therapist.Default__W_Therapist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Therapist_C* UW_Therapist_C::GetDefaultObj()
{
	static class UW_Therapist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Therapist_C*>(UW_Therapist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Therapist.W_Therapist_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "GetFocusTarget");

	Params::UW_Therapist_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Therapist.W_Therapist_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::BackPage(bool* Handled, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "BackPage");

	Params::UW_Therapist_C_BackPage_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Therapist.W_Therapist_C.UpdateTherapyScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetTherapistText_ReturnValue                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<class URosterCharacter*>    CallFunc_GetCharactersInTherapy_ReturnValue                      (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::UpdateTherapyScreen(class FText CallFunc_GetTherapistText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class URosterCharacter*>& CallFunc_GetCharactersInTherapy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "UpdateTherapyScreen");

	Params::UW_Therapist_C_UpdateTherapyScreen_Params Parms{};

	Parms.CallFunc_GetTherapistText_ReturnValue = CallFunc_GetTherapistText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetCharactersInTherapy_ReturnValue = CallFunc_GetCharactersInTherapy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.CloseReplacementModal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::CloseReplacementModal(class UStandardModal* CallingModal, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "CloseReplacementModal");

	Params::UW_Therapist_C_CloseReplacementModal_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.PopulateOfficerList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URosterCharacter*>    RosterCharacters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_Therapist_OfficerEntry_C* NewEntryWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Therapist_OfficerEntry_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::PopulateOfficerList(TArray<class URosterCharacter*>& RosterCharacters, class UW_Therapist_OfficerEntry_C* NewEntryWidget, class UW_Therapist_OfficerEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "PopulateOfficerList");

	Params::UW_Therapist_C_PopulateOfficerList_Params Parms{};

	Parms.RosterCharacters = RosterCharacters;
	Parms.NewEntryWidget = NewEntryWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Therapist_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "BP_OnHandleBackAction");

	Params::UW_Therapist_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Therapist.W_Therapist_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "Reveal");

	Params::UW_Therapist_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "Hide");

	Params::UW_Therapist_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Therapist_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "SetInputMode");

	Params::UW_Therapist_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "ChangePage");

	Params::UW_Therapist_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Therapist_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Therapist.W_Therapist_C.OfficerEntryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Therapist_OfficerEntry_C* Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_C::OfficerEntryClicked(class UW_Therapist_OfficerEntry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "OfficerEntryClicked");

	Params::UW_Therapist_C_OfficerEntryClicked_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.ReplacePatient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Therapist_C::ReplacePatient(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "ReplacePatient");

	Params::UW_Therapist_C_ReplacePatient_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Therapist_C::BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature");

	Params::UW_Therapist_C_BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist.W_Therapist_C.ExecuteUbergraph_W_Therapist
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Therapist_OfficerEntry_C* K2Node_CustomEvent_Entry                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UW_Therapist_C::ExecuteUbergraph_W_Therapist(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, class FText Temp_text_Variable, bool K2Node_SwitchString_CmpSuccess, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool CallFunc_BackPage_Handled, class UW_Therapist_OfficerEntry_C* K2Node_CustomEvent_Entry, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_C", "ExecuteUbergraph_W_Therapist");

	Params::UW_Therapist_C_ExecuteUbergraph_W_Therapist_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_CustomEvent_Entry = K2Node_CustomEvent_Entry;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


