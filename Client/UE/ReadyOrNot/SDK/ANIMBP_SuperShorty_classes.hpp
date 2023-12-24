#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3D0 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_SuperShorty.ANIMBP_SuperShorty_C
class UANIMBP_SuperShorty_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x308(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x350(0x80)(None)

	static class UClass* StaticClass();
	static class UANIMBP_SuperShorty_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_PrimeShellRack();
	void AnimNotify_FinishShellLoad();
	void ExecuteUbergraph_ANIMBP_SuperShorty(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess, class AShotgun* K2Node_DynamicCast_AsShotgun_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UShellRackShellComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


