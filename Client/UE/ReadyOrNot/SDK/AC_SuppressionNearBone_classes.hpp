#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xEC - 0xD8)
// BlueprintGeneratedClass AC_SuppressionNearBone.AC_SuppressionNearBone_C
class UAC_SuppressionNearBone_C : public UAIActionConsideration
{
public:
	TArray<class FName>                          BoneNames;                                         // 0xD8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        SuppressionDistanceThreshold;                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_SuppressionNearBone_C* GetDefaultObj();

	void IsBoneSuppressed(class AReadyOrNotCharacter* Character, bool* Return_Value, float* Suppression_Amount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSuppressionData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsBoneSuppressed_Return_Value, float CallFunc_IsBoneSuppressed_Suppression_Amount, bool CallFunc_IsValid_ReturnValue);
};

}


