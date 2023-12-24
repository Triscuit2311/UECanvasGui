#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD18 (0xFE8 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_UMP45.ANIMBP_UMP45_C
class UANIMBP_UMP45_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x308(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x350(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3F0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x470(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4F0(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x648(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x708(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x750(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x778(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x7A0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x7C0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x8C8(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x8E8(0xC0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x9A8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0xAB0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0xAD0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xAF0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0xBF8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0xC18(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xC38(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xD40(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xD60(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_3;                      // 0xD80(0x18)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_2;                      // 0xD98(0x18)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_1;                      // 0xDB0(0x18)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xDC8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xED0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xEF0(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0xF10(0x18)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xF28(0xB0)(None)
	float                                        Mag01Alpha;                                        // 0xFD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CurrentFireMode;                                   // 0xFDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSemi;                                           // 0xFDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FoldedStockAlpha;                                  // 0xFE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireSwitchBlendTime;                               // 0xFE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_UMP45_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_UMP45_AnimGraphNode_BlendListByBool_5DF726DD49E321544F42A5A05D4AB5CA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_UMP45(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}


