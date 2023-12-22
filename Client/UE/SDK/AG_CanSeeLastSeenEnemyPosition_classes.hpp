#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_CanSeeLastSeenEnemyPosition.AG_CanSeeLastSeenEnemyPosition_C
class UAG_CanSeeLastSeenEnemyPosition_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_CanSeeLastSeenEnemyPosition_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasLineOfSightTo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


