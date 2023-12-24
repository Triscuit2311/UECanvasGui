#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_DistanceToSpawn.AC_DistanceToSpawn_C
class UAC_DistanceToSpawn_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_DistanceToSpawn_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


