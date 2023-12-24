#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x728 (0x9F8 - 0x2D0)
// AnimBlueprintGeneratedClass ANIMBP_MP5A3.ANIMBP_MP5A3_C
class UANIMBP_MP5A3_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x308(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x410(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x430(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x450(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x510(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x558(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x580(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5F0(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x690(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x7E8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x868(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8E8(0x108)(None)
	bool                                         bIsSemi;                                           // 0x9F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mag01Alpha;                                        // 0x9F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_MP5A3_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ANIMBP_MP5A3(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Conv_BoolToFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


