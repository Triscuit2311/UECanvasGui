#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_RecentFriendlyDeath.AC_RecentFriendlyDeath_C
class UAC_RecentFriendlyDeath_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_RecentFriendlyDeath_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float CallFunc_MapRangeClamped_ReturnValue);
};

}


