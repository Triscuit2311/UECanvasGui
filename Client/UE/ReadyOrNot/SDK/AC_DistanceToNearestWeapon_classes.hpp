#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xDC - 0xD8)
// BlueprintGeneratedClass AC_DistanceToNearestWeapon.AC_DistanceToNearestWeapon_C
class UAC_DistanceToNearestWeapon_C : public UAIActionConsideration
{
public:
	float                                        SearchRange;                                       // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DistanceToNearestWeapon_C* GetDefaultObj();

	void FindWeaponsInRange(class ACyberneticCharacter* Start, TArray<class ABaseMagazineWeapon*>* Return_Value, const TArray<class ABaseMagazineWeapon*>& WeaponsNearby, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasAnyAmmo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	float CalculateCurve(float X, float CallFunc_Divide_FloatFloat_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float Distance, float Closest_Distance, class ABaseMagazineWeapon* Target_Weapon, class AReadyOrNotCharacter* Target, int32 Temp_int_Array_Index_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, TArray<class ABaseMagazineWeapon*>& CallFunc_FindWeaponsInRange_Return_Value, int32 Temp_int_Loop_Counter_Variable, class ABaseMagazineWeapon* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


