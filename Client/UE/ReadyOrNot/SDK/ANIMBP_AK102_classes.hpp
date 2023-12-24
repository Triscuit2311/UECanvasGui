#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x355 (0x625 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_AK102.ANIMBP_AK102_C
class UANIMBP_AK102_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x308(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x410(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x430(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x450(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x498(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x518(0x108)(None)
	float                                        Mag01Alpha;                                        // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSemi;                                           // 0x624(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_AK102_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_AK102(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue);
};

}


