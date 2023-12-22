#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// BlueprintGeneratedClass AG_ExposedToAggressiveNoise.AG_ExposedToAggressiveNoise_C
class UAG_ExposedToAggressiveNoise_C : public UAIActionGate
{
public:
	TArray<class FName>                          ExcludedTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	float                                        Since_Seconds;                                     // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Max_Distance;                                      // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TargetType;                                        // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bExclusive;                                        // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3F56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_ExposedToAggressiveNoise_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


