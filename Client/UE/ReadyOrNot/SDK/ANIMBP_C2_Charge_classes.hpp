#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x560 - 0x460)
// AnimBlueprintGeneratedClass ANIMBP_C2_Charge.ANIMBP_C2_Charge_C
class UANIMBP_C2_Charge_C : public UReadyOrNotAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x468(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x498(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4E0(0x80)(None)

	static class UClass* StaticClass();
	static class UANIMBP_C2_Charge_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_C2_Charge(int32 EntryPoint);
};

}


