#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_TimeSincePerformingCombatMove.AG_TimeSincePerformingCombatMove_C
class UAG_TimeSincePerformingCombatMove_C : public UAIActionGate
{
public:
	float                                        Seconds;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_TimeSincePerformingCombatMove_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


