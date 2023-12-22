#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEA9 (0x1199 - 0x2F0)
// AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C
class UANIMBP_Head_Shared_Master_C : public UReadyOrNotFaceAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x2F8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3C0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x440(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4C0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5C8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5E8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x608(0xA0)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x6A8(0x58)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x700(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x7B0(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x870(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x8B8(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x978(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xAD0(0x28)(None)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode;                       // 0xAF8(0xA0)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0xB98(0x78)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0xC10(0x18)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0xC28(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xE00(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xE80(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xEC8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xF48(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xFC8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xFF8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1078(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x10F8(0x80)(None)
	bool                                         IsPlayerDead;                                      // 0x1178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmotionWeight;                                     // 0x117C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtAlpha;                                       // 0x1180(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtLocation;                                    // 0x1184(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BodyMeshRef;                                       // 0x1190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterEmotion                 Emotion;                                           // 0x1198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Head_Shared_Master_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC();
	void ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32 EntryPoint, class UPoseAsset* CallFunc_GetFaceROM_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsDeadOrUnconscious_ReturnValue);
};

}


