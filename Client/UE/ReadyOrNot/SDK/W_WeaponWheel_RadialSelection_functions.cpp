#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C
// (None)

class UClass* UW_WeaponWheel_RadialSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_RadialSelection_C");

	return Clss;
}


// W_WeaponWheel_RadialSelection_C W_WeaponWheel_RadialSelection.Default__W_WeaponWheel_RadialSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_RadialSelection_C* UW_WeaponWheel_RadialSelection_C::GetDefaultObj()
{
	static class UW_WeaponWheel_RadialSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_RadialSelection_C*>(UW_WeaponWheel_RadialSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UImage*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UW_WeaponWheel_RadialSelection_C::CreateIcon(struct FSlateBrush& InBrush, int32 CallFunc_Array_LastIndex_ReturnValue, class UImage* CallFunc_Array_Get_Item, class UImage* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "CreateIcon");

	Params::UW_WeaponWheel_RadialSelection_C_CreateIcon_Params Parms{};

	Parms.InBrush = InBrush;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ItemArray                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Indicies_FoundNullItems                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::RemoveNullItems__Internal_(TArray<class UObject*>& ItemArray, const TArray<int32>& Indicies_FoundNullItems, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "RemoveNullItems (Internal)");

	Params::UW_WeaponWheel_RadialSelection_C_RemoveNullItems__Internal__Params Parms{};

	Parms.ItemArray = ItemArray;
	Parms.Indicies_FoundNullItems = Indicies_FoundNullItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_RadialSelection_C::RemoveNullItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "RemoveNullItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::IsInExecutablesArray(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "IsInExecutablesArray");

	Params::UW_WeaponWheel_RadialSelection_C_IsInExecutablesArray_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponWheelScript*          WeaponWheelScript                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::RemoveExecutableItemFromCategory(class UWeaponWheelScript* WeaponWheelScript, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "RemoveExecutableItemFromCategory");

	Params::UW_WeaponWheel_RadialSelection_C_RemoveExecutableItemFromCategory_Params Parms{};

	Parms.WeaponWheelScript = WeaponWheelScript;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponWheelScript*          WeaponWheelScript                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AtIndex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::AddExecutableItemToCategory(class UWeaponWheelScript* WeaponWheelScript, int32 AtIndex, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "AddExecutableItemToCategory");

	Params::UW_WeaponWheel_RadialSelection_C_AddExecutableItemToCategory_Params Parms{};

	Parms.WeaponWheelScript = WeaponWheelScript;
	Parms.AtIndex = AtIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShuffleItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_RadialSelection_C::ShuffleItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "ShuffleItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::ShiftItemToNewSpot(class ABaseItem* Item, int32 NewIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "ShiftItemToNewSpot");

	Params::UW_WeaponWheel_RadialSelection_C_ShiftItemToNewSpot_Params Parms{};

	Parms.Item = Item;
	Parms.NewIndex = NewIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::MoveToBack(class ABaseItem* Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "MoveToBack");

	Params::UW_WeaponWheel_RadialSelection_C_MoveToBack_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::MoveToFront(class ABaseItem* Item, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "MoveToFront");

	Params::UW_WeaponWheel_RadialSelection_C_MoveToFront_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 InBrush                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_DynamicCast_AsBase_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponWheelScript*          K2Node_DynamicCast_AsWeapon_Wheel_Script                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)

void UW_WeaponWheel_RadialSelection_C::UpdateIcon(int32 SelectionIndex, const struct FSlateBrush& InBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "UpdateIcon");

	Params::UW_WeaponWheel_RadialSelection_C_UpdateIcon_Params Parms{};

	Parms.SelectionIndex = SelectionIndex;
	Parms.InBrush = InBrush;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBase_Item = K2Node_DynamicCast_AsBase_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWeapon_Wheel_Script = K2Node_DynamicCast_AsWeapon_Wheel_Script;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::Select(int32 Index, class UObject* CallFunc_Array_Get_Item, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "Select");

	Params::UW_WeaponWheel_RadialSelection_C_Select_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGrenadeThrowSettingTypeCallFunc_LoadGrenadeSettings_GrenadeThrowType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_DynamicCast_AsBase_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PutItemInHands_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponWheelScript*          K2Node_DynamicCast_AsWeapon_Wheel_Script                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanEquip_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseGrenade*                K2Node_DynamicCast_AsBase_Grenade                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::ExecuteRadial(enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_PutItemInHands_ReturnValue, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanEquip_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "ExecuteRadial");

	Params::UW_WeaponWheel_RadialSelection_C_ExecuteRadial_Params Parms{};

	Parms.CallFunc_LoadGrenadeSettings_GrenadeThrowType = CallFunc_LoadGrenadeSettings_GrenadeThrowType;
	Parms.CallFunc_LoadGrenadeSettings_ReturnValue = CallFunc_LoadGrenadeSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBase_Item = K2Node_DynamicCast_AsBase_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_PutItemInHands_ReturnValue = CallFunc_PutItemInHands_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeapon_Wheel_Script = K2Node_DynamicCast_AsWeapon_Wheel_Script;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanEquip_ReturnValue = CallFunc_CanEquip_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Grenade = K2Node_DynamicCast_AsBase_Grenade;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Animation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::OnDeselected(bool Play_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "OnDeselected");

	Params::UW_WeaponWheel_RadialSelection_C_OnDeselected_Params Parms{};

	Parms.Play_Animation = Play_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Animation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::OnSelected(bool Play_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "OnSelected");

	Params::UW_WeaponWheel_RadialSelection_C_OnSelected_Params Parms{};

	Parms.Play_Animation = Play_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSucceeded                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Previous_bSuccess                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::Previous(bool* bSuccess, bool bSucceeded, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Previous_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "Previous");

	Params::UW_WeaponWheel_RadialSelection_C_Previous_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Previous_bSuccess = CallFunc_Previous_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSucceeded                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Next_bSuccess                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::Next(bool* bSuccess, bool bSucceeded, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Next_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "Next");

	Params::UW_WeaponWheel_RadialSelection_C_Next_Params Parms{};

	Parms.bSucceeded = bSucceeded;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Next_bSuccess = CallFunc_Next_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::RemoveItemFromCategory(class ABaseItem*& Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "RemoveItemFromCategory");

	Params::UW_WeaponWheel_RadialSelection_C_RemoveItemFromCategory_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AtIndex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UImage*                      CallFunc_CreateIcon_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::AddItemToCategory(class ABaseItem*& NewItem, int32 AtIndex, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UImage* CallFunc_CreateIcon_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "AddItemToCategory");

	Params::UW_WeaponWheel_RadialSelection_C_AddItemToCategory_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.AtIndex = AtIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_CreateIcon_ReturnValue = CallFunc_CreateIcon_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_1 = CallFunc_NotEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEquipping                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EBlockingAnimationExclusion>K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBlockingAnimationPlaying_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::IsEquipping(bool* IsEquipping, TArray<enum class EBlockingAnimationExclusion>& K2Node_MakeArray_Array, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsBlockingAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "IsEquipping");

	Params::UW_WeaponWheel_RadialSelection_C_IsEquipping_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsBlockingAnimationPlaying_ReturnValue = CallFunc_IsBlockingAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipping != nullptr)
		*IsEquipping = Parms.IsEquipping;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Item_Name                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FinalString                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_DynamicCast_AsBase_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponWheelScript*          K2Node_DynamicCast_AsWeapon_Wheel_Script                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::GetItemName(class FName* Item_Name, const class FString& FinalString, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& Temp_string_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, class UWeaponWheelScript* K2Node_DynamicCast_AsWeapon_Wheel_Script, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "GetItemName");

	Params::UW_WeaponWheel_RadialSelection_C_GetItemName_Params Parms{};

	Parms.FinalString = FinalString;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBase_Item = K2Node_DynamicCast_AsBase_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWeapon_Wheel_Script = K2Node_DynamicCast_AsWeapon_Wheel_Script;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Name != nullptr)
		*Item_Name = Parms.Item_Name;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Category                                                         (Parm, OutParm)

void UW_WeaponWheel_RadialSelection_C::GetCategory(class FText* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "GetCategory");

	Params::UW_WeaponWheel_RadialSelection_C_GetCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = Parms.Category;

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_RadialSelection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "PreConstruct");

	Params::UW_WeaponWheel_RadialSelection_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.On Wheel Created
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_RadialSelection_C::On_Wheel_Created()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "On Wheel Created");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_RadialSelection_C::ExecuteUbergraph_W_WeaponWheel_RadialSelection(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_1, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_RadialSelection_C", "ExecuteUbergraph_W_WeaponWheel_RadialSelection");

	Params::UW_WeaponWheel_RadialSelection_C_ExecuteUbergraph_W_WeaponWheel_RadialSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon_1 = K2Node_DynamicCast_AsBase_Magazine_Weapon_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


