#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_ActivityClassIsOnCooldown.AG_ActivityClassIsOnCooldown_C
class UAG_ActivityClassIsOnCooldown_C : public UAIActionGate
{
public:
	class UClass*                                ActivityClass;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_ActivityClassIsOnCooldown_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UActivityManager* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


