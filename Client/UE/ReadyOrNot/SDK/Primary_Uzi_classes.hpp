#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1438 - 0x1430)
// BlueprintGeneratedClass Primary_Uzi.Primary_UZI_C
class APrimary_UZI_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APrimary_UZI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Primary_UZI(int32 EntryPoint);
};

}


