#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x26A - 0x250)
// BlueprintGeneratedClass BP_FMOD_FootstepFoley.BP_FMOD_FootstepFoley_C
class ABP_FMOD_FootstepFoley_C : public AReadyOrNotTriggerVolume
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEventToTrigger;                                // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldPlayEveryStep;                              // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bhasTriggered;                                     // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FMOD_FootstepFoley_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void Start_Overlap(class AActor* Actor);
	void Stop_Overlap(class AActor* Actor);
	void ExecuteUbergraph_BP_FMOD_FootstepFoley(int32 EntryPoint, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AActor* K2Node_Event_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AActor* K2Node_Event_OtherActor, class AActor* K2Node_CustomEvent_Actor_1, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_Actor, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


