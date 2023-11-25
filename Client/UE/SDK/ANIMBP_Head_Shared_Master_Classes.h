#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C
	 * Size -> 0x1331 (FullSize[0x1601] - InheritedSize[0x02D0])
	 */
	class UANIMBP_Head_Shared_Master_C : public UReadyOrNotFaceAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_8;                          // 0x02D8(0x0080)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum;                           // 0x0358(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_7;                          // 0x0408(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_6;                          // 0x0488(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0508(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_5;                          // 0x05A8(0x0080)
		struct FAnimNode_TwoWayBlend                                 AnimGraphNode_TwoWayBlend_2;                             // 0x0628(0x00C8)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_2;                        // 0x06F0(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x07B0(0x0080)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0830(0x0020)
		struct FAnimNode_LookAt                                      AnimGraphNode_LookAt_3;                                  // 0x0850(0x01B0)
		struct FAnimNode_LookAt                                      AnimGraphNode_LookAt_2;                                  // 0x0A00(0x01B0)
		struct FAnimNode_LookAt                                      AnimGraphNode_LookAt;                                    // 0x0BB0(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0D60(0x0020)
		struct FAnimNode_PoseBlendNode                               AnimGraphNode_PoseBlendNode;                             // 0x0D80(0x00A0)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0E20(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0EE0(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x0F28(0x0080)
		struct FAnimNode_TwoWayBlend                                 AnimGraphNode_TwoWayBlend;                               // 0x0FA8(0x00C8)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x1070(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x11C8(0x0028)
		struct FAnimNode_CopyPoseFromMesh                            AnimGraphNode_CopyPoseFromMesh;                          // 0x11F0(0x01D8) ContainsInstancedReference
		struct FAnimNode_RandomPlayer                                AnimGraphNode_RandomPlayer;                              // 0x13C8(0x0078)
		struct FAnimNode_RefPose                                     AnimGraphNode_LocalRefPose;                              // 0x1440(0x0018)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x1458(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x14A0(0x0080)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x1520(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x1550(0x0080)
		bool                                                         IsPlayerDead;                                            // 0x15D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x15D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        EmotionWeight;                                           // 0x15D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 HeadLookRotation;                                        // 0x15D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        LookAtAlpha;                                             // 0x15E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  LookAtLocation;                                          // 0x15E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x15F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                                BodyMeshRef;                                             // 0x15F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterEmotion                                            Emotion;                                                 // 0x1600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_LookAt_C0761473496135B7511834B07DEBC79F();
		void ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
