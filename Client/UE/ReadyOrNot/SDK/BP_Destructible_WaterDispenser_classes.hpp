#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass BP_Destructible_WaterDispenser.BP_Destructible_WaterDispenser_C
class ABP_Destructible_WaterDispenser_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Water;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Glass;                                             // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       HitLocations;                                      // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                HitHeight;                                         // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>      Emitters;                                          // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_Destructible_WaterDispenser_C* GetDefaultObj();

	struct FRotator SetRotation(class USceneComponent* Self2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, struct FHitResult& HitInfo);
	void ReceiveTick(float DeltaSeconds);
	void ServerHit(const struct FHitResult& HitInfo);
	void ClientHit(const struct FHitResult& HitInfo);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Destructible_WaterDispenser(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_GetClassFromObject_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, const struct FVector& K2Node_Event_HitLocation_1, const struct FVector& K2Node_Event_HitNormal_1, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FHitResult& K2Node_Event_HitInfo, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, class UParticleSystemComponent* CallFunc_Array_Get_Item_2, class UParticleSystemComponent* CallFunc_Array_Get_Item_3, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& K2Node_CustomEvent_HitInfo_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& K2Node_CustomEvent_HitInfo, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FRotator& CallFunc_SetRotation_ReturnValue, const struct FRotator& CallFunc_SetRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, int32 CallFunc_Array_Add_ReturnValue_2);
};

}


