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

// 0x8 (0x8 - 0x0)
// Function Device_Tablet.Device_Tablet_C.PlaySoundEvent
struct ADevice_Tablet_C_PlaySoundEvent_Params
{
public:
	class UFMODEvent*                            Event;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7DC (0x7DC - 0x0)
// Function Device_Tablet.Device_Tablet_C.ExecuteUbergraph_Device_Tablet
struct ADevice_Tablet_C_ExecuteUbergraph_Device_Tablet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_402B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                K2Node_DynamicCast_AsW_Pre_Mission_Tablet;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            K2Node_Event_Event;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetLevelData_ReturnValue;                 // 0x30(0x788)(None)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x7B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1;       // 0x7C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x7CC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


