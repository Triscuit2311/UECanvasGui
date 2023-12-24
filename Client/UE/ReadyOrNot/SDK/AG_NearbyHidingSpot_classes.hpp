#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_NearbyHidingSpot.AG_NearbyHidingSpot_C
class UAG_NearbyHidingSpot_C : public UAIActionGate
{
public:
	float                                        Max_Distance;                                      // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_NearbyHidingSpot_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


