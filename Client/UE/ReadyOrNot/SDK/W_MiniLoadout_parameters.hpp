#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_MiniLoadout_C_BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_MiniLoadout_C_BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_MiniLoadout_C_BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.SetupItemList
struct UW_MiniLoadout_C_SetupItemList_Params
{
public:
	TArray<class ULoadoutItem*>                  Items;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ULoadoutItem*                          CurrentItem;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UW_MiniLoadout_C_BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_MiniLoadout_C_BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.OnSelectionListItemClicked
struct UW_MiniLoadout_C_OnSelectionListItemClicked_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.PrimarySet
struct UW_MiniLoadout_C_PrimarySet_Params
{
public:
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.SecondarySet
struct UW_MiniLoadout_C_SecondarySet_Params
{
public:
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.HelmetSet
struct UW_MiniLoadout_C_HelmetSet_Params
{
public:
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.ArmorSet
struct UW_MiniLoadout_C_ArmorSet_Params
{
public:
	TSubclassOf<class ABaseItem>                 Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.ExecuteUbergraph_W_MiniLoadout
struct UW_MiniLoadout_C_ExecuteUbergraph_W_MiniLoadout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 K2Node_Event_Class;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_4;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_4;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_3;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_3;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_2;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_2;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutItem*>                  K2Node_CustomEvent_Items;                          // 0x40(0x10)(ConstParm, ReferenceParm)
	class ULoadoutItem*                          K2Node_CustomEvent_CurrentItem;                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutWeapon*>                CallFunc_GetPrimaryWeapons_ReturnValue;            // 0x58(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULoadoutWeapon*>                CallFunc_GetSecondaryWeapons_ReturnValue;          // 0x70(0x10)(ConstParm, ReferenceParm)
	TArray<class ULoadoutEquipment*>             CallFunc_GetLongTacticalItems_ReturnValue;         // 0x80(0x10)(ConstParm, ReferenceParm)
	class UW_NeoLoadout_Slot_C*                  CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutItem*                          CallFunc_Array_Get_Item;                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3921[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutWeapon*                        CallFunc_GetPrimaryWeapon_ReturnValue;             // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutWeapon*                        CallFunc_GetSecondaryWeapon_ReturnValue;           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutEquipment*                     CallFunc_GetLongTactical_ReturnValue;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_1;                 // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_1;                 // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item;                   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot;                   // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_CustomEvent_Item;                           // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_CustomEvent_Slot;                           // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutEquipment*                     CallFunc_GetHelmet_ReturnValue;                    // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutEquipment*                     K2Node_DynamicCast_AsLoadout_Equipment;            // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutEquipment*                     K2Node_DynamicCast_AsLoadout_Equipment_1;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutWeapon*                        K2Node_DynamicCast_AsLoadout_Weapon;               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3940[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutWeapon*                        K2Node_DynamicCast_AsLoadout_Weapon_1;             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3941[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutEquipment*                     K2Node_DynamicCast_AsLoadout_Equipment_2;          // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutEquipment*                     CallFunc_GetArmor_ReturnValue;                     // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutEquipment*>             CallFunc_GetArmorItems_ReturnValue;                // 0x180(0x10)(ConstParm, ReferenceParm)
	TArray<class ULoadoutEquipment*>             CallFunc_GetHelmetItems_ReturnValue;               // 0x190(0x10)(ConstParm, ReferenceParm)
	TSubclassOf<class ABaseItem>                 K2Node_Event_Class_3;                              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ABaseItem>                 K2Node_Event_Class_2;                              // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ABaseItem>                 K2Node_Event_Class_1;                              // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.MLHelmetSet__DelegateSignature
struct UW_MiniLoadout_C_MLHelmetSet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.MLArmorSet__DelegateSignature
struct UW_MiniLoadout_C_MLArmorSet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.MLSecondarySet__DelegateSignature
struct UW_MiniLoadout_C_MLSecondarySet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MiniLoadout.W_MiniLoadout_C.MLPrimarySet__DelegateSignature
struct UW_MiniLoadout_C_MLPrimarySet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


