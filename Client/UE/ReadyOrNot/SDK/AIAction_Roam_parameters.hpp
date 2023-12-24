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

// 0x2 (0x2 - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.ShouldPerformAction
struct UAIAction_Roam_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.InitAction_Blueprint
struct UAIAction_Roam_C_InitAction_Blueprint_Params
{
public:
	class ACyberneticController*                 Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.OnMoveComplete_Blueprint
struct UAIAction_Roam_C_OnMoveComplete_Blueprint_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RequestID;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.Tick_Blueprint
struct UAIAction_Roam_C_Tick_Blueprint_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.OnPathFound_Blueprint
struct UAIAction_Roam_C_OnPathFound_Blueprint_Params
{
public:
	int32                                        PathId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERonNavigationQueryResult         Result;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function AIAction_Roam.AIAction_Roam_C.ExecuteUbergraph_AIAction_Roam
struct UAIAction_Roam_C_ExecuteUbergraph_AIAction_Roam_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4049[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_404A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class UThreatAwarenessSubsystem*             CallFunc_GetWorldSubsystem_ReturnValue;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticController*                 K2Node_Event_Controller_1;                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_404B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_404C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         K2Node_Event_Controller;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_RequestID;                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_2;               // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_404D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_3;               // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xF4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UNavigationQueryFilter>    CallFunc_GetNavQueryFilter_ReturnValue;            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_404E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_4;               // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x124(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PathId;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERonNavigationQueryResult         K2Node_Event_Result;                               // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_404F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    CallFunc_GetNavQueryFilter_ReturnValue_1;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1; // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1; // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4050[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_5;               // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4051[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x168(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x184(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4052[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AThreatAwarenessActor*                 CallFunc_GetNearestThreat_ReturnValue;             // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4053[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AThreatAwarenessActor*>         CallFunc_GetThreatsForLocation_OutThreats;         // 0x1A8(0x10)(ReferenceParm)
	class AThreatAwarenessActor*                 CallFunc_GetFurthestHighestThreat_ReturnValue;     // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


