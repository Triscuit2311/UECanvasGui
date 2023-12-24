#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x710 (0x9E0 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_TCR.ANIMBP_TCR_C
class UANIMBP_TCR_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x308(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x410(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x518(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x540(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x560(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5A8(0xC0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x668(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x688(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x790(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x800(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x880(0x158)(None)
	float                                        Mag01Alpha;                                        // 0x9D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScopeAdjustAlpha;                                  // 0x9DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_TCR_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_TCR(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


