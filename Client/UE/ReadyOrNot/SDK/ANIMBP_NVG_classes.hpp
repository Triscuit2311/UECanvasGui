#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x730 (0x9E8 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_NVG.ANIMBP_NVG_C
class UANIMBP_NVG_C : public UAnimInstance
{
public:
	uint8                                        Pad_3545[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x340(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x448(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x550(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x570(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x590(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x5B0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x6B8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x7C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8C8(0x108)(None)
	bool                                         bActive;                                           // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHideMesh;                                         // 0x9D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3546[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NVGTransformAlpha;                                 // 0x9D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsThirdPersonMesh;                                // 0x9D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3547[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANightvisionGoggles*                   NVG;                                               // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_NVG_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetPlayerCharacter(class APlayerCharacter** PlayerCharacter, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_HideFPMesh();
	void AnimNotify_ShowFPMesh();
	void ExecuteUbergraph_ANIMBP_NVG(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
};

}


