#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TargetStunRemainingTime.AC_TargetStunRemainingTime_C
class UAC_TargetStunRemainingTime_C : public UAIActionConsideration
{
public:
	bool                                         bAllowLastTrackedTarget;                           // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAC_TargetStunRemainingTime_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class AReadyOrNotCharacter* Target, float CallFunc_GetCurrentStunDuration_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurrentStunTime_ReturnValue, bool CallFunc_IsStunned_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


