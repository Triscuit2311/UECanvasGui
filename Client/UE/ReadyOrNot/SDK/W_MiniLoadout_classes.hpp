#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x770 - 0x6D8)
// WidgetBlueprintGeneratedClass W_MiniLoadout.W_MiniLoadout_C
class UW_MiniLoadout_C : public UCustomizationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_NeoLoadout_Slot_C*                  ArmorSlot;                                         // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  HelmetSlot;                                        // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LoadoutBox;                                        // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadoutWidgetSwitcher;                             // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  LongTacticalSlot;                                  // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  PrimarySlot;                                       // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  SecondarySlot;                                     // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SelectionBox;                                      // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SelectionScrollBox;                                // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ELoadoutV2Enum                    CurrentListType;                                   // 0x728(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3978[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MLPrimarySet;                                      // 0x730(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MLSecondarySet;                                    // 0x740(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MLArmorSet;                                        // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MLHelmetSet;                                       // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_MiniLoadout_C* GetDefaultObj();

	void Construct();
	void BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void SetupItemList(TArray<class ULoadoutItem*>& Items, class ULoadoutItem* CurrentItem);
	void SetupLoadout();
	void BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void OnSelectionListItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void PrimarySet(TSubclassOf<class ABaseItem> Class);
	void SecondarySet(TSubclassOf<class ABaseItem> Class);
	void HelmetSet(TSubclassOf<class ABaseItem> Class);
	void ArmorSet(TSubclassOf<class ABaseItem> Class);
	void ExecuteUbergraph_W_MiniLoadout(int32 EntryPoint, TSubclassOf<class ABaseItem> K2Node_Event_Class, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_4, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_4, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_3, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_3, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_2, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_2, TArray<class ULoadoutItem*>& K2Node_CustomEvent_Items, class ULoadoutItem* K2Node_CustomEvent_CurrentItem, TArray<class ULoadoutWeapon*>& CallFunc_GetPrimaryWeapons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class ULoadoutWeapon*>& CallFunc_GetSecondaryWeapons_ReturnValue, TArray<class ULoadoutEquipment*>& CallFunc_GetLongTacticalItems_ReturnValue, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class ULoadoutItem* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class ULoadoutWeapon* CallFunc_GetPrimaryWeapon_ReturnValue, class ULoadoutWeapon* CallFunc_GetSecondaryWeapon_ReturnValue, class ULoadoutEquipment* CallFunc_GetLongTactical_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_1, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_1, class ULoadoutItem* K2Node_ComponentBoundEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot, class ULoadoutItem* K2Node_CustomEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot, class ULoadoutEquipment* CallFunc_GetHelmet_ReturnValue, class ULoadoutEquipment* K2Node_DynamicCast_AsLoadout_Equipment, bool K2Node_DynamicCast_bSuccess, class ULoadoutEquipment* K2Node_DynamicCast_AsLoadout_Equipment_1, bool K2Node_DynamicCast_bSuccess_1, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon, bool K2Node_DynamicCast_bSuccess_2, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon_1, bool K2Node_DynamicCast_bSuccess_3, class ULoadoutEquipment* K2Node_DynamicCast_AsLoadout_Equipment_2, bool K2Node_DynamicCast_bSuccess_4, class ULoadoutEquipment* CallFunc_GetArmor_ReturnValue, TArray<class ULoadoutEquipment*>& CallFunc_GetArmorItems_ReturnValue, TArray<class ULoadoutEquipment*>& CallFunc_GetHelmetItems_ReturnValue, TSubclassOf<class ABaseItem> K2Node_Event_Class_3, TSubclassOf<class ABaseItem> K2Node_Event_Class_2, TSubclassOf<class ABaseItem> K2Node_Event_Class_1);
	void MLHelmetSet__DelegateSignature(class UClass* Class);
	void MLArmorSet__DelegateSignature(class UClass* Class);
	void MLSecondarySet__DelegateSignature(class UClass* Class);
	void MLPrimarySet__DelegateSignature(class UClass* Class);
};

}


