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
// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_NeoLoadout_C_BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_NeoLoadout_C_BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_NeoLoadout_C_BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.SetupItemList
struct UW_NeoLoadout_C_SetupItemList_Params
{
public:
	TArray<class ULoadoutItem*>                  Items;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ULoadoutItem*                          CurrentItem;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UW_NeoLoadout_C_BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_NeoLoadout_C_BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.OnSelectionListItemClicked
struct UW_NeoLoadout_C_OnSelectionListItemClicked_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x151 (0x151 - 0x0)
// Function W_NeoLoadout.W_NeoLoadout_C.ExecuteUbergraph_W_NeoLoadout
struct UW_NeoLoadout_C_ExecuteUbergraph_W_NeoLoadout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_4;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_4;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_3;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_3;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_2;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_2;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutItem*>                  K2Node_CustomEvent_Items;                          // 0x38(0x10)(ConstParm, ReferenceParm)
	class ULoadoutItem*                          K2Node_CustomEvent_CurrentItem;                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutWeapon*>                CallFunc_GetPrimaryWeapons_ReturnValue;            // 0x50(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULoadoutWeapon*>                CallFunc_GetSecondaryWeapons_ReturnValue;          // 0x68(0x10)(ConstParm, ReferenceParm)
	TArray<class ULoadoutEquipment*>             CallFunc_GetLongTacticalItems_ReturnValue;         // 0x78(0x10)(ConstParm, ReferenceParm)
	class UW_NeoLoadout_Slot_C*                  CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_441E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutItem*                          CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_441F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4420[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutWeapon*                        CallFunc_GetPrimaryWeapon_ReturnValue;             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutWeapon*                        CallFunc_GetSecondaryWeapon_ReturnValue;           // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutEquipment*                     CallFunc_GetLongTactical_ReturnValue;              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item_1;                 // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot_1;                 // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_ComponentBoundEvent_Item;                   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_ComponentBoundEvent_Slot;                   // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutEquipment*>             CallFunc_GetTacticalItems_ReturnValue;             // 0x108(0x10)(ConstParm, ReferenceParm)
	class ULoadoutItem*                          K2Node_CustomEvent_Item;                           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_CustomEvent_Slot;                           // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutWeapon*                        K2Node_DynamicCast_AsLoadout_Weapon;               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4421[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutWeapon*                        K2Node_DynamicCast_AsLoadout_Weapon_1;             // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4422[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutEquipment*                     K2Node_DynamicCast_AsLoadout_Equipment;            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


