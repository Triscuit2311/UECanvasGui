#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x100 - 0xD8)
// BlueprintGeneratedClass AC_ExposedToAggressiveNoise.AC_ExposedToAggressiveNoise_C
class UAC_ExposedToAggressiveNoise_C : public UAIActionConsideration
{
public:
	TArray<class FName>                          ExcludedTags;                                      // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	float                                        Max_Distance;                                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExclusiveTags;                                     // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAC_ExposedToAggressiveNoise_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue, class FName CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


