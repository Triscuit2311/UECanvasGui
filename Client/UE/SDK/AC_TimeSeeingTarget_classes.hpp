#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TimeSeeingTarget.AC_TimeSeeingTarget_C
class UAC_TimeSeeingTarget_C : public UAIActionConsideration
{
public:
	enum class EAITargetType                     TargetType;                                        // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_TimeSeeingTarget_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
};

}


