#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass BP_Keycard.BP_Keycard_C
class ABP_Keycard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                PickupInteractable;                                // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  KeycardMesh;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Keycard_C* GetDefaultObj();

	bool CanInteract();
	bool CanInteractThroughHitActors(struct FHitResult& Hit);
	class FText DetermineActionText();
	class FName DetermineAnimatedIcon();
	float DetermineCurrentProgress();
	enum class EInputEvent DetermineInputEvent();
	float DetermineInteractionDistance();
	class UInteractableComponent* GetInteractableComponent();
	void DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void ReceiveBeginPlay();
	void Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void ExecuteUbergraph_BP_Keycard(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_7, class UInteractableComponent* K2Node_Event_InInteractableComponent_7, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_6, class UInteractableComponent* K2Node_Event_InInteractableComponent_6, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_5, class UInteractableComponent* K2Node_Event_InInteractableComponent_5, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_4, class UInteractableComponent* K2Node_Event_InInteractableComponent_4, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


