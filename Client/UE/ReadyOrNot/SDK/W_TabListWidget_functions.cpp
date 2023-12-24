#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TabListWidget.W_TabListWidget_C
// (None)

class UClass* UW_TabListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TabListWidget_C");

	return Clss;
}


// W_TabListWidget_C W_TabListWidget.Default__W_TabListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TabListWidget_C* UW_TabListWidget_C::GetDefaultObj()
{
	static class UW_TabListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TabListWidget_C*>(UW_TabListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TabListWidget.W_TabListWidget_C.FindIDForButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_TabListEntry            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabListWidget_C::FindIDForButton(class UCommonButtonBase* Button, class FName* ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FST_TabListEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "FindIDForButton");

	Params::UW_TabListWidget_C_FindIDForButton_Params Parms{};

	Parms.Button = Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function W_TabListWidget.W_TabListWidget_C.IDForButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabListWidget_C::IDForButton(class UW_Button_C* Button, class FName* Name, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "IDForButton");

	Params::UW_TabListWidget_C_IDForButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function W_TabListWidget.W_TabListWidget_C.Select Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_IDForButton_Name                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabListWidget_C::Select_Tab(class UW_Button_C* Button, class FName CallFunc_IDForButton_Name, bool CallFunc_SelectTabByID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "Select Tab");

	Params::UW_TabListWidget_C_Select_Tab_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_IDForButton_Name = CallFunc_IDForButton_Name;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.InputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabListWidget_C::InputMethodChanged(enum class ECommonInputType InputType, enum class ECommonInputType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "InputMethodChanged");

	Params::UW_TabListWidget_C_InputMethodChanged_Params Parms{};

	Parms.InputType = InputType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.ClearTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabListWidget_C::ClearTabs(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "ClearTabs");

	Params::UW_TabListWidget_C_ClearTabs_Params Parms{};

	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.AddTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_IDForButton_Name                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterTab_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TabListEntry            K2Node_MakeStruct_ST_TabListEntry                                (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)

void UW_TabListWidget_C::AddTab(class UW_Button_C* Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName CallFunc_IDForButton_Name, bool CallFunc_RegisterTab_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FST_TabListEntry& K2Node_MakeStruct_ST_TabListEntry, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_2, const class FString& CallFunc_AppendMultiple_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "AddTab");

	Params::UW_TabListWidget_C_AddTab_Params Parms{};

	Parms.Button = Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IDForButton_Name = CallFunc_IDForButton_Name;
	Parms.CallFunc_RegisterTab_ReturnValue = CallFunc_RegisterTab_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue = CallFunc_AppendMultiple_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue_1 = CallFunc_AppendMultiple_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_ST_TabListEntry = K2Node_MakeStruct_ST_TabListEntry;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue_2 = CallFunc_AppendMultiple_ReturnValue_2;
	Parms.CallFunc_AppendMultiple_ReturnValue_3 = CallFunc_AppendMultiple_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.HandleTabRemoval
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabListWidget_C::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "HandleTabRemoval");

	Params::UW_TabListWidget_C_HandleTabRemoval_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.HandleTabCreation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabListWidget_C::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "HandleTabCreation");

	Params::UW_TabListWidget_C_HandleTabCreation_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.TabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabListWidget_C::TabSelected(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "TabSelected");

	Params::UW_TabListWidget_C_TabSelected_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TabListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabListWidget.W_TabListWidget_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TabListWidget_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "OnInputMethodChanged");

	Params::UW_TabListWidget_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TabListWidget.W_TabListWidget_C.BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_TabListWidget_C::BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabListWidget.W_TabListWidget_C.BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_TabListWidget_C::BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "BndEvt__W_TabListWidget_W_SubMenu_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TabListWidget.W_TabListWidget_C.ExecuteUbergraph_W_TabListWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_TabNameID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_FindIDForButton_ID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton_1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TabListEntry            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FST_TabListEntry            CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TabListEntry            K2Node_SetFieldsInStruct_StructOut                               (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TabListEntry            CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TabListWidget_C::ExecuteUbergraph_W_TabListWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, class FName CallFunc_FindIDForButton_ID, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FST_TabListEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FST_TabListEntry& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FST_TabListEntry& K2Node_SetFieldsInStruct_StructOut, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, const struct FST_TabListEntry& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TabListWidget_C", "ExecuteUbergraph_W_TabListWidget");

	Params::UW_TabListWidget_C_ExecuteUbergraph_W_TabListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_Event_TabNameID = K2Node_Event_TabNameID;
	Parms.K2Node_Event_TabButton = K2Node_Event_TabButton;
	Parms.CallFunc_FindIDForButton_ID = CallFunc_FindIDForButton_ID;
	Parms.K2Node_Event_TabNameID_1 = K2Node_Event_TabNameID_1;
	Parms.K2Node_Event_TabButton_1 = K2Node_Event_TabButton_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


