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
	 * AnimBlueprintGeneratedClass ANIMBP_HK416.ANIMBP_HK416_C
	 * Size -> 0x0944 (FullSize[0x0C14] - InheritedSize[0x02D0])
	 */
	class UANIMBP_HK416_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0308(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x0328(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x0430(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x0538(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0640(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0660(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0720(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0768(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0790(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x07B8(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0800(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x08A0(0x0158)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x09F8(0x0108)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0B00(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0B80(0x0080)
		float                                                        CarrierHandleAlpha;                                      // 0x0C00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsSemi;                                                 // 0x0C04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Mag01Alpha;                                              // 0x0C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        Mag02Alpha;                                              // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ScopeAdjustAlpha;                                        // 0x0C10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_BlendListByBool_772251864E7F31040FD51CB8097CDC82();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_ModifyBone_AA7726174B223B31F47E1FB903834373();
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void ExecuteUbergraph_ANIMBP_HK416(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
