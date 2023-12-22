#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x450 (0x708 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Sequencer_Head.ANIMBP_Sequencer_Head_C
class UANIMBP_Sequencer_Head_C : public UAnimInstance
{
public:
	uint8                                        Pad_C91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode;                       // 0x2F8(0xA0)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x398(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x570(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x630(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x678(0x80)(None)
	class UPoseAsset*                            FaceRomRef;                                        // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bodyref;                                           // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Sequencer_Head_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Sequencer_Head(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ASequencerCharacterTemplate_C* K2Node_DynamicCast_AsSequencer_Character_Template, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


