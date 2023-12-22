#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x340 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_CSGas.ANIMBP_CSGas_C
class UANIMBP_CSGas_C : public UAnimInstance
{
public:
	uint8                                        Pad_454B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_CSGas_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_CSGas(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


