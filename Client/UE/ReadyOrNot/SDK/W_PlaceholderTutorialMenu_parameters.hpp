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
// Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.MoveToLoadout
struct UW_PlaceholderTutorialMenu_C_MoveToLoadout_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1658 (0x1658 - 0x0)
// Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.ExecuteUbergraph_W_PlaceholderTutorialMenu
struct UW_PlaceholderTutorialMenu_C_ExecuteUbergraph_W_PlaceholderTutorialMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_402E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_CustomEvent_CallingButton;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout;                    // 0x28(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData;             // 0x1B0(0x1A0)(None)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGS_Tutorial_C*                        K2Node_DynamicCast_AsGS_Tutorial;                  // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_1;                  // 0x368(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_1;           // 0x4F0(0x1A0)(None)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_2;                  // 0x690(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_2;           // 0x818(0x1A0)(None)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_3;                  // 0x9B8(0x188)(None)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_4;                  // 0xB40(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_3;           // 0xCC8(0x1A0)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_4;           // 0xE68(0x1A0)(None)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_5;                  // 0x1008(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_5;           // 0x1190(0x1A0)(None)
	struct FSavedLoadout                         K2Node_MakeStruct_SavedLoadout_6;                  // 0x1330(0x188)(None)
	struct FTutorialMissionData                  K2Node_MakeStruct_TutorialMissionData_6;           // 0x14B8(0x1A0)(None)
};

}
}


