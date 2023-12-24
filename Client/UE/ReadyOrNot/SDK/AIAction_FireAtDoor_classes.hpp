#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass AIAction_FireAtDoor.AIAction_FireAtDoor_C
class UAIAction_FireAtDoor_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_FireAtDoor_C* GetDefaultObj();

	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_FireAtDoor(int32 EntryPoint, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetDoorMidLocation_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsActorInFrontOfDoorway_ReturnValue, const struct FVector2D& CallFunc_GetVector2D_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_HasLineOfSightTo_ReturnValue);
};

}


