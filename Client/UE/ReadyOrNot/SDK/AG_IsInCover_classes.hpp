#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_IsInCover.AG_IsInCover_C
class UAG_IsInCover_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_IsInCover_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsTakingCover_ReturnValue);
};

}


