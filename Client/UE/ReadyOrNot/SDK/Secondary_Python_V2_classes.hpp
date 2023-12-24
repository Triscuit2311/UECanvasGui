#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x1459 - 0x1430)
// BlueprintGeneratedClass Secondary_Python_V2.Secondary_Python_V2_C
class ASecondary_Python_V2_C : public ABaseMagazineWeapon
{
public:
	int32                                        BarrelIndex;                                       // 0x1430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  FireMontagesEmpty;                                 // 0x1438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                  FireMontages;                                      // 0x1448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bCocked;                                           // 0x1458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASecondary_Python_V2_C* GetDefaultObj();

	void UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue);
};

}


