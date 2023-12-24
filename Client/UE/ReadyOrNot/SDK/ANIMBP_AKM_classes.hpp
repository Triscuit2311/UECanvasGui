#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x350 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_AKM.ANIMBP_AKM_C
class UANIMBP_AKM_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2D8(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x320(0x30)(None)

	static class UClass* StaticClass();
	static class UANIMBP_AKM_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_AKM(int32 EntryPoint);
};

}


