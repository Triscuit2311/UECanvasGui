#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33A (0x5F2 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_Multitool.ANIMBP_Multitool_C
class UANIMBP_Multitool_C : public UAnimInstance
{
public:
	uint8                                        Pad_4047[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x2C8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x378(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3F8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x478(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x540(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5C0(0x30)(None)
	enum class EMultitoolFunctions               CurrentToolKit;                                    // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SecondStage;                                       // 0x5F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_Multitool_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Multitool(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AMultitool* K2Node_DynamicCast_AsMultitool, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


