#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E4 (0x4B4 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_M37.ANIMBP_M37_C
class UANIMBP_M37_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x308(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x410(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x430(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x478(0x18)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x490(0x20)(None)
	float                                        MagScale;                                          // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_M37_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_EjectMag();
	void ExecuteUbergraph_ANIMBP_M37(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default);
};

}


