#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x760 (0xA30 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_VKS.ANIMBP_VKS_C
class UANIMBP_VKS_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x308(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x328(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x3E8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x430(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x458(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x480(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x588(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5F0(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x690(0x158)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_1;                      // 0x7E8(0x18)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x800(0x18)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x818(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x920(0x108)(None)
	float                                        Mag01Alpha;                                        // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScopeAdjustAlpha;                                  // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_VKS_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_VKS_AnimGraphNode_BlendListByBool_28F8CEA94DB40D8573439F813FDB66AE();
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_VKS(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX);
};

}


