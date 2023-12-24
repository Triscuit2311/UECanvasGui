#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SkinCategory.W_SkinCategory_C
// (None)

class UClass* UW_SkinCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SkinCategory_C");

	return Clss;
}


// W_SkinCategory_C W_SkinCategory.Default__W_SkinCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SkinCategory_C* UW_SkinCategory_C::GetDefaultObj()
{
	static class UW_SkinCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SkinCategory_C*>(UW_SkinCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SkinCategory.W_SkinCategory_C.DeselectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::DeselectAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "DeselectAll");

	Params::UW_SkinCategory_C_DeselectAll_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_SkinCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnKeyUp");

	Params::UW_SkinCategory_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SkinCategory.W_SkinCategory_C.IsValidGridIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinItem_C*               CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::IsValidGridIndex(int32 InRow, int32 InColumn, bool* Return_Value, class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "IsValidGridIndex");

	Params::UW_SkinCategory_C_IsValidGridIndex_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_SkinCategory.W_SkinCategory_C.Find Grid Index From Skin Item Widget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UW_SkinItem_C*               InSkinItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Row                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Column                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::Find_Grid_Index_From_Skin_Item_Widget(class UW_SkinItem_C* InSkinItemWidget, int32* Out_Row, int32* Out_Column, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "Find Grid Index From Skin Item Widget");

	Params::UW_SkinCategory_C_Find_Grid_Index_From_Skin_Item_Widget_Params Parms{};

	Parms.InSkinItemWidget = InSkinItemWidget;
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


// Function W_SkinCategory.W_SkinCategory_C.FindAttachmentItemWidgetAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               K2Node_DynamicCast_AsW_Skin_Item                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::FindAttachmentItemWidgetAt(int32 InRow, int32 InColumn, class UW_SkinItem_C** Return_Value, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_SkinItem_C* K2Node_DynamicCast_AsW_Skin_Item, bool K2Node_DynamicCast_bSuccess, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "FindAttachmentItemWidgetAt");

	Params::UW_SkinCategory_C_FindAttachmentItemWidgetAt_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Skin_Item = K2Node_DynamicCast_AsW_Skin_Item;
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


// Function W_SkinCategory.W_SkinCategory_C.OnMouseMove
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

struct FEventReply UW_SkinCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnMouseMove");

	Params::UW_SkinCategory_C_OnMouseMove_Params Parms{};

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


// Function W_SkinCategory.W_SkinCategory_C.Get_SelectedItemInfo_Container_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_SkinCategory_C::Get_SelectedItemInfo_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "Get_SelectedItemInfo_Container_Visibility");

	Params::UW_SkinCategory_C_Get_SelectedItemInfo_Container_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SkinCategory.W_SkinCategory_C.UnselectSkinItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::UnselectSkinItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "UnselectSkinItem");

	Params::UW_SkinCategory_C_UnselectSkinItem_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.SelectSkinItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::SelectSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "SelectSkinItem");

	Params::UW_SkinCategory_C_SelectSkinItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.UnhoverSkinItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::UnhoverSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "UnhoverSkinItem");

	Params::UW_SkinCategory_C_UnhoverSkinItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.HoverSkinItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               CallFunc_FindAttachmentItemWidgetAt_Return_Value                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::HoverSkinItem(class UW_SkinItem_C* CallFunc_FindAttachmentItemWidgetAt_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "HoverSkinItem");

	Params::UW_SkinCategory_C_HoverSkinItem_Params Parms{};

	Parms.CallFunc_FindAttachmentItemWidgetAt_Return_Value = CallFunc_FindAttachmentItemWidgetAt_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.PreviousColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::PreviousColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "PreviousColumn");

	Params::UW_SkinCategory_C_PreviousColumn_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.NextColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::NextColumn(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "NextColumn");

	Params::UW_SkinCategory_C_NextColumn_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.PreviousRow
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

void UW_SkinCategory_C::PreviousRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "PreviousRow");

	Params::UW_SkinCategory_C_PreviousRow_Params Parms{};

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


// Function W_SkinCategory.W_SkinCategory_C.NextRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidGridIndex_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::NextRow(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValidGridIndex_Return_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "NextRow");

	Params::UW_SkinCategory_C_NextRow_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_IsValidGridIndex_Return_Value = CallFunc_IsValidGridIndex_Return_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.OnKeyDown
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

