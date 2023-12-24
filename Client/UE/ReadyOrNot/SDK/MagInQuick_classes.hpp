#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass MagInQuick.MagInQuick_C
class UMagInQuick_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UMagInQuick_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess);
};

}


