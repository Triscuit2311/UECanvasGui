#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ExfilOverlay.W_ExfilOverlay_C
// (None)

class UClass* UW_ExfilOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ExfilOverlay_C");

	return Clss;
}


// W_ExfilOverlay_C W_ExfilOverlay.Default__W_ExfilOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ExfilOverlay_C* UW_ExfilOverlay_C::GetDefaultObj()
{
	static class UW_ExfilOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ExfilOverlay_C*>(UW_ExfilOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ExfilOverlay.W_ExfilOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ExfilOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.SetNumMissingSwat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MissingSwat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMissionSoftComplete                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ExfilOverlay_C::SetNumMissingSwat(int32 MissingSwat, bool bMissionSoftComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "SetNumMissingSwat");

	Params::UW_ExfilOverlay_C_SetNumMissingSwat_Params Parms{};

	Parms.MissingSwat = MissingSwat;
	Parms.bMissionSoftComplete = bMissionSoftComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_0_OnOkClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ExfilOverlay_C::BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_0_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_0_OnOkClicked__DelegateSignature");

	Params::UW_ExfilOverlay_C_BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_0_OnOkClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_1_CancelClickedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ExfilOverlay_C::BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_1_CancelClickedDelegate__DelegateSignature(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_1_CancelClickedDelegate__DelegateSignature");

	Params::UW_ExfilOverlay_C_BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_1_CancelClickedDelegate__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.ExecuteUbergraph_W_ExfilOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              K2Node_CustomEvent_MissingSwat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bMissionSoftComplete                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class UW_StandardModal_C*          K2Node_ComponentBoundEvent_CallingModal_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_TextEntry                             (None)
// class UStandardModal*              K2Node_ComponentBoundEvent_CallingModal                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveWidgetFromStack_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveWidgetFromStack_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ExfilOverlay_C::ExecuteUbergraph_W_ExfilOverlay(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_CustomEvent_MissingSwat, bool K2Node_CustomEvent_bMissionSoftComplete, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal_1, class FText K2Node_ComponentBoundEvent_TextEntry, class UStandardModal* K2Node_ComponentBoundEvent_CallingModal, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, bool CallFunc_RemoveWidgetFromStack_ReturnValue, bool CallFunc_RemoveWidgetFromStack_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "ExecuteUbergraph_W_ExfilOverlay");

	Params::UW_ExfilOverlay_C_ExecuteUbergraph_W_ExfilOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_MissingSwat = K2Node_CustomEvent_MissingSwat;
	Parms.K2Node_CustomEvent_bMissionSoftComplete = K2Node_CustomEvent_bMissionSoftComplete;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_CallingModal_1 = K2Node_ComponentBoundEvent_CallingModal_1;
	Parms.K2Node_ComponentBoundEvent_TextEntry = K2Node_ComponentBoundEvent_TextEntry;
	Parms.K2Node_ComponentBoundEvent_CallingModal = K2Node_ComponentBoundEvent_CallingModal;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.CallFunc_RemoveWidgetFromStack_ReturnValue = CallFunc_RemoveWidgetFromStack_ReturnValue;
	Parms.CallFunc_RemoveWidgetFromStack_ReturnValue_1 = CallFunc_RemoveWidgetFromStack_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.OnCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ExfilOverlay_C::OnCancelClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "OnCancelClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ExfilOverlay.W_ExfilOverlay_C.OnExfilClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ExfilOverlay_C::OnExfilClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ExfilOverlay_C", "OnExfilClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


