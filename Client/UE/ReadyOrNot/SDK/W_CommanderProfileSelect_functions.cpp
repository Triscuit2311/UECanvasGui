#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CommanderProfileSelect.W_CommanderProfileSelect_C
// (None)

class UClass* UW_CommanderProfileSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CommanderProfileSelect_C");

	return Clss;
}


// W_CommanderProfileSelect_C W_CommanderProfileSelect.Default__W_CommanderProfileSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CommanderProfileSelect_C* UW_CommanderProfileSelect_C::GetDefaultObj()
{
	static class UW_CommanderProfileSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CommanderProfileSelect_C*>(UW_CommanderProfileSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_CommanderProfileSelect_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "BP_GetDesiredFocusTarget");

	Params::UW_CommanderProfileSelect_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.FillCardList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UW_CommanderProfileCard_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::FillCardList(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "FillCardList");

	Params::UW_CommanderProfileSelect_C_FillCardList_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.SetCurrentHoverFill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::SetCurrentHoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "SetCurrentHoverFill");

	Params::UW_CommanderProfileSelect_C_SetCurrentHoverFill_Params Parms{};

	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.ResetCurrentUnhoverFill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::ResetCurrentUnhoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "ResetCurrentUnhoverFill");

	Params::UW_CommanderProfileSelect_C_ResetCurrentUnhoverFill_Params Parms{};

	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "Tick");

	Params::UW_CommanderProfileSelect_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.ProfileHoverStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CommanderProfileCard_C*   TriggeringProfileCard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CommanderProfileSelect_C::ProfileHoverStateChange(class UW_CommanderProfileCard_C* TriggeringProfileCard, bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "ProfileHoverStateChange");

	Params::UW_CommanderProfileSelect_C_ProfileHoverStateChange_Params Parms{};

	Parms.TriggeringProfileCard = TriggeringProfileCard;
	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.PopulateProfiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CommanderProfileSelect_C::PopulateProfiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "PopulateProfiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CommanderProfileSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_CommanderProfileSelect_C_BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.OpenDeleteSaveConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CommanderProfileCard_C*   TriggeringProfileCard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::OpenDeleteSaveConfirmation(class UW_CommanderProfileCard_C* TriggeringProfileCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "OpenDeleteSaveConfirmation");

	Params::UW_CommanderProfileSelect_C_OpenDeleteSaveConfirmation_Params Parms{};

	Parms.TriggeringProfileCard = TriggeringProfileCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.DeleteSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_CommanderProfileSelect_C::DeleteSave(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "DeleteSave");

	Params::UW_CommanderProfileSelect_C_DeleteSave_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.CancelDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::CancelDelete(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "CancelDelete");

	Params::UW_CommanderProfileSelect_C_CancelDelete_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommanderProfileSelect_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommanderProfileSelect_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_CommanderProfileSelect_C::BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature");

	Params::UW_CommanderProfileSelect_C_BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommanderProfileSelect.W_CommanderProfileSelect_C.ExecuteUbergraph_W_CommanderProfileSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UW_CommanderProfileCard_C*   K2Node_CustomEvent_TriggeringProfileCard_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hovered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommanderProfile*           CallFunc_LoadProfile_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UW_CommanderProfileCard_C*   K2Node_CustomEvent_TriggeringProfileCard                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_CommanderProfileCard_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UW_CommanderProfileCard_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_CommanderProfileCard_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CommanderProfileCard_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CommanderProfileSelect_C::ExecuteUbergraph_W_CommanderProfileSelect(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText Temp_text_Variable, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard_1, bool K2Node_CustomEvent_Hovered, int32 Temp_int_Array_Index_Variable, class UCommanderProfile* CallFunc_LoadProfile_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable_2, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry, class UStandardModal* K2Node_CustomEvent_CallingModal, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class FText Temp_text_Variable_3, const struct FVector2D& Temp_struct_Variable, TArray<class UW_CommanderProfileCard_C*>& K2Node_MakeArray_Array_1, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_CommanderProfileCard_C*>& K2Node_MakeArray_Array_2, int32 Temp_int_Loop_Counter_Variable_1, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommanderProfileSelect_C", "ExecuteUbergraph_W_CommanderProfileSelect");

	Params::UW_CommanderProfileSelect_C_ExecuteUbergraph_W_CommanderProfileSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CustomEvent_TriggeringProfileCard_1 = K2Node_CustomEvent_TriggeringProfileCard_1;
	Parms.K2Node_CustomEvent_Hovered = K2Node_CustomEvent_Hovered;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LoadProfile_ReturnValue = CallFunc_LoadProfile_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CustomEvent_TriggeringProfileCard = K2Node_CustomEvent_TriggeringProfileCard;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


