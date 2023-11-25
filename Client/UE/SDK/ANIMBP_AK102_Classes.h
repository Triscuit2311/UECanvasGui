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
	 * AnimBlueprintGeneratedClass ANIMBP_AK102.ANIMBP_AK102_C
	 * Size -> 0x0355 (FullSize[0x0625] - InheritedSize[0x02D0])
	 */
	class UANIMBP_AK102_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x0308(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0410(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0430(0x0020)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0450(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0498(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0518(0x0108)
		float                                                        Mag01Alpha;                                              // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsSemi;                                                 // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_DropSpeedReloadMagazine();
		void AnimNotify_ShowMag();
		void ExecuteUbergraph_ANIMBP_AK102(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
