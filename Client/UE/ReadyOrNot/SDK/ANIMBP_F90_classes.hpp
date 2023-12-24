#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x93C (0xC0C - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_F90.ANIMBP_F90_C
class UANIMBP_F90_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x308(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x350(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4A8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x548(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5C8(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x648(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x668(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x728(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x770(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x798(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x7C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x8C8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x9D0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xAD8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAF8(0x108)(None)
	bool                                         bIsSemi;                                           // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mag01Alpha;                                        // 0xC04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScopeAdjustAlpha;                                  // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_F90_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_F90_AnimGraphNode_ModifyBone_DEFE07A94D3718D90D14DC9F90563349();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_F90_AnimGraphNode_BlendListByBool_267A8C534759FA1DA570D4929678F74A();
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_F90(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}


