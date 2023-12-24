#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_CoopGameModes.AG_CoopGameModes_C
class UAG_CoopGameModes_C : public UAIActionGate
{
public:
	TArray<enum class ECOOPMode>                 GameMode;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAG_CoopGameModes_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, enum class ECOOPMode CallFunc_GetCOOPMode_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


