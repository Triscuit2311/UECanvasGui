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
	 * AnimBlueprintGeneratedClass ANIMBP_M32A1.ANIMBP_M32A1_C
	 * Size -> 0x0250 (FullSize[0x0520] - InheritedSize[0x02D0])
	 */
	class UANIMBP_M32A1_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x0308(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0350(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x03D0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x04D8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x04F8(0x0020)
		float                                                        RotationCounter;                                         // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        RotationCounterSmoothed;                                 // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_RotateCylinder();
		void ExecuteUbergraph_ANIMBP_M32A1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
