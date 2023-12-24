#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_IsGassed.AG_IsGassed_C
class UAG_IsGassed_C : public UAIActionGate
{
public:
	TArray<enum class EStunType>                 Stun_Type;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAG_IsGassed_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsCurrentlyGassed_ReturnValue);
};

}


