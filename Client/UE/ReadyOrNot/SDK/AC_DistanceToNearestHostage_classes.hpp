#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xDC - 0xD8)
// BlueprintGeneratedClass AC_DistanceToNearestHostage.AC_DistanceToNearestHostage_C
class UAC_DistanceToNearestHostage_C : public UAIActionConsideration
{
public:
	float                                        SearchRange;                                       // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DistanceToNearestHostage_C* GetDefaultObj();

	void FindCiviliansInRange(class ACyberneticCharacter* Start, TArray<class ACivilianCharacter*>* Return_Value, const TArray<class ACivilianCharacter*>& CiviliansNearby, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ACivilianCharacter* K2Node_DynamicCast_AsCivilian_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	float CalculateCurve(float X, float CallFunc_Divide_FloatFloat_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float Distance, float Closest_Distance, class ACivilianCharacter* Target_Civ, class AReadyOrNotCharacter* Target, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class ACivilianCharacter*>& CallFunc_FindCiviliansInRange_Return_Value, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACivilianCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


