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
	 * AnimBlueprintGeneratedClass ANIMBP_PFC9.ANIMBP_PFC9_C
	 * Size -> 0x061C (FullSize[0x08EC] - InheritedSize[0x02D0])
	 */
	class UANIMBP_PFC9_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0308(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0410(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0430(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x04F0(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0538(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0560(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0588(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x05D0(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0670(0x0158)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x07C8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0848(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x08C8(0x0020)
		float                                                        Mag01Alpha;                                              // 0x08E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3();
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_PFC9(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
