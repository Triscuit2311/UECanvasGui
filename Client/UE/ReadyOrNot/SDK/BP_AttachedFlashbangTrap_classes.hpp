#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x380 - 0x340)
// BlueprintGeneratedClass BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C
class ABP_AttachedFlashbangTrap_C : public ATrapActorAttachedToDoor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   ExplodeSound;                                      // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ExplodeEffect;                                     // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ActivateEffect;                                    // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TrapActivateTime;                                  // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_42D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        DamagedActorsMap;                                  // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AReadyOrNotCharacter*                  Triggered_By;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AttachedFlashbangTrap_C* GetDefaultObj();

	void CanApplyDamage(class UDamageType* InDamageType, bool* Return_Value, class UClass* CallFunc_GetObjectClass_ReturnValue, class UStunDamage* K2Node_DynamicCast_AsStun_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy);
	void Server_ApplyDamage(class AReadyOrNotCharacter* InTriggeredBy);
	void Explode_Trap();
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, struct FHitResult& HitInfo);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_AttachedFlashbangTrap(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_TriggeredBy, class AReadyOrNotCharacter* K2Node_CustomEvent_InTriggeredBy, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsOnSWATTeam_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType_1, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class AController* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DamageReceived, class UDamageType* K2Node_Event_DamageType, const struct FVector& K2Node_Event_Origin, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_CanApplyDamage_Return_Value, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_ApplyRadialDamage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


