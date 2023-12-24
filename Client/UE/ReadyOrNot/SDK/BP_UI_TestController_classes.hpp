#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0xAC9 - 0xA48)
// BlueprintGeneratedClass BP_UI_TestController.BP_UI_TestController_C
class ABP_UI_TestController_C : public AReadyOrNotPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_PauseMenu_C*                        EscapeMenuRef;                                     // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EscapeMenuOpen;                                    // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFreeDrawColor                    CurrentFreeDrawColor;                              // 0xA59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseButtonDown;                                   // 0xA5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slomo;                                             // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 LastPawn;                                          // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFreeCamera;                                       // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReplaySystemWidget;                                // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PawnBeforePremissionPlanning;                      // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_COOPScorePopUp_C*                   PopMinusUpWidget;                                  // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_VotePopUp_C*                        VoteWidget;                                        // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           TabWidget;                                         // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          LoadoutUI;                                         // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_C*                       PreMission;                                        // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Credits_C*                          Credits;                                           // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionPlanning;                                   // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               PlanningMAp;                                       // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                PreMissionTablet;                                  // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PremissionOpen;                                    // 0xAC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_UI_TestController_C* GetDefaultObj();

	void GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput);
	void HideEscapeMenu();
	void InpActEvt_Equals_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Slash_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_VoteYes_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_VoteNo_K2Node_InputActionEvent_3(const struct FKey& Key);
	void OnFailure_396BB7CB46A59B1613A2548E31963ABF();
	void OnSuccess_396BB7CB46A59B1613A2548E31963ABF();
	void InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ViewScoreboard_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_End_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ServerPossesPawn(class APawn* Pawn);
	void CloseDeployMenu();
	void Server_FreeCamera();
	void SpawnEscapeMenu();
	void ShowCoopScoreChangeWidget(float ScoreChangeValue);
	void RequestVoteInput(const struct FVoteData& CurrentVoteData);
	void SetUpVoteWidget(class UW_VotePopUp_C* Widget);
	void StopVoteInput();
	void ShowLoadoutUI();
	void BP_ClientWasKicked(class FText& KickReason);
	void CloseLoadoutUI();
	void ToggleCredits();
	void TogglePreMissionTablet();
	void ExecuteUbergraph_BP_UI_TestController(int32 EntryPoint, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetAllActorsOfClass_OutActors, class UW_PreMission_Tablet_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key, class APawn* K2Node_CustomEvent_Pawn, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_ReplayControls_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsValid_ReturnValue, class UW_ReplayControls_C* CallFunc_Array_Get_Item, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_Credits_C* CallFunc_Create_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_Create_ReturnValue_2, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_2, class UW_COOPScorePopUp_C* CallFunc_Create_ReturnValue_3, class UW_PauseMenu_C* K2Node_DynamicCast_AsW_Pause_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue, float K2Node_Event_ScoreChangeValue, const struct FVoteData& K2Node_Event_CurrentVoteData, const struct FKey& K2Node_InputActionEvent_Key_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UW_VotePopUp_C* K2Node_CustomEvent_Widget, bool CallFunc_IsValid_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UW_TabScreen_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText K2Node_Event_KickReason, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_4, class UW_ReplayBrowser_C* CallFunc_Create_ReturnValue_5, const struct FKey& K2Node_InputKeyEvent_Key_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key, TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item_3, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item_4, class UW_ReplayControls_C* CallFunc_Create_ReturnValue_6);
};

}


