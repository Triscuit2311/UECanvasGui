#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_HasItemClassEquipped.AG_HasItemClassEquipped_C
class UAG_HasItemClassEquipped_C : public UAIActionGate
{
public:
	TArray<enum class EItemClass>                ItemClasses;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAG_HasItemClassEquipped_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


