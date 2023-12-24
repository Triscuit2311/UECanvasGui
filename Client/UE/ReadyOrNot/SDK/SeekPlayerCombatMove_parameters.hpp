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
// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.GetMoveStyleOverride
struct USeekPlayerCombatMove_C_GetMoveStyleOverride_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCivilian_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.RequestCombatMove_Blueprint
struct USeekPlayerCombatMove_C_RequestCombatMove_Blueprint_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.StartActivity_Blueprint
struct USeekPlayerCombatMove_C_StartActivity_Blueprint_Params
{
public:
	class AAIController*                         Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.FinishedActivity_Blueprint
struct USeekPlayerCombatMove_C_FinishedActivity_Blueprint_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.ExecuteUbergraph_SeekPlayerCombatMove
struct USeekPlayerCombatMove_C_ExecuteUbergraph_SeekPlayerCombatMove_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_424C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USWATManager*                          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_424D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  CallFunc_GetSquadLeader_ReturnValue;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x30(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_424E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_GetWorldStatic_ReturnValue;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticController*                 CallFunc_GetOwningController_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  CallFunc_GetTrackedTarget_ReturnValue;             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_424F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         K2Node_Event_Owner;                                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSuccess;                             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4250[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  CallFunc_GetCharacter_ReturnValue_1;               // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


