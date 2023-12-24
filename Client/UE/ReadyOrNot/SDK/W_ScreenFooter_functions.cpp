#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ScreenFooter.W_ScreenFooter_C
// (None)

class UClass* UW_ScreenFooter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ScreenFooter_C");

	return Clss;
}


// W_ScreenFooter_C W_ScreenFooter.Default__W_ScreenFooter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ScreenFooter_C* UW_ScreenFooter_C::GetDefaultObj()
{
	static class UW_ScreenFooter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ScreenFooter_C*>(UW_ScreenFooter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ScreenFooter.W_ScreenFooter_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "GetFocusTarget");

	Params::UW_ScreenFooter_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_ScreenFooter.W_ScreenFooter_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "BackPage");

	Params::UW_ScreenFooter_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_ScreenFooter.W_ScreenFooter_C.InsertFooterEntryAtIndex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooter_C::InsertFooterEntryAtIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "InsertFooterEntryAtIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooter.W_ScreenFooter_C.SetFocusByID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     FocusedEntryButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_GetFocusTarget_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetButtonID_ButtonID                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::SetFocusByID(const class FString& ID, class UWidget** FocusedEntryButton, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetButtonID_ButtonID, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "SetFocusByID");

	Params::UW_ScreenFooter_C_SetFocusByID_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetFocusTarget_self_CastInput = CallFunc_GetFocusTarget_self_CastInput;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetButtonID_ButtonID = CallFunc_GetButtonID_ButtonID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusedEntryButton != nullptr)
		*FocusedEntryButton = Parms.FocusedEntryButton;

}


// Function W_ScreenFooter.W_ScreenFooter_C.UnhideEntryByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::UnhideEntryByIndex(int32& Index, bool CallFunc_Set_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "UnhideEntryByIndex");

	Params::UW_ScreenFooter_C_UnhideEntryByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.UnhideEntryByID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::UnhideEntryByID(class FString& ID, bool CallFunc_Set_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "UnhideEntryByID");

	Params::UW_ScreenFooter_C_UnhideEntryByID_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.IsHiddenEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      EntryID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ScreenFooter_C::IsHiddenEntry(const class FString& EntryID, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "IsHiddenEntry");

	Params::UW_ScreenFooter_C_IsHiddenEntry_Params Parms{};

	Parms.EntryID = EntryID;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ScreenFooter.W_ScreenFooter_C.IsHiddenIndex
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ScreenFooter_C::IsHiddenIndex(int32& Index, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "IsHiddenIndex");

	Params::UW_ScreenFooter_C_IsHiddenIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ScreenFooter.W_ScreenFooter_C.HideEntryByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::HideEntryByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "HideEntryByIndex");

	Params::UW_ScreenFooter_C_HideEntryByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.HideEntryByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::HideEntryByID(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "HideEntryByID");

	Params::UW_ScreenFooter_C_HideEntryByID_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.AddFooterEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InsertAtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      EntryID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// struct FScreenFooterEntry          ScreenFooterEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FScreenFooterEntry>  TempValues                                                       (Edit, BlueprintVisible)
// TArray<class FString>              TempKeys                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScreenFooterEntry          CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScreenFooterEntry>  CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)

void UW_ScreenFooter_C::AddFooterEntry(int32 InsertAtIndex, class FString& EntryID, const struct FScreenFooterEntry& ScreenFooterEntry, const TArray<struct FScreenFooterEntry>& TempValues, const TArray<class FString>& TempKeys, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FScreenFooterEntry& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FScreenFooterEntry>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "AddFooterEntry");

	Params::UW_ScreenFooter_C_AddFooterEntry_Params Parms{};

	Parms.InsertAtIndex = InsertAtIndex;
	Parms.EntryID = EntryID;
	Parms.ScreenFooterEntry = ScreenFooterEntry;
	Parms.TempValues = TempValues;
	Parms.TempKeys = TempKeys;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.SetFooterEntries
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FScreenFooterEntry>Footer_Entries                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooter_C::SetFooterEntries(TMap<class FString, struct FScreenFooterEntry> Footer_Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "SetFooterEntries");

	Params::UW_ScreenFooter_C_SetFooterEntries_Params Parms{};

	Parms.Footer_Entries = Footer_Entries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.PopulateEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewEntryID                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      NewEntryWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CenterCount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RightCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LeftCount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScreenFooterEntry          NewEntryData                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHiddenEntry_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHiddenIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScreenFooterEntry          CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::PopulateEntries(const class FString& NewEntryID, class UW_ScreenFooterEntry_C* NewEntryWidget, int32 CenterCount, int32 RightCount, int32 LeftCount, const struct FScreenFooterEntry& NewEntryData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsHiddenEntry_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_IsHiddenIndex_ReturnValue, const struct FScreenFooterEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "PopulateEntries");

	Params::UW_ScreenFooter_C_PopulateEntries_Params Parms{};

	Parms.NewEntryID = NewEntryID;
	Parms.NewEntryWidget = NewEntryWidget;
	Parms.CenterCount = CenterCount;
	Parms.RightCount = RightCount;
	Parms.LeftCount = LeftCount;
	Parms.NewEntryData = NewEntryData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsHiddenEntry_ReturnValue = CallFunc_IsHiddenEntry_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsHiddenIndex_ReturnValue = CallFunc_IsHiddenIndex_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "Reveal");

	Params::UW_ScreenFooter_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "Hide");

	Params::UW_ScreenFooter_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "SetInputMode");

	Params::UW_ScreenFooter_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "ChangePage");

	Params::UW_ScreenFooter_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScreenFooter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "PreConstruct");

	Params::UW_ScreenFooter_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ScreenFooter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooter.W_ScreenFooter_C.FooterEntryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::FooterEntryClicked(class UW_ScreenFooterEntry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "FooterEntryClicked");

	Params::UW_ScreenFooter_C_FooterEntryClicked_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.FooterEntryHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::FooterEntryHovered(class UW_ScreenFooterEntry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "FooterEntryHovered");

	Params::UW_ScreenFooter_C_FooterEntryHovered_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.FooterEntryUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooter_C::FooterEntryUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "FooterEntryUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooter.W_ScreenFooter_C.ExecuteUbergraph_W_ScreenFooter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ScreenFooterEntry_C*      K2Node_CustomEvent_Entry_1                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      K2Node_CustomEvent_Entry                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::ExecuteUbergraph_W_ScreenFooter(int32 EntryPoint, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry_1, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "ExecuteUbergraph_W_ScreenFooter");

	Params::UW_ScreenFooter_C_ExecuteUbergraph_W_ScreenFooter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Entry_1 = K2Node_CustomEvent_Entry_1;
	Parms.K2Node_CustomEvent_Entry = K2Node_CustomEvent_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.OnFooterEntriesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooter_C::OnFooterEntriesUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "OnFooterEntriesUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooter.W_ScreenFooter_C.OnFooterEntryUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooter_C::OnFooterEntryUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "OnFooterEntryUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooter.W_ScreenFooter_C.OnFooterEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::OnFooterEntryHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "OnFooterEntryHovered__DelegateSignature");

	Params::UW_ScreenFooter_C_OnFooterEntryHovered__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooter.W_ScreenFooter_C.OnFooterEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooter_C::OnFooterEntryClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooter_C", "OnFooterEntryClicked__DelegateSignature");

	Params::UW_ScreenFooter_C_OnFooterEntryClicked__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


