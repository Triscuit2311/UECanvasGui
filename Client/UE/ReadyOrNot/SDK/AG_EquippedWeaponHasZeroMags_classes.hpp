#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_EquippedWeaponHasZeroMags.AG_EquippedWeaponHasZeroMags_C
class UAG_EquippedWeaponHasZeroMags_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_EquippedWeaponHasZeroMags_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ABaseMagazineWeapon* CallFunc_GetEquippedWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


