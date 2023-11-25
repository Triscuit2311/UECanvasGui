#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * BlueprintGeneratedClass Lobby_V2.Lobby_V2_C
	 * Size -> 0x0088 (FullSize[0x0B80] - InheritedSize[0x0AF8])
	 */
	class ALobby_V2_C : public AReadyOrNotLevelScript
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0AF8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_ShoothouseTimer_C*>                         ShoothouseTimers;                                        // 0x0B00(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_ShoothouseTarget_C*>                        ShoothouseTargets;                                       // 0x0B10(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ADoor*>                                         ShoothouseDoors;                                         // 0x0B20(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                        ShoothouseClearTime;                                     // 0x0B30(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bEnteredShoothouse;                                      // 0x0B34(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0B35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCharacter*                                      ShoothouseTriggeredBy;                                   // 0x0B38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                    sm_helmet_pumpkin7_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B40(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ShoothouseTimerTrigger_C*                          BP_ShoothouseTimerTrigger_End_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B48(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ShoothouseTimerTrigger_C*                          BP_ShoothouseTimerTrigger_Start_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ShoothouseTimerToggle_C*                           BP_ShoothouseTimerToggle_3_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B58(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFMODAmbientSound*                                     Buzzer_Start_ExecuteUbergraph_Lobby_V2_RefProperty;      // 0x0B60(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFMODAmbientSound*                                     Buzzer_End_ExecuteUbergraph_Lobby_V2_RefProperty;        // 0x0B68(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                    sm_helmet_pumpkin_7_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B70(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                    sm_helmet_pumpkin2_9_ExecuteUbergraph_Lobby_V2_RefProperty; // 0x0B78(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateShoothouseTimers(float Seconds);
		void ResetShoothouseTargets();
		void ResetShoothouseDoors();
		void AllTargetsDamaged(bool* ReturnValue);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void CustomEvent_3(class APlayerCharacter* TriggeredBy);
		void CustomEvent_4(class APlayerCharacter* TriggeredBy);
		void ShoothouseTrialFail();
		void ExecuteUbergraph_Lobby_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
