#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_ReachedStressUntilWeaponRaise.AG_ReachedStressUntilWeaponRaise_C
class UAG_ReachedStressUntilWeaponRaise_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_ReachedStressUntilWeaponRaise_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


