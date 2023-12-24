#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xDC - 0xD8)
// BlueprintGeneratedClass AC_RecentlyDamaged.AC_RecentlyDamaged_C
class UAC_RecentlyDamaged_C : public UAIActionConsideration
{
public:
	float                                        Tolerance;                                         // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_RecentlyDamaged_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasRecentlyTakenDamage_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue);
};

}


