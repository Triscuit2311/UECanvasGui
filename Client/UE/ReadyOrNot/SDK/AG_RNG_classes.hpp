#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_RNG.AG_RNG_C
class UAG_RNG_C : public UAIActionGate
{
public:
	float                                        Chance;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RNG_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


