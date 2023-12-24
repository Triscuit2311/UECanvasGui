#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x93C (0xC0C - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_G36C_V2.ANIMBP_G36C_V2_C
class UANIMBP_G36C_V2_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x308(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x328(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x430(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x538(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x640(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x660(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x720(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x768(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x790(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7B8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x800(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x8A0(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x9F8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA78(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAF8(0x108)(None)
	bool                                         bIsSemi;                                           // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mag01Alpha;                                        // 0xC04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScopeAdjustAlpha;                                  // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_G36C_V2_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G36C_V2_AnimGraphNode_BlendListByBool_62E8109E4C91B45DB1E8809CEBCEBE2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G36C_V2_AnimGraphNode_ModifyBone_8A57EB234881555B82A504AAEFB0CFE3();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_G36C_V2(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


