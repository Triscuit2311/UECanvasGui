#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F6 (0xC36 - 0x340)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet.W_PreMission_Tablet_C
class UW_PreMission_Tablet_C : public UTabletWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimWake;                                          // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOpenMessenger;                                 // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         AudioPlayer;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_C*          Brief;                                             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          btn_Brief;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          btn_Camera;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          btn_Map;                                           // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          btn_Roster;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DpadDown;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DpadUp;                                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_131;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Messenger_C*      MessengerChat;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*           PlanningMAp;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tablet_Roster_C*                    Roster;                                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Content;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_NoMission;                                     // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Nav;                                            // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_C*                      W_AudioPlayer;                                     // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bOnPlanningMap;                                    // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentPopout;                                     // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          CurrentActiveButton;                               // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Radial_MapMarking_C*                Radial;                                            // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RadialCoords;                                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRecreateRadial;                                   // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LastNormalizedLocation;                            // 0x414(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitialized;                                      // 0x41C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentMissionURL;                                 // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CurrentMissionData;                                // 0x430(0x788)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class UWidget*>          NavigationMap;                                     // 0xBB8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PreMission_Tablet_Roster_MP_C*      RosterListPopout;                                  // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRosterOpen;                                       // 0xC10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ActiveScreen;                                      // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentButtonIndex;                                // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PremissionTablet_Button_C*          CurrentButton;                                     // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonNavigationDpadDirection;                     // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTabletAwake;                                      // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMissionChanged;                                   // 0xC35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetRosterEnabled(bool* RosterEnabled, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void InitNavigation(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable_3, bool CallFunc_IsInLobby_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetRosterEnabled_RosterEnabled);
	void SetActiveScreen(class UWidget* NewActiveScreen, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetActiveNavButton(class UW_PremissionTablet_Button_C* NewActiveButton, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Update_Dpad_Navigation(int32 NewLocalVar_1, class UNiagaraDataInterfaceArrayBool* NewLocalVar_0, const TArray<bool>& buttonVisibilities, const TArray<class UNiagaraDataInterfaceArrayBool*>& AvailableButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveButton_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UW_PremissionTablet_Button_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_PremissionTablet_Button_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OpenRoster(class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void LoadScreen(bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRosterEnabled_RosterEnabled, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess);
	void DisplayNoDataScreen(bool NoData, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void RadialCollapsed();
	void CloseRadial();
	void RadialMarkerSelected(class FName CategoryName, class FName MarkerName, const struct FPlanningMarker& K2Node_MakeStruct_PlanningMarker);
	void OpenRadial(const struct FVector2D& Coordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchorData& K2Node_MakeStruct_AnchorData, class UW_Radial_MapMarking_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void UpdateNavigation(class UW_PremissionTablet_Button_C* NewActiveButton, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_PreMission_Tablet_Floors_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput);
	void BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_1_OnMessengerClose__DelegateSignature();
	void BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_0_OnMessengerOpen__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Chat();
	void Wake();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	void Sleep();
	void BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature(const class FString& MissionURL, const struct FLevelFloor& FloorData);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void OnMissionChanged(const class FString& URL, struct FLevelDataLookupTable& LevelData);
	void SetVisualTheme(bool UseDarkTheme);
	void MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData);
	void BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void OnInputChange(enum class ECommonInputType bNewInputType);
	void SetTabletState(bool IsAwake);
	void OnInitialized();
	void ExecuteUbergraph_W_PreMission_Tablet(int32 EntryPoint, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_3, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_2, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_MissionURL, const struct FLevelFloor& K2Node_ComponentBoundEvent_FloorData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UW_PreMission_Tablet_Floors_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, const class FString& K2Node_Event_URL, const struct FLevelDataLookupTable& K2Node_Event_LevelData_1, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_MissionPlanning_C> K2Node_DynamicCast_AsBPI_Mission_Planning, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_UseDarkTheme, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, int32 Temp_int_Array_Index_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_IsAwake, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class ITabletUI_C> K2Node_DynamicCast_AsTablet_UI, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_IsSinglePlayer_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsMultiplayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


