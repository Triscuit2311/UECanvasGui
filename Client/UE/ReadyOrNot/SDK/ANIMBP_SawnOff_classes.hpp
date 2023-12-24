#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x350 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_SawnOff.ANIMBP_SawnOff_C
class UANIMBP_SawnOff_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x308(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_SawnOff_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_SawnOff(int32 EntryPoint);
};

}


