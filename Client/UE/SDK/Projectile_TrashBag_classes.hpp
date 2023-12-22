#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x378 - 0x368)
// BlueprintGeneratedClass Projectile_TrashBag.Projectile_TrashBag_C
class AProjectile_TrashBag_C : public ABulletProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMOD_Ricochet_Sound;                               // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_TrashBag_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeflect(const struct FHitResult& DeflectionHit);
	void ExecuteUbergraph_Projectile_TrashBag(int32 EntryPoint, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FHitResult& K2Node_Event_DeflectionHit);
};

}


