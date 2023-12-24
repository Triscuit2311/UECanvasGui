#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TimeSinceLastSeenTarget.AC_TimeSinceLastSeenTarget_C
class UAC_TimeSinceLastSeenTarget_C : public UAIActionConsideration
{
public:
	enum class EAITargetType                     TargetType;                                        // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_TimeSinceLastSeenTarget_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float Value, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_MapRangeClamped_ReturnValue);
};

}


