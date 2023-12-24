#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x510 (0x7E0 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_B1301.ANIMBP_B1301_C
class UANIMBP_B1301_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x308(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x350(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4A8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x548(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5C8(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x648(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x668(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x728(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x770(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x798(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7C0(0x20)(None)

	static class UClass* StaticClass();
	static class UANIMBP_B1301_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B1301_AnimGraphNode_BlendListByBool_0E18469B4C827EBA3EDEBB91DA3B0B1E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_B1301(int32 EntryPoint, float K2Node_Event_DeltaTimeX, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


