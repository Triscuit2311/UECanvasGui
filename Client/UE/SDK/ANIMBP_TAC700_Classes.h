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
	 * AnimBlueprintGeneratedClass ANIMBP_TAC700.ANIMBP_TAC700_C
	 * Size -> 0x04D0 (FullSize[0x07A0] - InheritedSize[0x02D0])
	 */
	class UANIMBP_TAC700_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0308(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0350(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x03F0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0470(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x04F0(0x0158)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0648(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0708(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0750(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0778(0x0028)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_TAC700_AnimGraphNode_BlendListByBool_891F13364F4DC947D429C99B1543CDB7();
		void ExecuteUbergraph_ANIMBP_TAC700(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
