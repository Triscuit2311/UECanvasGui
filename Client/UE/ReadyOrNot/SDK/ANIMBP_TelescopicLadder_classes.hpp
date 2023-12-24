#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B9 (0x571 - 0x2B8)
// AnimBlueprintGeneratedClass ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C
class UANIMBP_TelescopicLadder_C : public UAnimInstance
{
public:
	uint8                                        Pad_1AF9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x2C8(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3B0(0xE8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x498(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x538(0x30)(None)
	bool                                         bDeploying;                                        // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RungCount;                                         // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreezeFrame;                                       // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_TelescopicLadder_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ANIMBP_TelescopicLadder(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ALadderSnapZone* K2Node_DynamicCast_AsLadder_Snap_Zone, bool K2Node_DynamicCast_bSuccess, class ATelescopicLadder* K2Node_DynamicCast_AsTelescopic_Ladder, bool K2Node_DynamicCast_bSuccess_1);
};

}


