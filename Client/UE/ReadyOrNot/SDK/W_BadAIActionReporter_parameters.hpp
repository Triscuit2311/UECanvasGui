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

// 0x22 (0x22 - 0x0)
// Function W_BadAIActionReporter.W_BadAIActionReporter_C.IsReportButtonEnabled
struct UW_BadAIActionReporter_C_IsReportButtonEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4488[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_BadAIActionReporter_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_BadAIActionReporter_C_BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function W_BadAIActionReporter.W_BadAIActionReporter_C.ExecuteUbergraph_W_BadAIActionReporter
struct UW_BadAIActionReporter_C_ExecuteUbergraph_W_BadAIActionReporter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4489[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABadAIAction*                          CallFunc_GetMostRecentBadAIActionReport_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveBadAIActionReport_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x40(0x18)(None)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State_1;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABadAIAction*                          CallFunc_GetMostRecentBadAIActionReport_ReturnValue_1; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_VectorToText_ReturnValue;            // 0x80(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x98(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue_2;                    // 0xB0(0x18)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State_2;    // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABadAIAction*                          CallFunc_GetMostRecentBadAIActionReport_ReturnValue_2; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReportBadAIAction_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


