#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x730 (0xA00 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_M4A1.ANIMBP_M4A1_C
class UANIMBP_M4A1_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2D8(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x358(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3F8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x478(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4C0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4E0(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x510(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x668(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x728(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x770(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x798(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x7C0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x8C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8E8(0x108)(None)
	float                                        Mag01Alpha;                                        // 0x9F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSemi;                                           // 0x9F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bBoltCatchOut;                                     // 0x9F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4034[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CarrierHandleAlpha;                                // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mag02Alpha;                                        // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_M4A1_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_ModifyBone_8E78BCA04BD977039EBD828BA781AE49();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_BlendListByBool_9B2906464D15BB2B86F012808FED91B8();
	void ExecuteUbergraph_ANIMBP_M4A1(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InSingleMode_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


