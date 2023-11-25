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
	 * AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C
	 * Size -> 0x0410 (FullSize[0x06C8] - InheritedSize[0x02B8])
	 */
	class UANIMBP_Preview_Char_Head_C : public UAnimInstance
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x02F8(0x0080)
		struct FAnimNode_PoseBlendNode                               AnimGraphNode_PoseBlendNode;                             // 0x0378(0x00A0)
		struct FAnimNode_CopyPoseFromMesh                            AnimGraphNode_CopyPoseFromMesh;                          // 0x0418(0x01D8) ContainsInstancedReference
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x05F0(0x00C0)
		class UPoseAsset*                                            FaceRomRef;                                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                         FaceSequenceRef;                                         // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                                Bodyref;                                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_Preview_Char_Head(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
