#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_FacingTarget.AC_FacingTarget_C
class UAC_FacingTarget_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_FacingTarget_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
};

}


