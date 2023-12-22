#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xDC - 0xD8)
// BlueprintGeneratedClass AC_DistanceToTarget.AC_DistanceToTarget_C
class UAC_DistanceToTarget_C : public UAIActionConsideration
{
public:
	bool                                         Allow_Last_Tracked_Target;                         // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowEnemy;                                       // 0xD9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowFriendly;                                    // 0xDA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAllowNeutral;                                     // 0xDB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAC_DistanceToTarget_C* GetDefaultObj();

	float CalculateCurve(float X, float CallFunc_Divide_FloatFloat_ReturnValue);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class AReadyOrNotCharacter* Target, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsTrackedInKnownNeutrals_ReturnValue, bool CallFunc_IsTrackedInKnownFriendlies_ReturnValue, bool CallFunc_IsTrackedInKnownEnemies_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


