#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * AnimBlueprintGeneratedClass ANIMBP_M24.ANIMBP_M24_C
	 * Size -> 0x062C (FullSize[0x08FC] - InheritedSize[0x02D0])
	 */
	class UANIMBP_M24_C : public URoNWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x0308(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x0388(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x0490(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x04B0(0x0020)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_2;                              // 0x04D0(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver;                                // 0x0638(0x0168)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x07A0(0x0108)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x08A8(0x0048)
		struct FRotator                                 TestRot;                                                 // 0x08F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ANIMBP_M24(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
