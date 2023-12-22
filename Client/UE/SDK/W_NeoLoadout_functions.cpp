#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NeoLoadout.W_NeoLoadout_C
// (None)

class UClass* UW_NeoLoadout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NeoLoadout_C");

	return Clss;
}


// W_NeoLoadout_C W_NeoLoadout.Default__W_NeoLoadout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NeoLoadout_C* UW_NeoLoadout_C::GetDefaultObj()
{
	static class UW_NeoLoadout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NeoLoadout_C*>(UW_NeoLoadout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NeoLoadout.W_NeoLoadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_NeoLoadout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_C_BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_C_BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_C_BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.SetupItemList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ULoadoutItem*>        Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ULoadoutItem*                CurrentItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::SetupItemList(TArray<class ULoadoutItem*>& Items, class ULoadoutItem* CurrentItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "SetupItemList");

	Params::UW_NeoLoadout_C_SetupItemList_Params Parms{};

	Parms.Items = Items;
	Parms.CurrentItem = CurrentItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.SetupLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_NeoLoadout_C::SetupLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "SetupLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_C_BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_C_BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.OnSelectionListItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_C::OnSelectionListItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "OnSelectionListItemClicked");

	Params::UW_NeoLoadout_C_OnSelectionListItemClicked_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout.W_NeoLoadout_C.ExecuteUbergraph_W_NeoLoadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_ComponentBoundEvent_Item_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_ComponentBoundEvent_Slot_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_ComponentBoundEvent_Item_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_ComponentBoundEvent_Slot_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_ComponentBoundEvent_Item_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_ComponentBoundEvent_Slot_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutItem*>        K2Node_CustomEvent_Items                                         (ConstParm, ReferenceParm)
// class ULoadoutItem*                K2Node_CustomEvent_CurrentItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutWeapon*>      CallFunc_GetPrimaryWeapons_ReturnValue                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutWeapon*>      CallFunc_GetSecondaryWeapons_ReturnValue                         (ConstParm, ReferenceParm)
// TArray<class ULoadoutEquipment*>   CallFunc_GetLongTacticalItems_ReturnValue                        (ConstParm, ReferenceParm)
// class UW_NeoLoadout_Slot_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutItem*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutWeapon*              CallFunc_GetPrimaryWeapon_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutWeapon*              CallFunc_GetSecondaryWeapon_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutEquipment*           CallFunc_GetLongTactical_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutEquipment*>   CallFunc_GetTacticalItems_ReturnValue                            (ConstParm, ReferenceParm)
// class ULoadoutItem*                K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_CustomEvent_Slot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutWeapon*              K2Node_DynamicCast_AsLoadout_Weapon                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutWeapon*              K2Node_DynamicCast_AsLoadout_Weapon_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutEquipment*           K2Node_DynamicCast_AsLoadout_Equipment                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NeoLoadout_C::ExecuteUbergraph_W_NeoLoadout(int32 EntryPoint, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_4, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_4, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_3, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_3, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_2, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_2, TArray<class ULoadoutItem*>& K2Node_CustomEvent_Items, class ULoadoutItem* K2Node_CustomEvent_CurrentItem, TArray<class ULoadoutWeapon*>& CallFunc_GetPrimaryWeapons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class ULoadoutWeapon*>& CallFunc_GetSecondaryWeapons_ReturnValue, TArray<class ULoadoutEquipment*>& CallFunc_GetLongTacticalItems_ReturnValue, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class ULoadoutItem* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class ULoadoutWeapon* CallFunc_GetPrimaryWeapon_ReturnValue, class ULoadoutWeapon* CallFunc_GetSecondaryWeapon_ReturnValue, class ULoadoutEquipment* CallFunc_GetLongTactical_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_1, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_1, class ULoadoutItem* K2Node_ComponentBoundEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot, TArray<class ULoadoutEquipment*>& CallFunc_GetTacticalItems_ReturnValue, class ULoadoutItem* K2Node_CustomEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon, bool K2Node_DynamicCast_bSuccess, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, class ULoadoutEquipment* K2Node_DynamicCast_AsLoadout_Equipment, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_C", "ExecuteUbergraph_W_NeoLoadout");

	Params::UW_NeoLoadout_C_ExecuteUbergraph_W_NeoLoadout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item_4 = K2Node_ComponentBoundEvent_Item_4;
	Parms.K2Node_ComponentBoundEvent_Slot_4 = K2Node_ComponentBoundEvent_Slot_4;
	Parms.K2Node_ComponentBoundEvent_Item_3 = K2Node_ComponentBoundEvent_Item_3;
	Parms.K2Node_ComponentBoundEvent_Slot_3 = K2Node_ComponentBoundEvent_Slot_3;
	Parms.K2Node_ComponentBoundEvent_Item_2 = K2Node_ComponentBoundEvent_Item_2;
	Parms.K2Node_ComponentBoundEvent_Slot_2 = K2Node_ComponentBoundEvent_Slot_2;
	Parms.K2Node_CustomEvent_Items = K2Node_CustomEvent_Items;
	Parms.K2Node_CustomEvent_CurrentItem = K2Node_CustomEvent_CurrentItem;
	Parms.CallFunc_GetPrimaryWeapons_ReturnValue = CallFunc_GetPrimaryWeapons_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSecondaryWeapons_ReturnValue = CallFunc_GetSecondaryWeapons_ReturnValue;
	Parms.CallFunc_GetLongTacticalItems_ReturnValue = CallFunc_GetLongTacticalItems_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPrimaryWeapon_ReturnValue = CallFunc_GetPrimaryWeapon_ReturnValue;
	Parms.CallFunc_GetSecondaryWeapon_ReturnValue = CallFunc_GetSecondaryWeapon_ReturnValue;
	Parms.CallFunc_GetLongTactical_ReturnValue = CallFunc_GetLongTactical_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.CallFunc_GetTacticalItems_ReturnValue = CallFunc_GetTacticalItems_ReturnValue;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.K2Node_DynamicCast_AsLoadout_Weapon = K2Node_DynamicCast_AsLoadout_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLoadout_Weapon_1 = K2Node_DynamicCast_AsLoadout_Weapon_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsLoadout_Equipment = K2Node_DynamicCast_AsLoadout_Equipment;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


