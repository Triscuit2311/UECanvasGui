#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1438 - 0x1430)
// BlueprintGeneratedClass Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C
class ASecondary_FiveSeven_V2_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASecondary_FiveSeven_V2_C* GetDefaultObj();

	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_Secondary_FiveSeven_V2(int32 EntryPoint);
};

}


