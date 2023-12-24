#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x874 (0xB44 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_MK18.ANIMBP_MK18_C
class UANIMBP_MK18_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x308(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x460(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4A8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x548(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5C8(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x648(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x708(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x750(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x778(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x7A0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x8A8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x8C8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x9D0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x9F0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xAF8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xB18(0x20)(None)
	float                                        CarrierHandleAlpha;                                // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSemi;                                           // 0xB3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mag01Alpha;                                        // 0xB40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_MK18_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_ModifyBone_840474584ED0B753AD6DF9B917324032();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_BlendListByBool_14BC27694C204713BF249982948108B9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_MK18(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


