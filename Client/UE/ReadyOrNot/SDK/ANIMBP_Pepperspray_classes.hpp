#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C0 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Pepperspray.ANIMBP_Pepperspray_C
class UANIMBP_Pepperspray_C : public UAnimInstance
{
public:
	uint8                                        Pad_358B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x340(0x80)(None)

	static class UClass* StaticClass();
	static class UANIMBP_Pepperspray_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_Pepperspray(int32 EntryPoint);
};

}


