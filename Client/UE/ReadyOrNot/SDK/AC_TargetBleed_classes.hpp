#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TargetBleed.AC_TargetBleed_C
class UAC_TargetBleed_C : public UAIActionConsideration
{
public:
	bool                                         bAllowLastTracked;                                 // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAC_TargetBleed_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class APlayerCharacter* Target, float CallFunc_GetBleedTime_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, bool CallFunc_IsBleeding_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_MapRangeClamped_ReturnValue);
};

}


