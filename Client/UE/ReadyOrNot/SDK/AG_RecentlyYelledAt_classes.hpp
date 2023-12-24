#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_RecentlyYelledAt.AG_RecentlyYelledAt_C
class UAG_RecentlyYelledAt_C : public UAIActionGate
{
public:
	float                                        SinceSeconds;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentlyYelledAt_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_WasRecentlyYelledAt_ReturnValue);
};

}


