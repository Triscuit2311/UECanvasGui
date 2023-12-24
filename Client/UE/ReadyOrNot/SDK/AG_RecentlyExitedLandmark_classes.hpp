#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_RecentlyExitedLandmark.AG_RecentlyExitedLandmark_C
class UAG_RecentlyExitedLandmark_C : public UAIActionGate
{
public:
	float                                        SinceSeconds;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentlyExitedLandmark_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


