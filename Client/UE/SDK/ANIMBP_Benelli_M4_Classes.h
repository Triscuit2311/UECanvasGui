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
	 * AnimBlueprintGeneratedClass ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C
	 * Size -> 0x0510 (FullSize[0x07E0] - InheritedSize[0x02D0])
	 */
	class UANIMBP_Benelli_M4_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x02D8(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0320(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x03C0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0440(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x04C0(0x0158)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x0618(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0648(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0668(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0728(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0770(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0798(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x07C0(0x0020)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878();
		void AnimNotify_PrimeShellRack();
		void AnimNotify_FinishShellLoad();
		void AnimNotify_ReplaceShellRack();
		void AnimNotify_ReloadNextShell();
		void ExecuteUbergraph_ANIMBP_Benelli_M4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
