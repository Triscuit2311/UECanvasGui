#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x999 (0xC51 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C
class UANIMBP_Sequencer_Body_C : public UAnimInstance
{
public:
	uint8                                        Pad_3EB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x340(0xA0)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_5;                        // 0x3E0(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_4;                        // 0x548(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_3;                        // 0x6B0(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_2;                        // 0x818(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_1;                        // 0x980(0x168)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver;                          // 0xAE8(0x168)(None)
	bool                                         bDontControlPose;                                  // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_Sequencer_Body_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Sequencer_Body(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsBeingArrested_ReturnValue, bool CallFunc_IsArrested_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


