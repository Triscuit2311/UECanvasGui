#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_TimeSeenTargetNotLookingWhilstHiding.AC_TimeSeenTargetNotLookingWhilstHiding_C
class UAC_TimeSeenTargetNotLookingWhilstHiding_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_TimeSeenTargetNotLookingWhilstHiding_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsTakingCoverAtLandmark_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


