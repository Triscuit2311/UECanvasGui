#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_TimeElapsedPerformingCombatMove.AG_TimeElapsedPerformingCombatMove_C
class UAG_TimeElapsedPerformingCombatMove_C : public UAIActionGate
{
public:
	float                                        Seconds;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_TimeElapsedPerformingCombatMove_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


