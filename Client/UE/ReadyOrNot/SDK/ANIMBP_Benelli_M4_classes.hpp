#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x510 (0x7E0 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C
class UANIMBP_Benelli_M4_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2D8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x320(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3C0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x440(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4C0(0x158)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x618(0x30)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x648(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x668(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x728(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x770(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x798(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7C0(0x20)(None)

	static class UClass* StaticClass();
	static class UANIMBP_Benelli_M4_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878();
	void AnimNotify_PrimeShellRack();
	void AnimNotify_FinishShellLoad();
	void AnimNotify_ReplaceShellRack();
	void AnimNotify_ReloadNextShell();
	void ExecuteUbergraph_ANIMBP_Benelli_M4(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess, class AShotgun* K2Node_DynamicCast_AsShotgun_1, bool K2Node_DynamicCast_bSuccess_1, class AShotgun* K2Node_DynamicCast_AsShotgun_2, bool K2Node_DynamicCast_bSuccess_2, class AShotgun* K2Node_DynamicCast_AsShotgun_3, bool K2Node_DynamicCast_bSuccess_3, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UShellRackShellComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


