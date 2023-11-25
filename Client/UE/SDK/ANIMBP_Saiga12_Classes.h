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
	 * AnimBlueprintGeneratedClass ANIMBP_Saiga12.ANIMBP_Saiga12_C
	 * Size -> 0x036C (FullSize[0x063C] - InheritedSize[0x02D0])
	 */
	class UANIMBP_Saiga12_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0308(0x0048)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x0350(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0458(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x0478(0x0020)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0498(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0518(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0598(0x00A0)
		float                                                        Mag01Alpha;                                              // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E();
		void AnimNotify_ReplaceMags();
		void AnimNotify_SpawnPhysMag();
		void ExecuteUbergraph_ANIMBP_Saiga12(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
