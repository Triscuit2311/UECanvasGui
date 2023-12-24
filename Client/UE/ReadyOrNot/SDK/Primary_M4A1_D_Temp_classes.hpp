#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1438 - 0x1430)
// BlueprintGeneratedClass Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C
class APrimary_M4A1_D_Temp_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APrimary_M4A1_D_Temp_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Primary_M4A1_D_Temp(int32 EntryPoint);
};

}


