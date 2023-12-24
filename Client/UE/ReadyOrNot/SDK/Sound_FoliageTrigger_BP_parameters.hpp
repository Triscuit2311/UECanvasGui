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

// 0xA8 (0xA8 - 0x0)
// Function Sound_FoliageTrigger_BP.Sound_FoliageTrigger_BP_C.BndEvt__Sound_CharacterTrigger_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASound_FoliageTrigger_BP_C_BndEvt__Sound_CharacterTrigger_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function Sound_FoliageTrigger_BP.Sound_FoliageTrigger_BP_C.BndEvt__Sound_FoliageTrigger_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ASound_FoliageTrigger_BP_C_BndEvt__Sound_FoliageTrigger_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Sound_FoliageTrigger_BP.Sound_FoliageTrigger_BP_C.HealthSend
struct ASound_FoliageTrigger_BP_C_HealthSend_Params
{
public:
	class AReadyOrNotCharacter*                  ReadyOrNotChar;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x309 (0x309 - 0x0)
// Function Sound_FoliageTrigger_BP.Sound_FoliageTrigger_BP_C.ExecuteUbergraph_Sound_FoliageTrigger_BP
struct ASound_FoliageTrigger_BP_C_ExecuteUbergraph_Sound_FoliageTrigger_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x30(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_DynamicCast_AsReady_or_Not_Character;       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_DynamicCast_AsReady_or_Not_Character_1;     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_Map_Find_Value;                           // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A82[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_Map_Find_Value_1;                         // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x130(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsOverlappingActor_ReturnValue;           // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_GetWorldStatic_ReturnValue;               // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x168(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A8E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x180(0x30)(IsPlainOldData, NoDestructor)
	class USoundSource*                          CallFunc_CreateThirdPersonSound_ReturnValue;       // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODOcclusionDetails                 K2Node_MakeStruct_FMODOcclusionDetails;            // 0x1B8(0x3)(NoDestructor)
	uint8                                        Pad_3A8F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x200(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         K2Node_DynamicCast_AsBox_Collision;                // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOverlappingActor_ReturnValue_1;         // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x22A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A96[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x22C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AReadyOrNotCharacter*>          CallFunc_Map_Keys_Keys;                            // 0x238(0x10)(ReferenceParm)
	class AReadyOrNotCharacter*                  CallFunc_Array_Get_Item_1;                         // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x254(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundSource*                          CallFunc_Map_Find_Value_2;                         // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_VSize_ReturnValue;                        // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_ReadyOrNotChar;                 // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AReadyOrNotCharacter*>          CallFunc_Map_Keys_Keys_1;                          // 0x280(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  CallFunc_Array_Get_Item_2;                         // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentHealth_ReturnValue;             // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue_1;                 // 0x2AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_1;         // 0x2B0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UFMODAudioComponent*                   CallFunc_Map_Find_Value_3;                         // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item_3;                         // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         K2Node_DynamicCast_AsBox_Collision_1;              // 0x2D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOverlappingActor_ReturnValue_2;         // 0x2E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x2ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOverlappingActor_ReturnValue_3;         // 0x2EF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


