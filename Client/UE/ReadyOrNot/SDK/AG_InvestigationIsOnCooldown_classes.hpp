#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_InvestigationIsOnCooldown.AG_InvestigationIsOnCooldown_C
class UAG_InvestigationIsOnCooldown_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_InvestigationIsOnCooldown_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, TSubclassOf<class UBaseActivity> Temp_class_Variable, class UActivityManager* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


