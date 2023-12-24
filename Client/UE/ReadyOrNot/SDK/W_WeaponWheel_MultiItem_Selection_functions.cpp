#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C
// (None)

class UClass* UW_WeaponWheel_MultiItem_Selection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_MultiItem_Selection_C");

	return Clss;
}


// W_WeaponWheel_MultiItem_Selection_C W_WeaponWheel_MultiItem_Selection.Default__W_WeaponWheel_MultiItem_Selection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_MultiItem_Selection_C* UW_WeaponWheel_MultiItem_Selection_C::GetDefaultObj()
{
	static class UW_WeaponWheel_MultiItem_Selection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_MultiItem_Selection_C*>(UW_WeaponWheel_MultiItem_Selection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.DetermineIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Next_Icon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToCheck                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_WeaponWheel_MultiItem_Selection_C::DetermineIconColor(class UImage* Next_Icon, int32 IndexToCheck, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "DetermineIconColor");

	Params::UW_WeaponWheel_MultiItem_Selection_C_DetermineIconColor_Params Parms{};

	Parms.Next_Icon = Next_Icon;
	Parms.IndexToCheck = IndexToCheck;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.UnhighlightIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Arrow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_WeaponWheel_MultiItem_Selection_C::UnhighlightIcon(class UImage* Arrow, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "UnhighlightIcon");

	Params::UW_WeaponWheel_MultiItem_Selection_C_UnhighlightIcon_Params Parms{};

	Parms.Arrow = Arrow;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.HighlightIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Arrow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_WeaponWheel_MultiItem_Selection_C::HighlightIcon(class UImage* Arrow, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "HighlightIcon");

	Params::UW_WeaponWheel_MultiItem_Selection_C_HighlightIcon_Params Parms{};

	Parms.Arrow = Arrow;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Deselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::Deselect(int32 Index, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UImage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "Deselect");

	Params::UW_WeaponWheel_MultiItem_Selection_C_Deselect_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::Select(int32 Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UImage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "Select");

	Params::UW_WeaponWheel_MultiItem_Selection_C_Select_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartingItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::Refresh(int32 NewAmount, int32 StartingItemIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "Refresh");

	Params::UW_WeaponWheel_MultiItem_Selection_C_Refresh_Params Parms{};

	Parms.NewAmount = NewAmount;
	Parms.StartingItemIndex = StartingItemIndex;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.PreviousItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSucceeded                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::PreviousItem(bool* bSuccess, bool bSucceeded, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "PreviousItem");

	Params::UW_WeaponWheel_MultiItem_Selection_C_PreviousItem_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.NextItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSucceeded                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::NextItem(bool* bSuccess, bool bSucceeded, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "NextItem");

	Params::UW_WeaponWheel_MultiItem_Selection_C_NextItem_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.CreateIndex
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MultiItem_Selection_C::CreateIndex(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MultiItem_Selection_C", "CreateIndex");

	Params::UW_WeaponWheel_MultiItem_Selection_C_CreateIndex_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