struct FEventReply UW_SkinCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, const struct FKey& CallFunc_GetKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_7, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, const struct FKey& CallFunc_GetKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnKeyDown");

	Params::UW_SkinCategory_C_OnKeyDown_Params Parms{};

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


// Function W_SkinCategory.W_SkinCategory_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.UpdateSelectedItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InItemName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::UpdateSelectedItemName(class FText InItemName, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "UpdateSelectedItemName");

	Params::UW_SkinCategory_C_UpdateSelectedItemName_Params Parms{};

	Parms.InItemName = InItemName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.RemoveAllAttachmentItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::RemoveAllAttachmentItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "RemoveAllAttachmentItemWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.UnhoverAllChildrenExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItemWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::UnhoverAllChildrenExcept(class UW_SkinItem_C* SkinItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "UnhoverAllChildrenExcept");

	Params::UW_SkinCategory_C_UnhoverAllChildrenExcept_Params Parms{};

	Parms.SkinItemWidget = SkinItemWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.DeselectAllChildrenExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               InSkinItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::DeselectAllChildrenExcept(class UW_SkinItem_C* InSkinItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "DeselectAllChildrenExcept");

	Params::UW_SkinCategory_C_DeselectAllChildrenExcept_Params Parms{};

	Parms.InSkinItemWidget = InSkinItemWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.CollapseAllChildrenExcept
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

void UW_SkinCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "CollapseAllChildrenExcept");

	Params::UW_SkinCategory_C_CollapseAllChildrenExcept_Params Parms{};

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


// Function W_SkinCategory.W_SkinCategory_C.OnSkinItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItemWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnSkinItemClicked(class UW_SkinItem_C* SkinItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnSkinItemClicked");

	Params::UW_SkinCategory_C_OnSkinItemClicked_Params Parms{};

	Parms.SkinItemWidget = SkinItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.CreateSkinItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SkinClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::CreateSkinItemWidget(class UClass* SkinClass, int32 InRow, int32 InColumn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_SkinItem_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "CreateSkinItemWidget");

	Params::UW_SkinCategory_C_CreateSkinItemWidget_Params Parms{};

	Parms.SkinClass = SkinClass;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.ExpandChildren
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::ExpandChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "ExpandChildren");

	Params::UW_SkinCategory_C_ExpandChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.CollapseChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::CollapseChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "CollapseChildren");

	Params::UW_SkinCategory_C_CollapseChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "PreConstruct");

	Params::UW_SkinCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnSkinItemButtonHovered(class UW_SkinItem_C* SkinItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnSkinItemButtonHovered");

	Params::UW_SkinCategory_C_OnSkinItemButtonHovered_Params Parms{};

	Parms.SkinItem = SkinItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnGunCleaned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinCategory_C::OnGunCleaned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnGunCleaned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinCategory.W_SkinCategory_C.ExecuteUbergraph_W_SkinCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinItem_C*               K2Node_CustomEvent_SkinItem                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Row           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Column        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinItem_C*               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::ExecuteUbergraph_W_SkinCategory(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_3, class UW_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_SkinItem_C* K2Node_CustomEvent_SkinItem, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Row, int32 CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Column, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UW_SkinItem_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class UW_SkinItem_C* CallFunc_Array_Get_Item_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "ExecuteUbergraph_W_SkinCategory");

	Params::UW_SkinCategory_C_ExecuteUbergraph_W_SkinCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_SkinItem = K2Node_CustomEvent_SkinItem;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Row = CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Row;
	Parms.CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Column = CallFunc_Find_Grid_Index_From_Skin_Item_Widget_Out_Column;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnButtonUnhovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_SkinCategory_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnButtonHovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnButtonHovered__DelegateSignature");

	Params::UW_SkinCategory_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SkinClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnSkinItemButtonClicked__DelegateSignature(class UClass* SkinClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnSkinItemButtonClicked__DelegateSignature");

	Params::UW_SkinCategory_C_OnSkinItemButtonClicked__DelegateSignature_Params Parms{};

	Parms.SkinClass = SkinClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinCategory.W_SkinCategory_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinCategory_C::OnButtonClicked__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinCategory_C", "OnButtonClicked__DelegateSignature");

	Params::UW_SkinCategory_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}


