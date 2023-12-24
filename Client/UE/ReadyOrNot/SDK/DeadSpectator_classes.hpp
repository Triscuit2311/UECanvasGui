#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// BlueprintGeneratedClass DeadSpectator.DeadSpectator_C
class ADeadSpectator_C : public ASpectatePawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADeadSpectator_C* GetDefaultObj();

	void ReceivePossessed(class AController* NewController);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController* OldController);
	void Client_Remove_HUID();
	void CreateHUD();
	void Client_SpecNextPlayer();
	void ExecuteUbergraph_DeadSpectator(int32 EntryPoint, class AController* K2Node_Event_NewController, float K2Node_Event_DeltaSeconds, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, class AController* K2Node_Event_OldController, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_2);
};

}


