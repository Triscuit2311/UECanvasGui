#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2FC (0x5B4 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_TacPhone.ANIMBP_TacPhone_C
class UANIMBP_TacPhone_C : public UAnimInstance
{
public:
	uint8                                        Pad_1D2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2F8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x400(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x420(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x468(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x488(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x590(0x20)(None)
	float                                        TacphoneTransform_Alpha;                           // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_TacPhone_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Get_Player_Character(class APlayerCharacter** PlayerCharacter, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_TacPhone(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


