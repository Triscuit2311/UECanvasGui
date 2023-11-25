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
	 * AnimBlueprintGeneratedClass ANIMBP_MP510.ANIMBP_MP510_C
	 * Size -> 0x0D65 (FullSize[0x1035] - InheritedSize[0x02D0])
	 */
	class UANIMBP_MP510_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x0308(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_4;                   // 0x0410(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_2;                        // 0x0430(0x00C0)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum;                           // 0x04F0(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_6;                          // 0x05A0(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x0620(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_3;                   // 0x0728(0x0020)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_5;                          // 0x0748(0x0080)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_4;                   // 0x07C8(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x07E8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_2;                   // 0x08F0(0x0020)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x0910(0x0080)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_3;                   // 0x0990(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x09B0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0AB8(0x0020)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x0AD8(0x0080)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_2;                   // 0x0B58(0x0020)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x0B78(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0BC0(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0C60(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0CE0(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0D60(0x0158)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0EB8(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0F78(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0FC0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0FE8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x1010(0x0020)
		float                                                        Mag01Alpha;                                              // 0x1030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint8_t                                                      CurrentFireMode;                                         // 0x1034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP510_AnimGraphNode_BlendListByBool_046358884859E10A31499EB86A49D5E0();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void ExecuteUbergraph_ANIMBP_MP510(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
