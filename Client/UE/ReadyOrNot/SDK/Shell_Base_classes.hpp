#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A0 - 0x258)
// BlueprintGeneratedClass Shell_Base.Shell_Base_C
class AShell_Base_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         ShellMesh;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        InitialSpeed;                                      // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SoundPlayed;                                       // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RightVectorMultiplier;                             // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpVectorMultiplier;                                // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForwardVectorMultiplier;                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ShellActors;                                       // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AShell_Base_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__CollisionComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void CustomEvent_0();
	void BndEvt__Shell_Base_StaticMesh1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_Shell_Base(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_VSize_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_IsLocalPlayer_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse_1, const struct FHitResult& K2Node_ComponentBoundEvent_Hit_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, TArray<class FName>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, class AStaticMeshActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


