#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x340 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Zipcuffs.ANIMBP_Zipcuffs_C
class UANIMBP_Zipcuffs_C : public UAnimInstance
{
public:
	uint8                                        Pad_44F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_Zipcuffs_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_Zipcuffs(int32 EntryPoint);
};

}


