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
	 * AnimBlueprintGeneratedClass ANIMBP_Multitool.ANIMBP_Multitool_C
	 * Size -> 0x033A (FullSize[0x05F2] - InheritedSize[0x02B8])
	 */
	class UANIMBP_Multitool_C : public UAnimInstance
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum;                           // 0x02C8(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x0378(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x03F8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x0478(0x0080)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x04F8(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0540(0x0080)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x05C0(0x0030)
		EMultitoolFunctions                                          CurrentToolKit;                                          // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         SecondStage;                                             // 0x05F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_Multitool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
