#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_RecentFriendlyStun.AC_RecentFriendlyStun_C
class UAC_RecentFriendlyStun_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_RecentFriendlyStun_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float CallFunc_MapRangeClamped_ReturnValue);
};

}


