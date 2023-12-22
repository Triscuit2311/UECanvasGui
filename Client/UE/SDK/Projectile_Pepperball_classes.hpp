#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x378 - 0x370)
// BlueprintGeneratedClass Projectile_Pepperball.Projectile_Pepperball_C
class AProjectile_Pepperball_C : public APepperProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_Pepperball_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_Pepperball(int32 EntryPoint);
};

}


