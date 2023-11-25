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
	 * AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C
	 * Size -> 0x0DE1 (FullSize[0x1099] - InheritedSize[0x02B8])
	 */
	class UANIMBP_Preview_Char_Body_C : public UAnimInstance
	{
	public:
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                   AnimGraphNode_TwoBoneIK_2;                               // 0x02D0(0x01E0)
		struct FAnimNode_TwoBoneIK                                   AnimGraphNode_TwoBoneIK;                                 // 0x04B0(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0690(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x06B0(0x0020)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x06D0(0x0080)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_6;                              // 0x0750(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_5;                              // 0x08B8(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_4;                              // 0x0A20(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_3;                              // 0x0B88(0x0168)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x0CF0(0x00A0)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_2;                              // 0x0D90(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver;                                // 0x0EF8(0x0168)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x1060(0x0030)
		class UAnimSequence*                                         PreviewSeqRef;                                           // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsPhysicsOn;                                            // 0x1098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ANIMBP_Preview_Char_Body(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
