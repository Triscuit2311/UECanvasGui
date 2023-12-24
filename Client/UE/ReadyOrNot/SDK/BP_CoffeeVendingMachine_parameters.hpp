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

// 0x4 (0x4 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineCurrentProgress
struct ABP_CoffeeVendingMachine_C_DetermineCurrentProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CanInteract
struct ABP_CoffeeVendingMachine_C_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CanInteractThroughHitActors
struct ABP_CoffeeVendingMachine_C_CanInteractThroughHitActors_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineActionText
struct ABP_CoffeeVendingMachine_C_DetermineActionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineAnimatedIcon
struct ABP_CoffeeVendingMachine_C_DetermineAnimatedIcon_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineInputEvent
struct ABP_CoffeeVendingMachine_C_DetermineInputEvent_Params
{
public:
	enum class EInputEvent                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineInteractionDistance
struct ABP_CoffeeVendingMachine_C_DetermineInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.GetInteractableComponent
struct ABP_CoffeeVendingMachine_C_GetInteractableComponent_Params
{
public:
	class UInteractableComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnRep_bIsJammed
struct ABP_CoffeeVendingMachine_C_OnRep_bIsJammed_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue;         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4571[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4572[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4573[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component;       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4574[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetOriginalIconName_ReturnValue;          // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.IsMachineInteraction
struct ABP_CoffeeVendingMachine_C_IsMachineInteraction_Params
{
public:
	int32                                        Stage;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.InteractableToStageNumber
struct ABP_CoffeeVendingMachine_C_InteractableToStageNumber_Params
{
public:
	class UInteractableComponent*                InteractableComponent;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Return_Value;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.SetInUseBy
struct ABP_CoffeeVendingMachine_C_SetInUseBy_Params
{
public:
	class AReadyOrNotCharacter*                  Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4575[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4576[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4577[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4578[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4579[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component;       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetOriginalIconName_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_1;         // 0xB8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item_1;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_1;     // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.IsDispensingLiquid
struct ABP_CoffeeVendingMachine_C_IsDispensingLiquid_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DoubleTapInteract
struct ABP_CoffeeVendingMachine_C_DoubleTapInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.EndFire
struct ABP_CoffeeVendingMachine_C_EndFire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.EndInteract
struct ABP_CoffeeVendingMachine_C_EndInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Fire
struct ABP_CoffeeVendingMachine_C_Fire_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.MeleeInteract
struct ABP_CoffeeVendingMachine_C_MeleeInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnFocusGain
struct ABP_CoffeeVendingMachine_C_OnFocusGain_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnFocusLost
struct ABP_CoffeeVendingMachine_C_OnFocusLost_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ReceiveTick
struct ABP_CoffeeVendingMachine_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Interact
struct ABP_CoffeeVendingMachine_C_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Server_Interact
struct ABP_CoffeeVendingMachine_C_Server_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InteractableComponent;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Multicast_PlaySFX
struct ABP_CoffeeVendingMachine_C_Multicast_PlaySFX_Params
{
public:
	class AReadyOrNotCharacter*                  Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stage;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Multicast_SetDispenseLiquid
struct ABP_CoffeeVendingMachine_C_Multicast_SetDispenseLiquid_Params
{
public:
	bool                                         bOn;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.KickMachine
struct ABP_CoffeeVendingMachine_C_KickMachine_Params
{
public:
	class AReadyOrNotCharacter*                  Kicker;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7D0 (0x7D0 - 0x0)
// Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ExecuteUbergraph_BP_CoffeeVendingMachine
struct ABP_CoffeeVendingMachine_C_ExecuteUbergraph_BP_CoffeeVendingMachine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4581[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4584[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_4;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_5;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4585[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x58(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4586[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0xA0(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_7;                 // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_7;            // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_6;                 // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_6;            // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_5;                 // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_5;            // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_4;                 // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_4;            // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_3;                 // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_3;            // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_2;                 // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_2;            // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_1;                 // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_1;            // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4588[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x150(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4589[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component;       // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_458B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ComponentHasTag_ReturnValue;              // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_458C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator;                   // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent;              // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoffeeCup_C*                       K2Node_DynamicCast_AsBP_Coffee_Cup;                // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_458D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_1;         // 0x1B8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_458E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4590[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x218(0x18)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4591[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_2;         // 0x238(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_2;                         // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_1;     // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ComponentHasTag_ReturnValue_1;            // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4592[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4593[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_3;         // 0x268(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_3;                         // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4594[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_2;     // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x292(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4595[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_4;         // 0x298(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_4;                         // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4596[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_3;     // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4597[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_Array_Get_Item_5;                         // 0x2C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_4;     // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ComponentHasTag_ReturnValue_2;            // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4598[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4599[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x2E4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_459A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_5;         // 0x370(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_6;                         // 0x380(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_5;     // 0x390(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  CallFunc_Array_Get_Item_7;                         // 0x39C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_459C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Map_Find_Value_1;                         // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_459D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue;         // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_1;       // 0x3D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_2;       // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_3;       // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_459E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_6;         // 0x3D8(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_8;                         // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_6;     // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x401(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x404(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x40C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_InteractInstigator;             // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_CustomEvent_InteractableComponent;          // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_InteractableToStageNumber_Return_Value;   // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue_1;            // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoffeeCup_C*                       K2Node_DynamicCast_AsBP_Coffee_Cup_1;              // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue_2;            // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x452(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsButtonPushAnimationPlaying_ReturnValue; // 0x453(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x454(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x455(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_Instigator;                     // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Stage;                          // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x47C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x490(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x4D0(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_1;        // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x510(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_2;        // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x550(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_3;     // 0x580(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_3;        // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_4;        // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bOn;                            // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AA[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_4;     // 0x5D0(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_5;        // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x609(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x60A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x60B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x610(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoffeeCup_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddInventoryItem_ReturnValue;             // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PutItemInHands_ReturnValue;               // 0x651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_4;       // 0x652(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveInventoryItem_ReturnValue;          // 0x66A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x66C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDispensingLiquid_Return_Value;          // 0x671(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x672(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x673(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_2;                         // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x67C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value_3;                         // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x68C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x694(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_9;                         // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x6A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x6A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGE_Player_CoffeeBuff_C*               CallFunc_SpawnObject_ReturnValue;                  // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_10;                        // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x6B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x6BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x6C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x6C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x6C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B4[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_5;     // 0x6D0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x700(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x70C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x718(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x724(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_6;    // 0x725(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_7;    // 0x726(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_8;    // 0x727(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_9;    // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x729(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAprilFools_ReturnValue;                 // 0x72A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x72C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children_7;         // 0x738(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item_11;                        // 0x748(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x750(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                K2Node_DynamicCast_AsInteractable_Component_7;     // 0x758(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x761(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x762(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x764(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_Kicker;                         // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAprilFools_ReturnValue_1;               // 0x772(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAprilFools_ReturnValue_2;               // 0x773(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_2;                           // 0x778(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAprilFools_ReturnValue_3;               // 0x77C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_10;   // 0x77D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_3;                           // 0x780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x784(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAprilFools_ReturnValue_4;               // 0x785(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x786(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAprilFools_ReturnValue_5;               // 0x787(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBool_ReturnValue_1;                 // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_6;     // 0x790(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBool_ReturnValue_2;                 // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue_6;        // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


