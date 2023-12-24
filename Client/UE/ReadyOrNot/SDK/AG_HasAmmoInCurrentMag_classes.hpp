#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_HasAmmoInCurrentMag.AG_HasAmmoInCurrentMag_C
class UAG_HasAmmoInCurrentMag_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_HasAmmoInCurrentMag_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ABaseMagazineWeapon* CallFunc_GetEquippedWeapon_ReturnValue, bool CallFunc_HasAmmo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


