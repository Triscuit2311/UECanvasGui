#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D0 (0x7A0 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_TAC700.ANIMBP_TAC700_C
class UANIMBP_TAC700_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x308(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x350(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3F0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x470(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4F0(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x648(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x708(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x750(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x778(0x28)(None)

	static class UClass* StaticClass();
	static class UANIMBP_TAC700_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_TAC700_AnimGraphNode_BlendListByBool_891F13364F4DC947D429C99B1543CDB7();
	void ExecuteUbergraph_ANIMBP_TAC700(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


