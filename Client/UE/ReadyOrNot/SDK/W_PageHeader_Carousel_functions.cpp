#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PageHeader_Carousel.W_PageHeader_Carousel_C
// (None)

class UClass* UW_PageHeader_Carousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PageHeader_Carousel_C");

	return Clss;
}


// W_PageHeader_Carousel_C W_PageHeader_Carousel.Default__W_PageHeader_Carousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PageHeader_Carousel_C* UW_PageHeader_Carousel_C::GetDefaultObj()
{
	static class UW_PageHeader_Carousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PageHeader_Carousel_C*>(UW_PageHeader_Carousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::SelectButton(class UW_Button_C* Button, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "SelectButton");

	Params::UW_PageHeader_Carousel_C_SelectButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.GetInputIconVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::GetInputIconVisibility(enum class ESlateVisibility* Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "GetInputIconVisibility");

	Params::UW_PageHeader_Carousel_C_GetInputIconVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.CheckForNewOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_Button_C*>         CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class FName>                CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::CheckForNewOptions(TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, TArray<class FName>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "CheckForNewOptions");

	Params::UW_PageHeader_Carousel_C_CheckForNewOptions_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.IgnoreDisabledOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Keys                                                             (Edit, BlueprintVisible)
// int32                              NextIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::IgnoreDisabledOption(const TArray<class FName>& Keys, int32 NextIndex, int32 PreviousIndex, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "IgnoreDisabledOption");

	Params::UW_PageHeader_Carousel_C_IgnoreDisabledOption_Params Parms{};

	Parms.Keys = Keys;
	Parms.NextIndex = NextIndex;
	Parms.PreviousIndex = PreviousIndex;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_2 = CallFunc_SelectInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_3 = CallFunc_SelectInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.GetButtonByOptionID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ButtonFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 FoundButton                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Button_C*>         CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::GetButtonByOptionID(class FName OptionNameID, bool* ButtonFound, class UW_Button_C** Button, class UW_Button_C* FoundButton, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "GetButtonByOptionID");

	Params::UW_PageHeader_Carousel_C_GetButtonByOptionID_Params Parms{};

	Parms.OptionNameID = OptionNameID;
	Parms.FoundButton = FoundButton;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonFound != nullptr)
		*ButtonFound = Parms.ButtonFound;

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.PopulateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 Button                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Option                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstButton                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::PopulateButtons(int32 LastIndex, int32 CurrentIndex, class UW_Button_C* Button, class FName Option, bool FirstButton, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_Button_C* CallFunc_Create_ReturnValue, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "PopulateButtons");

	Params::UW_PageHeader_Carousel_C_PopulateButtons_Params Parms{};

	Parms.LastIndex = LastIndex;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Button = Button;
	Parms.Option = Option;
	Parms.FirstButton = FirstButton;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.SetIconSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::SetIconSize(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "SetIconSize");

	Params::UW_PageHeader_Carousel_C_SetIconSize_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.GetActionIconSizeRatio
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonActionWidget*         CommonActionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconRatio                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIcon_ReturnValue                                     (None)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::GetActionIconSizeRatio(class UCommonActionWidget* CommonActionWidget, float* IconRatio, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "GetActionIconSizeRatio");

	Params::UW_PageHeader_Carousel_C_GetActionIconSizeRatio_Params Parms{};

	Parms.CommonActionWidget = CommonActionWidget;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IconRatio != nullptr)
		*IconRatio = Parms.IconRatio;

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "PreConstruct");

	Params::UW_PageHeader_Carousel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageHeader_Carousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageHeader_Carousel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.OptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::OptionSelected(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "OptionSelected");

	Params::UW_PageHeader_Carousel_C_OptionSelected_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.NavigateNextTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::NavigateNextTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "NavigateNextTerminated");

	Params::UW_PageHeader_Carousel_C_NavigateNextTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.NavigatePrevTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::NavigatePrevTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "NavigatePrevTerminated");

	Params::UW_PageHeader_Carousel_C_NavigatePrevTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.NextNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::NextNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "NextNavigated");

	Params::UW_PageHeader_Carousel_C_NextNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.PrevNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::PrevNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "PrevNavigated");

	Params::UW_PageHeader_Carousel_C_PrevNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.ButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::ButtonClicked(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "ButtonClicked");

	Params::UW_PageHeader_Carousel_C_ButtonClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "InputMethodChanged");

	Params::UW_PageHeader_Carousel_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.DisableOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::DisableOption(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "DisableOption");

	Params::UW_PageHeader_Carousel_C_DisableOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.EnableOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageHeader_Carousel_C::EnableOption(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "EnableOption");

	Params::UW_PageHeader_Carousel_C_EnableOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageHeader_Carousel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageHeader_Carousel.W_PageHeader_Carousel_C.ExecuteUbergraph_W_PageHeader_Carousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Terminated_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Terminated                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_OptionID_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_OptionID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Button_C*>         CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetButtonByOptionID_ButtonFound                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_GetButtonByOptionID_Button                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_OptionNameID_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_OptionNameID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetButtonByOptionID_ButtonFound_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 CallFunc_GetButtonByOptionID_Button_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetInputIconVisibility_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetInputIconVisibility_Visibility_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageHeader_Carousel_C::ExecuteUbergraph_W_PageHeader_Carousel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_GetActionIconSizeRatio_IconRatio, float CallFunc_GetActionIconSizeRatio_IconRatio_1, class FName K2Node_Event_OptionNameID, bool K2Node_Event_Terminated_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_Event_Terminated, class FName K2Node_CustomEvent_OptionID_1, bool Temp_bool_True_if_break_was_hit_Variable, class FName K2Node_CustomEvent_OptionID, bool CallFunc_Not_PreBool_ReturnValue, class UW_Button_C* K2Node_CustomEvent_Button, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, bool CallFunc_Not_PreBool_ReturnValue_2, class UW_Button_C* CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GetButtonByOptionID_ButtonFound, class UW_Button_C* CallFunc_GetButtonByOptionID_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_CustomEvent_OptionNameID_1, class FName K2Node_CustomEvent_OptionNameID, bool CallFunc_GetButtonByOptionID_ButtonFound_1, class UW_Button_C* CallFunc_GetButtonByOptionID_Button_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageHeader_Carousel_C", "ExecuteUbergraph_W_PageHeader_Carousel");

	Params::UW_PageHeader_Carousel_C_ExecuteUbergraph_W_PageHeader_Carousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio = CallFunc_GetActionIconSizeRatio_IconRatio;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio_1 = CallFunc_GetActionIconSizeRatio_IconRatio_1;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_Terminated_1 = K2Node_Event_Terminated_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Event_Terminated = K2Node_Event_Terminated;
	Parms.K2Node_CustomEvent_OptionID_1 = K2Node_CustomEvent_OptionID_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_CustomEvent_OptionID = K2Node_CustomEvent_OptionID;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetButtonByOptionID_ButtonFound = CallFunc_GetButtonByOptionID_ButtonFound;
	Parms.CallFunc_GetButtonByOptionID_Button = CallFunc_GetButtonByOptionID_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_OptionNameID_1 = K2Node_CustomEvent_OptionNameID_1;
	Parms.K2Node_CustomEvent_OptionNameID = K2Node_CustomEvent_OptionNameID;
	Parms.CallFunc_GetButtonByOptionID_ButtonFound_1 = CallFunc_GetButtonByOptionID_ButtonFound_1;
	Parms.CallFunc_GetButtonByOptionID_Button_1 = CallFunc_GetButtonByOptionID_Button_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetInputIconVisibility_Visibility = CallFunc_GetInputIconVisibility_Visibility;
	Parms.CallFunc_GetInputIconVisibility_Visibility_1 = CallFunc_GetInputIconVisibility_Visibility_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


