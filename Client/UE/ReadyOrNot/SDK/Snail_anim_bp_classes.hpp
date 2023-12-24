#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x370 - 0x2B8)
// AnimBlueprintGeneratedClass Snail_anim_bp.Snail_anim_bp_C
class USnail_anim_bp_C : public UAnimInstance
{
public:
	uint8                                        Pad_40C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x2F8(0x78)(None)

	static class UClass* StaticClass();
	static class USnail_anim_bp_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Snail_anim_bp(int32 EntryPoint);
};

}


