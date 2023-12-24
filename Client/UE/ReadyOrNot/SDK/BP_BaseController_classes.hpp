#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xA98 - 0xA48)
// BlueprintGeneratedClass BP_BaseController.BP_BaseController_C
class ABP_BaseController_C : public AReadyOrNotPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_PauseMenu_C*                        EscapeMenuRef;                                     // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EscapeMenuOpen;                                    // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFreeDrawColor                    CurrentFreeDrawColor;                              // 0xA59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseButtonDown;                                   // 0xA5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slomo;                                             // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 LastPawn;                                          // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFreeCamera;                                       // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReplaySystemWidget;                                // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PawnBeforePremissionPlanning;                      // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_COOPScorePopUp_C*                   PopMinusUpWidget;                                  // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_VotePopUp_C*                        VoteWidget;                                        // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_VotePopUp_gamepad_C*                VoteWidget_Gamepad;                                // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BaseController_C* GetDefaultObj();

	void GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput);
	void HideEscapeMenu();
	void InpActEvt_Slash_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Equals_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnFailure_E5236F624136A216FC80949690426E05();
	void OnSuccess_E5236F624136A216FC80949690426E05();
	void InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_ReadyUp_K2Node_InputActionEvent_0(const struct FKey& Key);
	void Server_FreeCamera();
	void SpawnEscapeMenu();
	void BP_ClientWasKicked(class FText& KickReason);
	void ServerPossesPawn(class APawn* Pawn);
	void CloseDeployMenu();
	void ShowCoopScoreChangeWidget(float ScoreChangeValue);
	void RequestVoteInput(const struct FVoteData& CurrentVoteData);
	void SetUpVoteWidget(class UW_VotePopUp_C* Widget);
	void StopVoteInput();
	void SetUpVoteWidget_Gamepad(class UW_VotePopUp_gamepad_C* Widget);
	void ExecuteUbergraph_BP_BaseController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, TArray<class UW_ReplayControls_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const struct FKey& K2Node_InputActionEvent_Key_2, class UW_ReplayControls_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText K2Node_Event_KickReason, class APawn* K2Node_CustomEvent_Pawn, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1, class UW_PauseMenu_C* K2Node_DynamicCast_AsW_Pause_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key, class UW_COOPScorePopUp_C* CallFunc_Create_ReturnValue_1, float K2Node_Event_ScoreChangeValue, const struct FVoteData& K2Node_Event_CurrentVoteData, int32 Temp_int_Array_Index_Variable_1, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UW_VotePopUp_C* K2Node_CustomEvent_Widget_1, bool CallFunc_IsValid_ReturnValue_4, class UW_ReplayControls_C* CallFunc_Create_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsValid_ReturnValue_5, class UW_VotePopUp_gamepad_C* K2Node_CustomEvent_Widget, class UW_ReplayBrowser_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7);
};

}


