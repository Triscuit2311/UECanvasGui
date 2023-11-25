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
	 * AnimBlueprintGeneratedClass ANIMBP_M16A4.ANIMBP_M16A4_C
	 * Size -> 0x0939 (FullSize[0x0C09] - InheritedSize[0x02D0])
	 */
	class UANIMBP_M16A4_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0308(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0350(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x03D0(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0470(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x04F0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x05F8(0x0020)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0618(0x0158)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0770(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0830(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0878(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x08A0(0x0028)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x08C8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x09D0(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x09F0(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0AF8(0x0108)
		float                                                        Mag01Alpha;                                              // 0x0C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CarrierHandleAlpha;                                      // 0x0C04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsSemi;                                                 // 0x0C08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_ModifyBone_D01617FC42B6C1E06820F0B7178D6EA2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M16A4_AnimGraphNode_BlendListByBool_B44AA927484E23B12380D38B2857D621();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void ExecuteUbergraph_ANIMBP_M16A4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
