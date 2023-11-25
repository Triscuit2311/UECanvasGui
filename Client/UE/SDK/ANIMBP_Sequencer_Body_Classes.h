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
	 * AnimBlueprintGeneratedClass ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C
	 * Size -> 0x0999 (FullSize[0x0C51] - InheritedSize[0x02B8])
	 */
	class UANIMBP_Sequencer_Body_C : public UAnimInstance
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x02F8(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0340(0x00A0)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_6;                              // 0x03E0(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_5;                              // 0x0548(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_4;                              // 0x06B0(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_3;                              // 0x0818(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_2;                              // 0x0980(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver;                                // 0x0AE8(0x0168)
		bool                                                         bDontControlPose;                                        // 0x0C50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_Sequencer_Body(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
