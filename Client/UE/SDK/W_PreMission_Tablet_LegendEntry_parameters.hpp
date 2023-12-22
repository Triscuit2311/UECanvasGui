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

// 0x1 (0x1 - 0x0)
// Function W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C.PreConstruct
struct UW_PreMission_Tablet_LegendEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C.ExecuteUbergraph_W_PreMission_Tablet_LegendEntry
struct UW_PreMission_Tablet_LegendEntry_C_ExecuteUbergraph_W_PreMission_Tablet_LegendEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_MapMarker_C*      CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                    CallFunc_Create_ReturnValue_1;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlanningMarker                       K2Node_MakeStruct_PlanningMarker;                  // 0x2C(0x28)(NoDestructor)
	uint8                                        Pad_EAB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USizeBoxSlot*                          CallFunc_SlotAsSizeBoxSlot_ReturnValue;            // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


