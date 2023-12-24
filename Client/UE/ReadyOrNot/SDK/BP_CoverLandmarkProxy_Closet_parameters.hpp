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
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteract
struct ABP_CoverLandmarkProxy_Closet_C_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteractThroughHitActors
struct ABP_CoverLandmarkProxy_Closet_C_CanInteractThroughHitActors_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineActionText
struct ABP_CoverLandmarkProxy_Closet_C_DetermineActionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineAnimatedIcon
struct ABP_CoverLandmarkProxy_Closet_C_DetermineAnimatedIcon_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineCurrentProgress
struct ABP_CoverLandmarkProxy_Closet_C_DetermineCurrentProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInputEvent
struct ABP_CoverLandmarkProxy_Closet_C_DetermineInputEvent_Params
{
public:
	enum class EInputEvent                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInteractionDistance
struct ABP_CoverLandmarkProxy_Closet_C_DetermineInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.GetInteractableComponent
struct ABP_CoverLandmarkProxy_Closet_C_GetInteractableComponent_Params
{
public:
	class UInteractableComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnRep_bOpen
struct ABP_CoverLandmarkProxy_Closet_C_OnRep_bOpen_Params
{
public:
	TArray<struct FMODParam>                     Params;                                            // 0x0(0x10)(Edit, BlueprintVisible)
	class UWorld*                                CallFunc_GetWorldStatic_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_455D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x30)(IsPlainOldData, NoDestructor)
	class USoundSource*                          CallFunc_CreateThirdPersonSound_ReturnValue;       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DoubleTapInteract
struct ABP_CoverLandmarkProxy_Closet_C_DoubleTapInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndFire
struct ABP_CoverLandmarkProxy_Closet_C_EndFire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndInteract
struct ABP_CoverLandmarkProxy_Closet_C_EndInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Fire
struct ABP_CoverLandmarkProxy_Closet_C_Fire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MeleeInteract
struct ABP_CoverLandmarkProxy_Closet_C_MeleeInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusGain
struct ABP_CoverLandmarkProxy_Closet_C_OnFocusGain_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusLost
struct ABP_CoverLandmarkProxy_Closet_C_OnFocusLost_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyUse
struct ABP_CoverLandmarkProxy_Closet_C_OnProxyUse_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyEnd
struct ABP_CoverLandmarkProxy_Closet_C_OnProxyEnd_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ReceiveTick
struct ABP_CoverLandmarkProxy_Closet_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Interact
struct ABP_CoverLandmarkProxy_Closet_C_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Server_Interact
struct ABP_CoverLandmarkProxy_Closet_C_Server_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B1 (0x1B1 - 0x0)
// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ExecuteUbergraph_BP_CoverLandmarkProxy_Closet
struct ABP_CoverLandmarkProxy_Closet_C_ExecuteUbergraph_BP_CoverLandmarkProxy_Closet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_7;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_7;            // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_6;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_6;            // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_5;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_5;            // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_4;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_4;            // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_3;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_3;            // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_2;                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_2;            // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_1;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_1;            // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsActive;                            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0xB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSuccess;                             // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4560[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x150(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator;                   // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent;              // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4561[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x180(0x18)(None)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4562[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_InteractInstigator;             // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_CustomEvent_InInteractableComponent;        // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


