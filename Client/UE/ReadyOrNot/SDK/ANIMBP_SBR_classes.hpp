#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA84 (0xD54 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_SBR.ANIMBP_SBR_C
class UANIMBP_SBR_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x308(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x350(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3F0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x470(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4F0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x5F8(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x618(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x6D8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x720(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x748(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x768(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x870(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x890(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x8B0(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x9B8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xB10(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xB38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xC40(0x108)(None)
	bool                                         bIsSemi;                                           // 0xD48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mag01Alpha;                                        // 0xD4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScopeAdjustAlpha;                                  // 0xD50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_SBR_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_ModifyBone_3C723A0546DF3DF2849A99983EE90417();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SBR_AnimGraphNode_BlendListByBool_AC0A424D41C0F856351D728CFC5F049D();
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_SBR(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


