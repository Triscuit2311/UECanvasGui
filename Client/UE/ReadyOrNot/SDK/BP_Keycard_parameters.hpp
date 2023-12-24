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
// Function BP_Keycard.BP_Keycard_C.CanInteract
struct ABP_Keycard_C_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function BP_Keycard.BP_Keycard_C.CanInteractThroughHitActors
struct ABP_Keycard_C_CanInteractThroughHitActors_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DetermineActionText
struct ABP_Keycard_C_DetermineActionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DetermineAnimatedIcon
struct ABP_Keycard_C_DetermineAnimatedIcon_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DetermineCurrentProgress
struct ABP_Keycard_C_DetermineCurrentProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DetermineInputEvent
struct ABP_Keycard_C_DetermineInputEvent_Params
{
public:
	enum class EInputEvent                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DetermineInteractionDistance
struct ABP_Keycard_C_DetermineInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Keycard.BP_Keycard_C.GetInteractableComponent
struct ABP_Keycard_C_GetInteractableComponent_Params
{
public:
	class UInteractableComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.DoubleTapInteract
struct ABP_Keycard_C_DoubleTapInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.EndFire
struct ABP_Keycard_C_EndFire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.EndInteract
struct ABP_Keycard_C_EndInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.Fire
struct ABP_Keycard_C_Fire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.MeleeInteract
struct ABP_Keycard_C_MeleeInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.OnFocusGain
struct ABP_Keycard_C_OnFocusGain_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.OnFocusLost
struct ABP_Keycard_C_OnFocusLost_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Keycard.BP_Keycard_C.Interact
struct ABP_Keycard_C_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BP_Keycard.BP_Keycard_C.ExecuteUbergraph_BP_Keycard
struct ABP_Keycard_C_ExecuteUbergraph_BP_Keycard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_455C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_7;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_7;            // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_6;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_6;            // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_5;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_5;            // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_4;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_4;            // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_3;                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_3;            // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_2;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_2;            // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_1;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_1;            // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator;                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent;              // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


