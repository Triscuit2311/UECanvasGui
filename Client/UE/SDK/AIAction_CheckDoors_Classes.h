#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AIAction_CheckDoors.AIAction_CheckDoors_C
	 * Size -> 0x0032 (FullSize[0x007A] - InheritedSize[0x0048])
	 */
	class UAIAction_CheckDoors_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ADoor*>                                         CheckedDoors;                                            // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UAnimMontage*                                          CheckDoorAnimMontage;                                    // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoor*                                                 DoorToCheck;                                             // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AThreatAwarenessActor*                                 NearestThreat;                                           // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bArrivedAtDoor;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bStartedMove;                                            // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetData();
		void CanCheckDoor(class ADoor* Door, bool* ReturnValue);
		void Event_RemoveLastCheckedDoor();
		void OnCreate_Blueprint(class ACyberneticController* Controller);
		void Tick_Blueprint(float DeltaTime);
		void OnMoveComplete_Blueprint(class AAIController* Controller, int32_t RequestID);
		void BeginAction_Blueprint();
		void OnPathFound_Blueprint(int32_t PathId, ERonNavigationQueryResult Result);
		void InitAction_Blueprint(class ACyberneticController* Controller);
		void EndAction_Blueprint();
		void ExecuteUbergraph_AIAction_CheckDoors(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
