#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB58 - 0xB20)
// BlueprintGeneratedClass BP_ReplayController.BP_ReplayController_C
class ABP_ReplayController_C : public AReplayController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bRemoveReplayControls;                             // 0xB28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSetInitialPosition;                               // 0xB29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSprintHeld;                                       // 0xB2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCrouchHeld;                                       // 0xB2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFollowLocalPlayer;                                // 0xB2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  LocalPlayer;                                       // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABaseItem*>                     IgnoredActors;                                     // 0xB40(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         MouseRightPressed;                                 // 0xB50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HUDState;                                          // 0xB54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ReplayController_C* GetDefaultObj();

	void InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ToggleReplayHUD();
	void OnPauseMenuClosed();
	void ExecuteUbergraph_BP_ReplayController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, const struct FKey& K2Node_InputActionEvent_Key_3, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_2, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_1, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_2, bool K2Node_DynamicCast_bSuccess_4, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_3, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2);
};

}


