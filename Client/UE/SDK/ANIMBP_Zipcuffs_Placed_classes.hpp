#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x378 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Zipcuffs_Placed.ANIMBP_Zipcuffs_Placed_C
class UANIMBP_Zipcuffs_Placed_C : public UAnimInstance
{
public:
	uint8                                        Pad_3EB1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2C8(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x348(0x30)(None)

	static class UClass* StaticClass();
	static class UANIMBP_Zipcuffs_Placed_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_Zipcuffs_Placed(int32 EntryPoint);
};

}


