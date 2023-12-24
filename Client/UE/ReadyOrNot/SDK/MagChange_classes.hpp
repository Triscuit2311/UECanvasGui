#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass MagChange.MagChange_C
class UMagChange_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UMagChange_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}


