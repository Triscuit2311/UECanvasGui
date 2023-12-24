#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD65 (0x1035 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_MP510.ANIMBP_MP510_C
class UANIMBP_MP510_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x308(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x410(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x430(0xC0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4F0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x5A0(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x620(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x728(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x748(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x7C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x7E8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x8F0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x910(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x990(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x9B0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xAB8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xAD8(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xB58(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xB78(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xBC0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC60(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xCE0(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xD60(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xEB8(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xF78(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xFC0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xFE8(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1010(0x20)(None)
	float                                        Mag_01Alpha;                                       // 0x1030(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CurrentFireMode;                                   // 0x1034(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_MP510_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP510_AnimGraphNode_BlendListByBool_046358884859E10A31499EB86A49D5E0();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_MP510(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


