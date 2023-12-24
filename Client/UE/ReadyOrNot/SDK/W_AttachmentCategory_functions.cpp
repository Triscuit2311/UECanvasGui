#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AttachmentCategory.W_AttachmentCategory_C
// (None)

class UClass* UW_AttachmentCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AttachmentCategory_C");

	return Clss;
}


// W_AttachmentCategory_C W_AttachmentCategory.Default__W_AttachmentCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AttachmentCategory_C* UW_AttachmentCategory_C::GetDefaultObj()
{
	static class UW_AttachmentCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AttachmentCategory_C*>(UW_AttachmentCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::DeselectAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "DeselectAll");

	Params::UW_AttachmentCategory_C_DeselectAll_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.Transform Into Custom Button
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)

void UW_AttachmentCategory_C::Transform_Into_Custom_Button(class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "Transform Into Custom Button");

	Params::UW_AttachmentCategory_C_Transform_Into_Custom_Button_Params Parms{};

	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_AttachmentCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnKeyUp");

	Params::UW_AttachmentCategory_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.IsValidGridIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentItem_C*         CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::IsValidGridIndex(int32 InRow, int32 InColumn, bool* Return_Value, class UW_AttachmentItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "IsValidGridIndex");

	Params::UW_AttachmentCategory_C_IsValidGridIndex_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.FindGridIndexFromAttachmentItemWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UW_AttachmentItem_C*         InAttachmentItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Row                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Column                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::FindGridIndexFromAttachmentItemWidget(class UW_AttachmentItem_C* InAttachmentItemWidget, int32* Out_Row, int32* Out_Column, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "FindGridIndexFromAttachmentItemWidget");

	Params::UW_AttachmentCategory_C_FindGridIndexFromAttachmentItemWidget_Params Parms{};

	Parms.InAttachmentItemWidget = InAttachmentItemWidget;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = Parms.Out_Row;

	if (Out_Column != nullptr)
		*Out_Column = Parms.Out_Column;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.FindAttachmentItemWidgetAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         K2Node_DynamicCast_AsW_Attachment_Item                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::FindAttachmentItemWidgetAt(int32 InRow, int32 InColumn, class UW_AttachmentItem_C** Return_Value, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_AttachmentItem_C* K2Node_DynamicCast_AsW_Attachment_Item, bool K2Node_DynamicCast_bSuccess, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "FindAttachmentItemWidgetAt");

	Params::UW_AttachmentCategory_C_FindAttachmentItemWidgetAt_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Attachment_Item = K2Node_DynamicCast_AsW_Attachment_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZero2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_AttachmentCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnMouseMove");

	Params::UW_AttachmentCategory_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_IsZero2D_ReturnValue = CallFunc_IsZero2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.Get_SelectedItemInfo_Container_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_AttachmentCategory_C::Get_SelectedItemInfo_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "Get_SelectedItemInfo_Container_Visibility");

	Params::UW_AttachmentCategory_C_Get_SelectedItemInfo_Container_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.UnselectAttachmentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::UnselectAttachmentItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "UnselectAttachmentItem");

	Params::UW_AttachmentCategory_C_UnselectAttachmentItem_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.SelectAttachmentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::SelectAttachmentItem(class UW_AttachmentItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "SelectAttachmentItem");

	Params::UW_AttachmentCategory_C_SelectAttachmentItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.UnhoverAttachmentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::UnhoverAttachmentItem(class UW_AttachmentItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "UnhoverAttachmentItem");

	Params::UW_AttachmentCategory_C_UnhoverAttachmentItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.HoverAttachmentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::HoverAttachmentItem(class UW_AttachmentItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "HoverAttachmentItem");

	Params::UW_AttachmentCategory_C_HoverAttachmentItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::PreviousColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "PreviousColumn");

	Params::UW_AttachmentCategory_C_PreviousColumn_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.NextColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::NextColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "NextColumn");

	Params::UW_AttachmentCategory_C_NextColumn_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::PreviousRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "PreviousRow");

	Params::UW_AttachmentCategory_C_PreviousRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.NextRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::NextRow(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "NextRow");

	Params::UW_AttachmentCategory_C_NextRow_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideMultiInput__Down__Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsUIHidden_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_4                                   (None)

