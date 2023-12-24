#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x398 - 0x378)
// BlueprintGeneratedClass Projectile_Flare.Projectile_Flare_C
class AProjectile_Flare_C : public AProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_LenFlare_RoadFlare_C*              LensFlare;                                         // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LensFlare_FlareGun_C*              Gun_Flare;                                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Flare_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void SpawnLensFlare();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Projectile_Flare(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_LensFlare_FlareGun_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


