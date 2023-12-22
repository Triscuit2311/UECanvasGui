#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_LastTargetAnimationBlockingTime.AC_LastTargetAnimationBlockingTime_C
class UAC_LastTargetAnimationBlockingTime_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_LastTargetAnimationBlockingTime_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


