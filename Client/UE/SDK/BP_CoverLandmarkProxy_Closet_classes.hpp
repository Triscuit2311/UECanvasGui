#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x2A9 - 0x238)
// BlueprintGeneratedClass BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C
class ABP_CoverLandmarkProxy_Closet_C : public ACoverLandmarkProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                Interactable;                                      // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       MoveDirection;                                     // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MoveDoor_TImeline_Alpha_7A42D38C49923F8E7F4EA0AEA963829D; // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveDoor_TImeline__Direction_7A42D38C49923F8E7F4EA0AEA963829D; // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveDoor_TImeline;                                 // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOpen;                                             // 0x268(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bPlayerInteractionEnabled;                         // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4564[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0x26C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x278(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OriginalLocation;                                  // 0x284(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InteractionSocket;                                 // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MoveAmount;                                        // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            SlideDoorSound;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EPropagationType                  Test;                                              // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CoverLandmarkProxy_Closet_C* GetDefaultObj();

	bool CanInteract();
	bool CanInteractThroughHitActors(struct FHitResult& Hit);
	class FText DetermineActionText();
	class FName DetermineAnimatedIcon();
	float DetermineCurrentProgress();
	enum class EInputEvent DetermineInputEvent();
	float DetermineInteractionDistance();
	class UInteractableComponent* GetInteractableComponent();
	void OnRep_bOpen(const TArray<struct FMODParam>& Params, class UWorld* CallFunc_GetWorldStatic_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USoundSource* CallFunc_CreateThirdPersonSound_ReturnValue);
	void MoveDoor_TImeline__FinishedFunc();
	void MoveDoor_TImeline__UpdateFunc();
	void DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnProxyUse(bool bIsActive);
	void ReceiveBeginPlay();
	void OnProxyEnd(bool bSuccess);
	void ReceiveTick(float DeltaSeconds);
	void Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void ToggleDoor();
	void Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void EnableProxyInteraction();
	void DisableProxyInteraction();
	void ExecuteUbergraph_BP_CoverLandmarkProxy_Closet(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_7, class UInteractableComponent* K2Node_Event_InInteractableComponent_7, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_6, class UInteractableComponent* K2Node_Event_InInteractableComponent_6, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_5, class UInteractableComponent* K2Node_Event_InInteractableComponent_5, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_4, class UInteractableComponent* K2Node_Event_InInteractableComponent_4, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1, bool K2Node_Event_bIsActive, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_Event_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, class AReadyOrNotCharacter* K2Node_CustomEvent_InteractInstigator, class UInteractableComponent* K2Node_CustomEvent_InInteractableComponent, bool CallFunc_BooleanAND_ReturnValue);
};

}


