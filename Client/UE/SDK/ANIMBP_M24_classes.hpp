#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x62C (0x8FC - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_M24.ANIMBP_M24_C
class UANIMBP_M24_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x308(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x388(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x490(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4B0(0x20)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_1;                        // 0x4D0(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver;                          // 0x638(0x168)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x7A0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8A8(0x48)(None)
	struct FRotator                              TestRot;                                           // 0x8F0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_M24_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_M24(int32 EntryPoint);
};

}


