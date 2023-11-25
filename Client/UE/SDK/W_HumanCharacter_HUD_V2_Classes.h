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
	 * WidgetBlueprintGeneratedClass W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C
	 * Size -> 0x0248 (FullSize[0x0560] - InheritedSize[0x0318])
	 */
	class UW_HumanCharacter_HUD_V2_C : public UHumanCharacterHUD_V2
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_ShakeHUD_PlayerHit;                                 // 0x0320(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_ShakeHUD_TeamView;                                  // 0x0328(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_ShakeHUD_FireModes;                                 // 0x0330(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeInHUD;                                          // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetSwitcher*                                       BottomLeftUI_StyleSwitcher;                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_RichChatBox_C*                                      Chat;                                                    // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          CommandContext_Container;                                // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                CommandContextDoor_Image;                                // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                CommandContextHuman_Image;                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       CommandContextIcon_Switcher;                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                CommandReticle_Image;                                    // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            CommandTriggerKey_Text;                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_FireModes_C*                                        FireModes;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Hotkeys_C*                                          Hotkeys;                                                 // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Hotkeys_C*                                          Hotkeys_2;                                               // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PVP_Extraction_HUD_C*                               Incrimination_Extraction_HUD;                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelectionMenu_V2_C*                             ItemSelectionMenu;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_MagCheckOverview_C*                                 MagCheckOverview;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMatchStartInformationWidget_C*                        MatchStartInformationWidget;                             // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_MatchStatusCard_V2_C*                               MatchStatusCard_V2;                                      // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DamagePaperdoll_C*                                  Paperdoll;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              Paperdoll_Box;                                           // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          PlayerActions_Box;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       PlayerContext_Switcher;                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PlayerHealthStatus_C*                               PlayerHealthStatus;                                      // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       PVP_HUD_Switcher;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ReadyRoomWidget_C*                                  ReadyRoomWidget;                                         // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_COOPScorePopUp_C*                                   ScorePopUp;                                              // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SWATTeamStatus_C*                                   SWATTeamStatus;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          TopSideUI_Container;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_TutorialMessagePopup_C*                             TutorialMessagePopup;                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_VotePopUp_C*                                        VotePopUp;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Compass_V3_C*                                       W_Compass_V3;                                            // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Compass_V3_C*                                       W_Compass_V3_2;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoudnessMeter_C*                                    W_LoudnessMeter_2;                                       // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                           DoorCommandBrush;                                        // 0x0438(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                           HumanCommandBrush;                                       // 0x04C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_TutorialOverviewText_C*                             TutorialOverview;                                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bDelegatesInitialized;                                   // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                          TH_UpdateItemPanel;                                      // 0x0558(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetOwningPlayerCharacter(class APlayerCharacter** ReturnValue);
		void ShowFireModes(class ABaseWeapon* Weapon);
		void ShowMagCheck();
		void OnWeaponFireModeChanged(EFireMode newFireMode);
		void TickCommandContext();
		class UMapActorWidget* AddMapActor(class UMapActorComponent* MapActorComponent, class UMapActorWidget* MapActorIconWidgetClass, const struct FSlateBrush& IconBrush, const struct FLinearColor& IconColor, const struct FLinearColor& IconTextColor, float RotationOffset);
		void PreviousTabletMenu();
		void NextTabletMenu();
		void HideTablet();
		void ShowTablet();
		void HideIncriminationExtractionHUD();
		void ShowIncriminationExtractionHUD();
		void UpdateCurrentFireMode();
		void FadeInHUD();
		void InitializeItemSelectionPanel(bool bForce);
		void EnabledCurvedHUD();
		void DisableCurvedHUD();
		void IsCurvedHUDEnabled(bool* ReturnValue);
		void UpdateCurveHUDValue(float NewValue);
		void ToggleCurvedHUD();
		void ToggleHUDSway();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ReInitializeItemSelectionMenu();
		void OnWeaponFireModeChanged_Event_1(EFireMode newFireMode, EFireMode LastFireMode);
		void InitalizeDelegateEvents();
		void ReflectHUDSettings();
		void ChatPressed();
		void TeamChatPressed();
		void RemoveMapActor(class UMapActorComponent* MapActorComponent);
		void UpdateMapFloors(TArray<struct FBuildingFloor> Floors);
		void OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon);
		void OnInventoryItemsChanged();
		void AddScorePopup(const class FText& ScoreText, int32_t ScoreValue, bool bGive);
		void ShowTutorialPrompt(const class FString& MessageID, bool bFirstShowing, const class FText& MessageTitle, TArray<class FText> MessageContent);
		void HideTutorialPrompt(const class FString& MessageID);
		void ShowTutorialOverview(const class FString& MessageID, const class FText& MessageTitle, TArray<class FText> MessageContent);
		void OnTeamViewSet_Event_1(class AReadyOrNotCharacter* NewViewCharacter);
		void OnMenuOpened_Event_1();
		void OnItemEquipped_Event_1(class ABaseItem* Item);
		void OnBodyPartDamaged_Event_1(bool bHeadDamaged, bool bBodyDamaged, bool bLeftArmDamaged, bool bRightArmDamaged, bool bLeftLegDamaged, bool bRightLegDamaged, bool bLeftFootDamaged, bool bRightFootDamaged);
		void Reconstruct();
		void OnItemGroupSelection_Pressed_Event_1(int32_t GroupIndex, int32_t CategoryIndex);
		void OnItemGroupSelection_Released_Event_1(int32_t GroupIndex, int32_t CategoryIndex);
		void UpdateItemSelectionPanel();
		void OnCharacterTakeDamage_Event_1(class AReadyOrNotCharacter* InstigatorCharacter, class AReadyOrNotCharacter* DamagedCharacter, class AActor* DamageCauser, float Damage, float HealthRemaining);
		void OnItemGroupSelection_ItemChanged_Event_1(int32_t GroupIndex, int32_t CategoryIndex);
		void ExecuteUbergraph_W_HumanCharacter_HUD_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
