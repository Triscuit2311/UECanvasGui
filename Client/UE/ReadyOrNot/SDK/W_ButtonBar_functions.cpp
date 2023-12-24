#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ButtonBar.W_ButtonBar_C
// (None)

class UClass* UW_ButtonBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ButtonBar_C");

	return Clss;
}


// W_ButtonBar_C W_ButtonBar.Default__W_ButtonBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ButtonBar_C* UW_ButtonBar_C::GetDefaultObj()
{
	static class UW_ButtonBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ButtonBar_C*>(UW_ButtonBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ButtonBar.W_ButtonBar_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "BackPage");

	Params::UW_ButtonBar_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_ButtonBar.W_ButtonBar_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "GetFocusTarget");

	Params::UW_ButtonBar_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_ButtonBar.W_ButtonBar_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::Disable(bool Disable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "Disable");

	Params::UW_ButtonBar_C_Disable_Params Parms{};

	Parms.Disable = Disable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.SetOptionsMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   ButtonOptions                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ButtonBar_C::SetOptionsMap(TMap<class FString, class FText> ButtonOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "SetOptionsMap");

	Params::UW_ButtonBar_C_SetOptionsMap_Params Parms{};

	Parms.ButtonOptions = ButtonOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.InsertOptionAtIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FString, class FText>   RebuiltMap                                                       (Edit, BlueprintVisible)
// TArray<class FText>                ButtonValues                                                     (Edit, BlueprintVisible)
// TArray<class FString>              ButtonIDs                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::InsertOptionAtIndex(int32 Index, const class FString& ButtonID, class FText ButtonText, TMap<class FString, class FText> RebuiltMap, const TArray<class FText>& ButtonValues, const TArray<class FString>& ButtonIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FText>& CallFunc_Map_Values_Values, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "InsertOptionAtIndex");

	Params::UW_ButtonBar_C_InsertOptionAtIndex_Params Parms{};

	Parms.Index = Index;
	Parms.ButtonID = ButtonID;
	Parms.ButtonText = ButtonText;
	Parms.RebuiltMap = RebuiltMap;
	Parms.ButtonValues = ButtonValues;
	Parms.ButtonIDs = ButtonIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.CreateButtonWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_Button_C*                 NewButton                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_ButtonBar_C::CreateButtonWidget(class FText& ButtonText, class UW_Button_C** NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "CreateButtonWidget");

	Params::UW_ButtonBar_C_CreateButtonWidget_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewButton != nullptr)
		*NewButton = Parms.NewButton;

}


// Function W_ButtonBar.W_ButtonBar_C.AddOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_Button_C*                 NewButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_CreateButtonWidget_NewButton                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::AddOption(const class FString& ID, class FText ButtonText, class UW_Button_C* NewButton, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UW_Button_C* CallFunc_CreateButtonWidget_NewButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "AddOption");

	Params::UW_ButtonBar_C_AddOption_Params Parms{};

	Parms.ID = ID;
	Parms.ButtonText = ButtonText;
	Parms.NewButton = NewButton;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_CreateButtonWidget_NewButton = CallFunc_CreateButtonWidget_NewButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.SetOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   ButtonOptions                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ButtonBar_C::SetOptions(TMap<class FString, class FText> ButtonOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "SetOptions");

	Params::UW_ButtonBar_C_SetOptions_Params Parms{};

	Parms.ButtonOptions = ButtonOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.GetHasOptions
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ButtonBar_C::GetHasOptions(TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "GetHasOptions");

	Params::UW_ButtonBar_C_GetHasOptions_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ButtonBar.W_ButtonBar_C.GetButtonID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_Button_C*                 ButtonToFind                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ID                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class UW_Button_C*>         CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UW_ButtonBar_C::GetButtonID(class UW_Button_C*& ButtonToFind, class FString* ID, TArray<class UW_Button_C*>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "GetButtonID");

	Params::UW_ButtonBar_C_GetButtonID_Params Parms{};

	Parms.ButtonToFind = ButtonToFind;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function W_ButtonBar.W_ButtonBar_C.SetEquippedButtonByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 FoundButton                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::SetEquippedButtonByID(const class FString& ButtonID, class UW_Button_C* FoundButton, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_Button_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "SetEquippedButtonByID");

	Params::UW_ButtonBar_C_SetEquippedButtonByID_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.FoundButton = FoundButton;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.RemoveButtonByID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UW_Button_C*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::RemoveButtonByID(const class FString& ID, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UW_Button_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "RemoveButtonByID");

	Params::UW_ButtonBar_C_RemoveButtonByID_Params Parms{};

	Parms.ID = ID;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.PopulateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 NewButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewID                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_CreateButtonWidget_NewButton                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::PopulateButtons(int32 CurrentIndex, int32 LastIndex, class UW_Button_C* NewButton, const class FString& NewID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Button_C* CallFunc_CreateButtonWidget_NewButton, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "PopulateButtons");

	Params::UW_ButtonBar_C_PopulateButtons_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.LastIndex = LastIndex;
	Parms.NewButton = NewButton;
	Parms.NewID = NewID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_CreateButtonWidget_NewButton = CallFunc_CreateButtonWidget_NewButton;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "Reveal");

	Params::UW_ButtonBar_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "Hide");

	Params::UW_ButtonBar_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "SetInputMode");

	Params::UW_ButtonBar_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "ChangePage");

	Params::UW_ButtonBar_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "PreConstruct");

	Params::UW_ButtonBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OptionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::OptionClicked(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OptionClicked");

	Params::UW_ButtonBar_C_OptionClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::OptionHovered(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OptionHovered");

	Params::UW_ButtonBar_C_OptionHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OptionUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ButtonBar_C::OptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ButtonBar.W_ButtonBar_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ButtonBar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ButtonBar.W_ButtonBar_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "InputMethodChanged");

	Params::UW_ButtonBar_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ButtonBar_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnMouseEnter");

	Params::UW_ButtonBar_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ButtonBar_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnMouseLeave");

	Params::UW_ButtonBar_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.ExecuteUbergraph_W_ButtonBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetButtonID_ID                                          (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetButtonID_ID_1                                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasOptions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UW_ButtonBar_C::ExecuteUbergraph_W_ButtonBar(int32 EntryPoint, class UWidget* CallFunc_GetFocusTarget_Focus, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_CustomEvent_Button_1, const class FString& CallFunc_GetButtonID_ID, class UW_Button_C* K2Node_CustomEvent_Button, const class FString& CallFunc_GetButtonID_ID_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_GetHasOptions_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "ExecuteUbergraph_W_ButtonBar");

	Params::UW_ButtonBar_C_ExecuteUbergraph_W_ButtonBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetButtonID_ID = CallFunc_GetButtonID_ID;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetButtonID_ID_1 = CallFunc_GetButtonID_ID_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetHasOptions_ReturnValue = CallFunc_GetHasOptions_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OnOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ButtonBar_C::OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ButtonBar.W_ButtonBar_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::OnOptionHovered__DelegateSignature(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnOptionHovered__DelegateSignature");

	Params::UW_ButtonBar_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonBar.W_ButtonBar_C.OnOptionClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ButtonBar_C::OnOptionClicked__DelegateSignature(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonBar_C", "OnOptionClicked__DelegateSignature");

	Params::UW_ButtonBar_C_OnOptionClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


