#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * AnimBlueprintGeneratedClass ANIMBP_Colt1911.ANIMBP_Colt1911_C
	 * Size -> 0x0880 (FullSize[0x0B50] - InheritedSize[0x02D0])
	 */
	class UANIMBP_Colt1911_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0308(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0410(0x0020)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0430(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_2;                         // 0x0478(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x0518(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x0598(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0618(0x0158)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_2;                        // 0x0770(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0830(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0878(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x08A0(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x08C8(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0988(0x0020)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x09A8(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0A48(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0AC8(0x0080)
		float                                                        Mag01Alpha;                                              // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SlideAlpha;                                              // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76();
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void AnimNotify_SlideBack();
		void AnimNotify_SlideForward();
		void ExecuteUbergraph_ANIMBP_Colt1911(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
