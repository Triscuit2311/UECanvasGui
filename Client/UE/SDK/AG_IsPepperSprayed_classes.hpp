#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_IsPepperSprayed.AG_IsPepperSprayed_C
class UAG_IsPepperSprayed_C : public UAIActionGate
{
public:
	TArray<enum class EStunType>                 Stun_Type;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAG_IsPepperSprayed_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsPepperSprayed_ReturnValue);
};

}


