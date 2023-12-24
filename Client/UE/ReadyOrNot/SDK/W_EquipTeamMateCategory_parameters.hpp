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

// 0x11 (0x11 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.GetColorAndOpacity_0
struct UW_EquipTeamMateCategory_C_GetColorAndOpacity_0_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Get_GearCategory_Text_Text_0
struct UW_EquipTeamMateCategory_C_Get_GearCategory_Text_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.PreConstruct
struct UW_EquipTeamMateCategory_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_EquipTeamMateCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Tick
struct UW_EquipTeamMateCategory_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.ExecuteUbergraph_W_EquipTeamMateCategory
struct UW_EquipTeamMateCategory_C_ExecuteUbergraph_W_EquipTeamMateCategory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_GearCategory_Text_Text_0_ReturnValue; // 0x8(0x18)(None)
	struct FLinearColor                          CallFunc_GetColorAndOpacity_0_ReturnValue;         // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x38(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue;        // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    CallFunc_GetEquippingSwatMember_EquippingSwat;     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColorAndOpacity_0_ReturnValue_1;       // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue_1;      // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonUnhovered__DelegateSignature
struct UW_EquipTeamMateCategory_C_OnButtonUnhovered__DelegateSignature_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonHovered__DelegateSignature
struct UW_EquipTeamMateCategory_C_OnButtonHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
struct UW_EquipTeamMateCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params
{
public:
	enum class EItemClass                        ItemClass;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObjectClass;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTactical;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot;                                      // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMultipleTacticalSlots;                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTacticalSlots;                                  // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Starting_Tactical_Slot;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      Loadout_Item_Widget;                               // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonClicked__DelegateSignature
struct UW_EquipTeamMateCategory_C_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutCategory_C*                  LoadoutCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


