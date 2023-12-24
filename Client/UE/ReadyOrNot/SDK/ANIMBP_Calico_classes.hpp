#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x350 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_Calico.ANIMBP_Calico_C
class UANIMBP_Calico_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x308(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_Calico_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_Calico(int32 EntryPoint);
};

}


