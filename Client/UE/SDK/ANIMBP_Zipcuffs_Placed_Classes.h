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
	 * AnimBlueprintGeneratedClass ANIMBP_Zipcuffs_Placed.ANIMBP_Zipcuffs_Placed_C
	 * Size -> 0x00C0 (FullSize[0x0378] - InheritedSize[0x02B8])
	 */
	class UANIMBP_Zipcuffs_Placed_C : public UAnimInstance
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x02C8(0x0080)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x0348(0x0030)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ANIMBP_Zipcuffs_Placed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
