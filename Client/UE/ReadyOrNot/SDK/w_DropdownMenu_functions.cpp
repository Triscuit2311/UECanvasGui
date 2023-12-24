#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_DropdownMenu.w_DropdownMenu_C
// (None)

class UClass* UW_DropdownMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_DropdownMenu_C");

	return Clss;
}


// w_DropdownMenu_C w_DropdownMenu.Default__w_DropdownMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DropdownMenu_C* UW_DropdownMenu_C::GetDefaultObj()
{
	static class UW_DropdownMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DropdownMenu_C*>(UW_DropdownMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_DropdownMenu.w_DropdownMenu_C.CreateFooterButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FooterOptionID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UW_Button_C*                 NewButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_DropdownOptions         CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DropdownMenu_C::CreateFooterButton(class FString& FooterOptionID, class UW_Button_C* NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FST_DropdownOptions& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "CreateFooterButton");

	Params::UW_DropdownMenu_C_CreateFooterButton_Params Parms{};

	Parms.FooterOptionID = FooterOptionID;
	Parms.NewButton = NewButton;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.CreateOptionButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 NewOptionButton                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 NewButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DropdownMenu_C::CreateOptionButton(const class FString& OptionID, class UW_Button_C** NewOptionButton, class UW_Button_C* NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "CreateOptionButton");

	Params::UW_DropdownMenu_C_CreateOptionButton_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.NewButton = NewButton;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewOptionButton != nullptr)
		*NewOptionButton = Parms.NewOptionButton;

}


// Function w_DropdownMenu.w_DropdownMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Options                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_DropdownMenu_C::PopulateOptions(TMap<class FString, class FText> Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "PopulateOptions");

	Params::UW_DropdownMenu_C_PopulateOptions_Params Parms{};

	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OptionClicked(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OptionClicked");

	Params::UW_DropdownMenu_C_OptionClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::FooterOptionClicked(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "FooterOptionClicked");

	Params::UW_DropdownMenu_C_FooterOptionClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OptionHovered(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OptionHovered");

	Params::UW_DropdownMenu_C_OptionHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OptionUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::OptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::FooterOptionHovered(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "FooterOptionHovered");

	Params::UW_DropdownMenu_C_FooterOptionHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::FooterOptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "FooterOptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>   K2Node_CustomEvent_Options                                       (None)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_CreateOptionButton_NewOptionButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_Button_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_Button_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value_3                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DropdownMenu_C::ExecuteUbergraph_w_DropdownMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TMap<class FString, class FText> K2Node_CustomEvent_Options, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UW_Button_C* CallFunc_CreateOptionButton_NewOptionButton, class UW_Button_C* K2Node_CustomEvent_Button_3, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UW_Button_C* K2Node_CustomEvent_Button_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_Button_C* K2Node_CustomEvent_Button_1, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, class UW_Button_C* K2Node_CustomEvent_Button, const class FString& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "ExecuteUbergraph_w_DropdownMenu");

	Params::UW_DropdownMenu_C_ExecuteUbergraph_w_DropdownMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Options = K2Node_CustomEvent_Options;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateOptionButton_NewOptionButton = CallFunc_CreateOptionButton_NewOptionButton;
	Parms.K2Node_CustomEvent_Button_3 = K2Node_CustomEvent_Button_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CustomEvent_Button_2 = K2Node_CustomEvent_Button_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::OnFooterOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnFooterOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OnFooterOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnFooterOptionHovered__DelegateSignature");

	Params::UW_DropdownMenu_C_OnFooterOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnDesiredFocusSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 DesiredFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OnDesiredFocusSet__DelegateSignature(class UW_Button_C* DesiredFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnDesiredFocusSet__DelegateSignature");

	Params::UW_DropdownMenu_C_OnDesiredFocusSet__DelegateSignature_Params Parms{};

	Parms.DesiredFocus = DesiredFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnClickaway__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DropdownMenu_C::OnClickaway__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnClickaway__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnOptionHovered__DelegateSignature");

	Params::UW_DropdownMenu_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnFooterOptionSelected__DelegateSignature");

	Params::UW_DropdownMenu_C_OnFooterOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DropdownMenu_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_DropdownMenu_C", "OnOptionSelected__DelegateSignature");

	Params::UW_DropdownMenu_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}

}


