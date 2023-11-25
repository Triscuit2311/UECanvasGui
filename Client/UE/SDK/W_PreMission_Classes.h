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
	 * WidgetBlueprintGeneratedClass W_PreMission.W_PreMission_C
	 * Size -> 0x0350 (FullSize[0x0BC8] - InheritedSize[0x0878])
	 */
	class UW_PreMission_C : public UPreMissionPlanning
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0878(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_OnReady_NoSwapTeams;                                // 0x0880(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_OnReady;                                            // 0x0888(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeOut;                                            // 0x0890(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_EnterQuartermasterMenu;                             // 0x0898(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_SwapTeams_ButtonPressed;                            // 0x08A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_ReadyUp_ButtonPressed;                              // 0x08A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeIn;                                             // 0x08B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                          BriefingCanvas;                                          // 0x08B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   BriefingGameButton;                                      // 0x08C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Briefing;                                            // 0x08C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Loadout;                                             // 0x08D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Map;                                                 // 0x08D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          CanvasPanel_Main;                                        // 0x08E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       Controls_WidgetSwitcher;                                 // 0x08E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            CountdownTextWidget_PVP;                                 // 0x08F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          CountdownTimer_Container;                                // 0x08F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       CountdownTimerText_Switcher;                             // 0x0900(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_LoadoutCategory;                               // 0x0908(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_LoadoutClass;                                  // 0x0910(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_LoadoutMenu;                                   // 0x0918(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_LoadoutPresets;                                // 0x0920(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_QuartermasterMenu;                             // 0x0928(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfo_RootMenu;                                      // 0x0930(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       DebugInfo_Switcher;                                      // 0x0938(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            GameStartTimeCount_2;                                    // 0x0940(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PageHeader_C*                                       Header;                                                  // 0x0948(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_BackButton;                             // 0x0950(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_HideUIButton;                           // 0x0958(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_NextButton;                             // 0x0960(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_PreviousButton;                         // 0x0968(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_RenamePresetButton;                     // 0x0970(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        KeyboardControls_SelectButton;                           // 0x0978(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Countdown_COOP;                                      // 0x0980(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutCustomizationMenu_C*                         LoadoutCustomizationMenu;                                // 0x0988(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   LoadoutGameBtn;                                          // 0x0990(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          LoadoutMenu_Canvas;                                      // 0x0998(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       LoadoutMenu_Switcher;                                    // 0x09A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            MapName_Text;                                            // 0x09A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        MetaGameInfo_Container;                                  // 0x09B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              MLO_ReadyCount_Container;                                // 0x09B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            ModeName_Text;                                           // 0x09C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        MouseControls_BackButton;                                // 0x09C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        MouseControls_HideUIButton;                              // 0x09D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        MouseControls_RenamePresetButton;                        // 0x09D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        NavigationKeyboardControls_Container;                    // 0x09E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        NavigationMouseControls_Container;                       // 0x09E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        NoSelectionControls_Container;                           // 0x09F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        PlanningMapControls;                                     // 0x09F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_QuartermasterMenu_C*                                QuartermasterMenu;                                       // 0x0A00(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyCount_Container;                                    // 0x0A08(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            ReadyCountBlue_2;                                        // 0x0A10(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            ReadyCountRed_2;                                         // 0x0A18(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUp_KeyboardControls_SelectButton;                   // 0x0A20(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUp_KeyboardControls_SelectButton_2;                 // 0x0A28(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUp_MouseControls_SelectButton;                      // 0x0A30(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUp_MouseControls_SelectButton_2;                    // 0x0A38(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUpControls_BackButton;                              // 0x0A40(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ReadyUpControls_Container;                               // 0x0A48(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       ReadyUpControls_SelectButton_Switcher;                   // 0x0A50(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       ReadyUpControls_SelectButton_Switcher_2;                 // 0x0A58(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   ReadyUpResumeGameButton;                                 // 0x0A60(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          RootCanvas;                                              // 0x0A68(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            ServerName_Text;                                         // 0x0A70(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SwapTeams_Box;                                           // 0x0A78(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   SwapTeams_Button;                                        // 0x0A80(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              SWAT_ReadyCount_Container;                               // 0x0A88(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            Tooltip_Text;                                            // 0x0A90(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_NightOp;                                             // 0x0A98(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TeamMLO;                                             // 0x0AA0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TeamSwat;                                            // 0x0AA8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_WorldGen;                                            // 0x0AB0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_C*                                         W_Briefing;                                              // 0x0AB8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_HotkeyBar_C*                                        W_HotkeyBar;                                             // 0x0AC0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PlanningMap_C*                                      W_PlanningMap;                                           // 0x0AC8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                               WidgetFocusButton;                                       // 0x0AD0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                      SelectedRow;                                             // 0x0AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SelectedColumn;                                          // 0x0ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SelectionDepth;                                          // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        PlanningTimeRemaining;                                   // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        GameStartTimeRemaining;                                  // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bInQuartermasterMenu;                                    // 0x0AEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bReady;                                                  // 0x0AED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInMenuBounds;                                           // 0x0AEE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bNavigateWithMouse;                                      // 0x0AEF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bNavigateWithKeyboard;                                   // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHideDebugInfo;                                          // 0x0AF1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         bInGame;                                                 // 0x0AF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bShowTooltip;                                            // 0x0AF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bShowMetaGameInfo;                                       // 0x0AF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x0AF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAltKeyDown;                                             // 0x0AF6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bGameCountdownStarted;                                   // 0x0AF7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInitialized;                                            // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bPresetsLoaded;                                          // 0x0AF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0AFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  LastCameraTag;                                           // 0x0AFC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                               CurrentlyFocusedWidget;                                  // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                          TH_FadeInToQuartermasterFinished;                        // 0x0B10(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                          TH_FadeOutToQuartermasterFinished;                       // 0x0B18(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                          TH_StartFadeToQuartermaster;                             // 0x0B20(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                         isBriefingFirstLoad;                                     // 0x0B28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bBriefingOpen;                                           // 0x0B29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bPlanningMapOpen;                                        // 0x0B2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x5];                                   // 0x0B2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_UI_PlanningMap_C*                                  PlanningMAp;                                             // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           CurrentActiveNav;                                        // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bLoadoutOpen;                                            // 0x0B40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPreMissionHotkeyGroups                                      CurrentHotkeyScreen;                                     // 0x0B41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0003[0x6];                                   // 0x0B42(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReadyOrNotGameState*                                  RONGameState;                                            // 0x0B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         TriggeredReadyState;                                     // 0x0B50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct Fst_HotkeySettings>                            hotkeysGlobal;                                           // 0x0B58(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysBriefing;                                         // 0x0B68(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysPlanningMap;                                      // 0x0B78(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysReadyUpMouse;                                     // 0x0B88(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysReadyUpKeyboard;                                  // 0x0B98(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysNavigationMouse;                                  // 0x0BA8(0x0010) Edit, BlueprintVisible
		TArray<struct Fst_HotkeySettings>                            hotkeysNavigationKeyboard;                               // 0x0BB8(0x0010) Edit, BlueprintVisible

	public:
		void UpdateHeader(const class FText& HeaderText, const class FText& PageName);
		ESlateVisibility Get_ReadyCount_Container_Visibility_1();
		ESlateVisibility Get_ReadyUpResumeGameButton_Visibility_1();
		void AllPlayersReady(bool* ReturnValue);
		void GetNumPlayers(int32_t* ReturnValue);
		void Get_WidgetFocusButton_Visibility_1();
		void SetHotkeys(EPreMissionHotkeyGroups HotkeyGroup);
		void UpdateHotkeyEntries(TArray<struct Fst_HotkeySettings> Hotkeys);
		void ExitPlanningMap();
		void SetActiveNav(class UW_Button_C* Button);
		void OnStartFadeToPlanningMap();
		void OnStartFadeToLoadout();
		void OnStartFadeToBriefing();
		void HandleMenuWideMultiInputUp(const struct FKeyEvent& Input, bool* ReturnValue);
		void HandleMenuWideMultiInputDown(const struct FKeyEvent& Input, bool* ReturnValue);
		void OnTransitionToQuartermasterFinished();
		void HideHUD();
		void ShowHUD();
		void ReflectHUDSettings();
		void SmoothCountdown(float DeltaTime);
		void AllowTeamSwapping(bool* ReturnValue);
		ESlateVisibility Get_LoadoutMenu_Switcher_Visibility();
		void HandleMenuWideInput(const struct FKeyEvent& Input, bool* ReturnValue);
		ESlateVisibility Get_HideUIButton_Visibility();
		ESlateVisibility Get_RenamePresetButton_Visibility();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void IsUIHidden(bool* ReturnValue);
		bool EnteringQuartermasterMenu();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility Get_MetaGameInfo_Container_Visibility();
		ESlateVisibility Get_SwapTeams_Box_Visibility();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void IsValidSelectionIndex(bool* ReturnValue);
		bool CanUnselect();
		bool CanExit();
		void ToggleUIVisibility();
		void UpdateCountdownDescriptionText();
		void ToggleMetaGameInfo();
		void UnselectSwapTeams();
		void SelectSwapTeams();
		void HoverSwapTeams();
		void UnhoverSwapTeams();
		void SwapTeams();
		void UpdateTootipText(const class FText& NewTooltipText);
		ESlateVisibility Get_Tooltip_Text_Visibility();
		void OnStartFadeToQuartermaster();
		void OnFadeToQuartermasterFinished();
		void ExitQuartermasterMenu();
		void EnterQuartermasterMenu();
		void HideItemSelectionUI();
		void ShowItemSelectionUI();
		ESlateVisibility Get_CountdownTimer_Container_Visibility();
		void UpdateWidgetStates();
		ESlateVisibility Get_NightOperation_Text_Visibility();
		ESlateVisibility Get_InGame_Container_Visibility();
		bool UpdateDebugInfo();
		void SetNavigationModeMouse();
		void SetNavigationModeKeyboard();
		void Escape();
		void ResumeGame();
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void HoverReadyUp();
		void UnhoverReadyUp();
		void UnselectReadyUp();
		void SelectReadyUp();
		void UnselectLoadoutCategory();
		void SelectLoadoutCategory();
		void UnhoverLoadoutCategory();
		void HoverLoadoutCategory();
		void UnselectUIElement();
		void SelectUIElement();
		void UnhoverUIElement();
		void HoverUIElement();
		void PreviousColumn();
		void PreviousRow();
		void NextColumn();
		void NextRow();
		ESlateVisibility Get_ReadyUpControls_BackButton_Visibility();
		ESlateVisibility Get_ReadyUp_Controls_Container_Visibility();
		ESlateVisibility Get_NavigationMouseControls_Container_Visibility();
		ESlateVisibility Get_NavigationKeyboardControls_Container_Visibility();
		ESlateVisibility Get_KeyboardControls_Button_Visibility();
		ESlateVisibility Get_BackButton_Container_Visibility();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class FText Get_GameStartTimeRemaining_Text();
		ESlateVisibility Get_MetaGame_Spacer_1_Visibility();
		ESlateVisibility Get_ReadyCount_Container_Visibility();
		void IsAnyoneOnMLOTeam(bool* ReturnValue);
		void IsAnyoneOnSWATTeam(bool* ReturnValue);
		class FText Get_SWATReadyCount_Text();
		ESlateVisibility Get_SWAT_ReadyCount_Container_Visibility();
		ESlateVisibility Get_MLO_ReadyCount_Container_Visibility();
		class FText Get_MLOReadyCountText();
		ESlateVisibility Get_ServerName_Text_Visibility();
		class FText Get_ServerName_Text();
		class FText Get_MapName_Text();
		class FText Get_ModeName_Text();
		void OnInitialized();
		void BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__MouseCaptureButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__TopMenu_ReadyUpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void FocusOnWidget(class UWidget* WidgetToFocus);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
		void BndEvt__ReadyUpButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature();
		void BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature();
		void BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature();
		void BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature();
		void BndEvt__SwapTeams_Button_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature();
		void OnLoadoutLoaded();
		void AutoDetermineWidgetFocus();
		void CustomEvent_1();
		void OnLoadoutItemPresetsLoaded();
		void OnLoadoutItemPresetsSaved();
		void Construct();
		void OnLoadoutItemAttachmentsSaved();
		void OnWeaponDefaultFireModesLoaded();
		void GoToLoadout();
		void GoToBriefing();
		void GoToLoadoutNoDelay();
		void GoToPlanningMap();
		void BndEvt__btn_Loadout_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Map_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Briefing_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_PlanningMap_K2Node_ComponentBoundEvent_12_PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos);
		void BndEvt__PlanningMap_K2Node_ComponentBoundEvent_17_OnZoomUpdated__DelegateSignature(float ZoomValue);
		void HideBriefing();
		void Destruct();
		void ToggleReady();
		void OnSwatCharacterChanged();
		void ExecuteUbergraph_W_PreMission(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
