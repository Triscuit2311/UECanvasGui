#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_StunTime.AC_StunTime_C
class UAC_StunTime_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_StunTime_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetCurrentStunDuration_ReturnValue, float CallFunc_GetCurrentStunTime_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_IsStunned_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


