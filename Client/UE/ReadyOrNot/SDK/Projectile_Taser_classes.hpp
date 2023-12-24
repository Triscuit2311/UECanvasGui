#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass Projectile_Taser.Projectile_Taser_C
class AProjectile_Taser_C : public ABulletProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_Taser_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeflect(const struct FHitResult& DeflectionHit);
	void ExecuteUbergraph_Projectile_Taser(int32 EntryPoint, const struct FHitResult& K2Node_Event_DeflectionHit);
};

}


