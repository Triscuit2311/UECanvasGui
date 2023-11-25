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
	 * AnimBlueprintGeneratedClass ANIMBP_VKS.ANIMBP_VKS_C
	 * Size -> 0x0760 (FullSize[0x0A30] - InheritedSize[0x02D0])
	 */
	class UANIMBP_VKS_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0308(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x0328(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x03E8(0x0048)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x0430(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x0458(0x0028)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x0480(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0588(0x0020)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x05A8(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x05F0(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x0690(0x0158)
		struct FAnimNode_RefPose                                     AnimGraphNode_LocalRefPose_2;                            // 0x07E8(0x0018)
		struct FAnimNode_RefPose                                     AnimGraphNode_LocalRefPose;                              // 0x0800(0x0018)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x0818(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0920(0x0108)
		float                                                        Mag01Alpha;                                              // 0x0A28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ScopeAdjustAlpha;                                        // 0x0A2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE();
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_VKS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
