#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B1 (0xB11 - 0x460)
// AnimBlueprintGeneratedClass ANIMBP_Head_Smudge.ANIMBP_Head_Smudge_C
class UANIMBP_Head_Smudge_C : public UReadyOrNotAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x468(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode;                       // 0x640(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x6E0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x728(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x7E8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x940(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x968(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x998(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xA18(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xA40(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xA68(0xA0)(None)
	class USkeletalMeshComponent*                BodyMeshRef;                                       // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerDead;                                      // 0xB10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_Head_Smudge_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Head_Smudge(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsDeadOrUnconscious_ReturnValue);
};

}


