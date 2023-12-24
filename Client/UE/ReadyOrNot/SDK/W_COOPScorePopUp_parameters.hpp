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

// 0x1D (0x1D - 0x0)
// Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddScorePopup
struct UW_COOPScorePopUp_C_AddScorePopup_Params
{
public:
	class FText                                  InScoreText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        InCalculatedScore;                                 // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGive;                                             // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddObjectivePopup
struct UW_COOPScorePopUp_C_AddObjectivePopup_Params
{
public:
	class FText                                  InObjectiveText;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x70 (0x70 - 0x0)
// Function W_COOPScorePopUp.W_COOPScorePopUp_C.ExecuteUbergraph_W_COOPScorePopUp
struct UW_COOPScorePopUp_C_ExecuteUbergraph_W_COOPScorePopUp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ObjectiveNotify_C*                  CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_InScoreText;                    // 0x18(0x18)(None)
	int32                                        K2Node_CustomEvent_InCalculatedScore;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bGive;                          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_InObjectiveText;                // 0x40(0x18)(None)
	class UW_ScoreNotify_C*                      CallFunc_Create_ReturnValue_1;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