struct FEventReply UW_AttachmentCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, const struct FKey& CallFunc_GetKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_7, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, const struct FKey& CallFunc_GetKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnKeyDown");

	Params::UW_AttachmentCategory_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Down__Return_Value = CallFunc_HandleMenuWideMultiInput__Down__Return_Value;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_GetKey_ReturnValue_2 = CallFunc_GetKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_GetKey_ReturnValue_3 = CallFunc_GetKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_GetKey_ReturnValue_4 = CallFunc_GetKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_16 = CallFunc_EqualEqual_KeyKey_ReturnValue_16;
	Parms.CallFunc_GetKey_ReturnValue_5 = CallFunc_GetKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_17 = CallFunc_EqualEqual_KeyKey_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_18 = CallFunc_EqualEqual_KeyKey_ReturnValue_18;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_19 = CallFunc_EqualEqual_KeyKey_ReturnValue_19;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_20 = CallFunc_EqualEqual_KeyKey_ReturnValue_20;
	Parms.CallFunc_GetKey_ReturnValue_6 = CallFunc_GetKey_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_21 = CallFunc_EqualEqual_KeyKey_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_22 = CallFunc_EqualEqual_KeyKey_ReturnValue_22;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_23 = CallFunc_EqualEqual_KeyKey_ReturnValue_23;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsUIHidden_Return_Value = CallFunc_IsUIHidden_Return_Value;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;
	Parms.CallFunc_Handled_ReturnValue_4 = CallFunc_Handled_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.UpdateSelectedItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InItemName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::UpdateSelectedItemName(class FText InItemName, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "UpdateSelectedItemName");

	Params::UW_AttachmentCategory_C_UpdateSelectedItemName_Params Parms{};

	Parms.InItemName = InItemName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.RemoveAllAttachmentItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::RemoveAllAttachmentItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "RemoveAllAttachmentItemWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAllChildrenExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         InAttachmentItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::DeselectAllChildrenExcept(class UW_AttachmentItem_C* InAttachmentItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "DeselectAllChildrenExcept");

	Params::UW_AttachmentCategory_C_DeselectAllChildrenExcept_Params Parms{};

	Parms.InAttachmentItemWidget = InAttachmentItemWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseAllChildrenExcept
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     InAttachmentCategoryWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "CollapseAllChildrenExcept");

	Params::UW_AttachmentCategory_C_CollapseAllChildrenExcept_Params Parms{};

	Parms.InAttachmentCategoryWidget = InAttachmentCategoryWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         AttachmentItemWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnAttachmentItemClicked(class UW_AttachmentItem_C* AttachmentItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnAttachmentItemClicked");

	Params::UW_AttachmentCategory_C_OnAttachmentItemClicked_Params Parms{};

	Parms.AttachmentItemWidget = AttachmentItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.CreateAttachmentItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::CreateAttachmentItemWidget(class UClass* AttachmentItemClass, int32 InRow, int32 InColumn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_AttachmentItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "CreateAttachmentItemWidget");

	Params::UW_AttachmentCategory_C_CreateAttachmentItemWidget_Params Parms{};

	Parms.AttachmentItemClass = AttachmentItemClass;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.ExpandChildren
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::ExpandChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "ExpandChildren");

	Params::UW_AttachmentCategory_C_ExpandChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::CollapseChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "CollapseChildren");

	Params::UW_AttachmentCategory_C_CollapseChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "PreConstruct");

	Params::UW_AttachmentCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         AttachmentItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnAttachmentItemButtonHovered(class UW_AttachmentItem_C* AttachmentItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnAttachmentItemButtonHovered");

	Params::UW_AttachmentCategory_C_OnAttachmentItemButtonHovered_Params Parms{};

	Parms.AttachmentItem = AttachmentItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnGunCleaned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentCategory_C::OnGunCleaned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnGunCleaned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.ExecuteUbergraph_W_AttachmentCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         K2Node_CustomEvent_AttachmentItem                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Row           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Column        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentItem_C*         CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::ExecuteUbergraph_W_AttachmentCategory(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UW_AttachmentItem_C* K2Node_CustomEvent_AttachmentItem, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Row, int32 CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Column, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UW_AttachmentItem_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable_4, class UClass* CallFunc_Array_Get_Item_3, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UW_AttachmentItem_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, class UW_AttachmentItem_C* CallFunc_Array_Get_Item_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "ExecuteUbergraph_W_AttachmentCategory");

	Params::UW_AttachmentCategory_C_ExecuteUbergraph_W_AttachmentCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CustomEvent_AttachmentItem = K2Node_CustomEvent_AttachmentItem;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Row = CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Row;
	Parms.CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Column = CallFunc_FindGridIndexFromAttachmentItemWidget_Out_Column;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnButtonUnhovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_AttachmentCategory_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnButtonHovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnButtonHovered__DelegateSignature");

	Params::UW_AttachmentCategory_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnAttachmentItemButtonClicked__DelegateSignature(class UClass* AttachmentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnAttachmentItemButtonClicked__DelegateSignature");

	Params::UW_AttachmentCategory_C_OnAttachmentItemButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentCategory_C::OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentCategory_C", "OnButtonClicked__DelegateSignature");

	Params::UW_AttachmentCategory_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}


