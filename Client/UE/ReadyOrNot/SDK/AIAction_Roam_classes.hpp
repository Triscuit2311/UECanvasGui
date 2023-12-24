#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x88 - 0x58)
// BlueprintGeneratedClass AIAction_Roam.AIAction_Roam_C
class UAIAction_Roam_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bFinishedRoaming;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMoveFinished;                                     // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPathGoesThroughClosedDoor;                        // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMoving;                                           // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        FocusTime;                                         // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FocusTimeRemaining;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Angle;                                             // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FocusLocation;                                     // 0x70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4054[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AThreatAwarenessActor*                 ChosenThreatFocus;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_Roam_C* GetDefaultObj();

	void ResetData();
	bool ShouldPerformAction(bool CallFunc_Not_PreBool_ReturnValue);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID);
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void EndAction_Blueprint();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void ExecuteUbergraph_AIAction_Roam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class UThreatAwarenessSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class ACyberneticController* K2Node_Event_Controller_1, float CallFunc_RandomFloatInRange_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class AAIController* K2Node_Event_Controller, int32 K2Node_Event_RequestID, float CallFunc_RandomFloatInRange_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const class FString& Temp_string_Variable_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AThreatAwarenessActor*>& CallFunc_GetThreatsForLocation_OutThreats, class AThreatAwarenessActor* CallFunc_GetFurthestHighestThreat_ReturnValue);
};

}


