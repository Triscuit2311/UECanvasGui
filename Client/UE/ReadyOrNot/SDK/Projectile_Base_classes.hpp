#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x378 - 0x368)
// BlueprintGeneratedClass Projectile_Base.Projectile_Base_C
class AProjectile_Base_C : public ABulletProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMOD_Ricochet_Sound;                               // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Base_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnDeflect(const struct FHitResult& DeflectionHit);
	void ExecuteUbergraph_Projectile_Base(int32 EntryPoint, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FHitResult& K2Node_Event_DeflectionHit);
};

}


