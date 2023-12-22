#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x29 - 0x28)
// BlueprintGeneratedClass AG_CoopGameMode.AG_CoopGameMode_C
class UAG_CoopGameMode_C : public UAIActionGate
{
public:
	enum class ECOOPMode                         GameMode;                                          // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_CoopGameMode_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, enum class ECOOPMode CallFunc_GetCOOPMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


