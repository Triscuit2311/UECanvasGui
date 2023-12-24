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

// 0xC5 (0xC5 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.CanStartle
struct UAIAction_Startle_C_CanStartle_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotAIConfig*                   CallFunc_Get_ReturnValue;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloat_ReturnValue;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatMoveActivity*               CallFunc_GetCombatMoveActivity_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1650[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  CallFunc_GetTrackedTarget_ReturnValue;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1652[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1655[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Vector_Normal2D_ReturnValue;              // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue_1;           // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.AngleToAnimation
struct UAIAction_Startle_C_AngleToAnimation_Params
{
public:
	float                                        InAngle;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRight;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Return_Value;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;     // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_4;     // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1671[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1672[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_2;                           // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.IsLocationRightOfUs
struct UAIAction_Startle_C_IsLocationRightOfUs_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1688[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.ShouldPerformAction
struct UAIAction_Startle_C_ShouldPerformAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.InitAction_Blueprint
struct UAIAction_Startle_C_InitAction_Blueprint_Params
{
public:
	class ACyberneticController*                 Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.Tick_Blueprint
struct UAIAction_Startle_C_Tick_Blueprint_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function AIAction_Startle.AIAction_Startle_C.ExecuteUbergraph_AIAction_Startle
struct UAIAction_Startle_C_ExecuteUbergraph_AIAction_Startle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_16EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticController*                 K2Node_Event_Controller;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  CallFunc_GetTrackedTarget_ReturnValue;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue; // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_PlayMontageFromTable_ReturnValue;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_2;               // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue; // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocationRightOfUs_Return_Value;         // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_3;               // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Vector_Normal2D_ReturnValue;              // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_4;               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Acos_ReturnValue;                         // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RadiansToDegrees_ReturnValue;             // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GridSnap_Float_ReturnValue;               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStartle_Return_Value;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_AngleToAnimation_Return_Value;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_5;               // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotAIConfig*                   CallFunc_Get_ReturnValue;                          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloat_ReturnValue;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


