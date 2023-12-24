#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HotkeyBar.W_HotkeyBar_C
// (None)

class UClass* UW_HotkeyBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HotkeyBar_C");

	return Clss;
}


// W_HotkeyBar_C W_HotkeyBar.Default__W_HotkeyBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HotkeyBar_C* UW_HotkeyBar_C::GetDefaultObj()
{
	static class UW_HotkeyBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HotkeyBar_C*>(UW_HotkeyBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HotkeyBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "PreConstruct");

	Params::UW_HotkeyBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar.W_HotkeyBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_HotkeyBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSt_HotkeySettings>  Hotkeys                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HotkeyBar_C::UpdateHints(TArray<struct FSt_HotkeySettings>& Hotkeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "UpdateHints");

	Params::UW_HotkeyBar_C_UpdateHints_Params Parms{};

	Parms.Hotkeys = Hotkeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_HotkeyBar_Entry_C*        TriggeringHotkeyEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_C::HotkeyButtonClicked(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "HotkeyButtonClicked");

	Params::UW_HotkeyBar_C_HotkeyButtonClicked_Params Parms{};

	Parms.TriggeringHotkeyEntry = TriggeringHotkeyEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar.W_HotkeyBar_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_HotkeyBar_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar.W_HotkeyBar_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_HotkeyBar_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSt_HotkeySettings>  K2Node_CustomEvent_Hotkeys                                       (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_HotkeySettings          CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_HotkeyBar_Entry_C*        K2Node_CustomEvent_TriggeringHotkeyEntry                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HotkeyBar_Entry_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_HotkeyBar_Entry_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_HotkeyBar_Entry_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_C::ExecuteUbergraph_W_HotkeyBar(int32 EntryPoint, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<struct FSt_HotkeySettings>& K2Node_CustomEvent_Hotkeys, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSt_HotkeySettings& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UW_HotkeyBar_Entry_C* K2Node_CustomEvent_TriggeringHotkeyEntry, class UW_HotkeyBar_Entry_C* CallFunc_Create_ReturnValue, TArray<class UW_HotkeyBar_Entry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_HotkeyBar_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "ExecuteUbergraph_W_HotkeyBar");

	Params::UW_HotkeyBar_C_ExecuteUbergraph_W_HotkeyBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Hotkeys = K2Node_CustomEvent_Hotkeys;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringHotkeyEntry = K2Node_CustomEvent_TriggeringHotkeyEntry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      HotkeyID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_HotkeyBar_C::OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_C", "OnHotkeyClicked__DelegateSignature");

	Params::UW_HotkeyBar_C_OnHotkeyClicked__DelegateSignature_Params Parms{};

	Parms.HotkeyID = HotkeyID;

	UObject::ProcessEvent(Func, &Parms);

}

}


