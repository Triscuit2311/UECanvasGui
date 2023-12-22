#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_RecentlySeenTarget.AG_RecentlySeenTarget_C
class UAG_RecentlySeenTarget_C : public UAIActionGate
{
public:
	enum class EAITargetType                     TargetType;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4280[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SinceSeconds;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentlySeenTarget_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, float Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


