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
	 * AnimBlueprintGeneratedClass AnimBP_MPX.ANIMBP_MPX_C
	 * Size -> 0x0939 (FullSize[0x0C09] - InheritedSize[0x02D0])
	 */
	class UANIMBP_MPX_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0308(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0350(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x03F0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0470(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x04F0(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x05F8(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x0700(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0808(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0828(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0848(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0908(0x0048)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0950(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0AA8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0AD0(0x0028)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0AF8(0x0108)
		float                                                        Mag01Alpha;                                              // 0x0C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ScopeAdjustAlpha;                                        // 0x0C04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsSemi;                                                 // 0x0C08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_ModifyBone_4145EDEF444AE51BD88897AEB2156270();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_BlendListByBool_DF4CA0A943CB2A4BF9E3008B64199A35();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void ExecuteUbergraph_ANIMBP_MPX(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
