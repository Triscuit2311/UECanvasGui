#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_AllWeaponAmmo.AC_AllWeaponAmmo_C
class UAC_AllWeaponAmmo_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_AllWeaponAmmo_C* GetDefaultObj();

	void GetTotalRemainingAmmoFromAllMags(class ABaseMagazineWeapon* Weapon, float* Return_Value, float TotalRemainingWeaponAmmo, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetAmmoInMagazine_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ABaseMagazineWeapon* EquippedWeapon, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class AMeleeWeapon* K2Node_DynamicCast_AsMelee_Weapon, bool K2Node_DynamicCast_bSuccess, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetTotalRemainingAmmoFromAllMags_Return_Value, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


