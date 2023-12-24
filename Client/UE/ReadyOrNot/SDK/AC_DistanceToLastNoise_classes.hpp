#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xE4 - 0xD8)
// BlueprintGeneratedClass AC_DistanceToLastNoise.AC_DistanceToLastNoise_C
class UAC_DistanceToLastNoise_C : public UAIActionConsideration
{
public:
	bool                                         bAggressiveOnly;                                   // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFriendlyOnly;                                     // 0xD9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3B8E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0xDC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DistanceToLastNoise_C* GetDefaultObj();

	void DetermineNoiseScore(const struct FExposedToNoise& Noise, float* Return_Value, float CallFunc_MapRangeClamped_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value, const struct FExposedToNoise& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value_1);
};

}


