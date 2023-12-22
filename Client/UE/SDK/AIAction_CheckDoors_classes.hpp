#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x8A - 0x58)
// BlueprintGeneratedClass AIAction_CheckDoors.AIAction_CheckDoors_C
class UAIAction_CheckDoors_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ADoor*>                         CheckedDoors;                                      // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UAnimMontage*                          CheckDoorAnimMontage;                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADoor*                                 DoorToCheck;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AThreatAwarenessActor*                 NearestThreat;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bArrivedAtDoor;                                    // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStartedMove;                                      // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAIAction_CheckDoors_C* GetDefaultObj();

	void ResetData();
	void CanCheckDoor(class ADoor* Door, bool* Return_Value, bool CallFunc_IsOpen_ReturnValue, class ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void EndAction_Blueprint();
	void Event_RemoveLastCheckedDoor();
	void Tick_Blueprint(float DeltaTime);
	void OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID);
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void BeginAction_Blueprint();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void ExecuteUbergraph_AIAction_CheckDoors(int32 EntryPoint, class UThreatAwarenessSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanCheckDoor_Return_Value, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* K2Node_Event_Controller_2, int32 K2Node_Event_RequestID, class ACyberneticController* K2Node_Event_Controller_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsOpen_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AThreatAwarenessActor*>& CallFunc_GetThreatsForLocation_OutThreats, class AThreatAwarenessActor* CallFunc_GetNearestHighestThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ADoor* CallFunc_GetAttachedDoor_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, bool CallFunc_IsOpen_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimMontage* CallFunc_GetMontageFromTable_ReturnValue, class ACyberneticController* K2Node_Event_Controller, bool CallFunc_IsValid_ReturnValue_5);
};

}


