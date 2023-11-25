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
	 * WidgetBlueprintGeneratedClass W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C
	 * Size -> 0x0110 (FullSize[0x0388] - InheritedSize[0x0278])
	 */
	class UW_LoadoutCustomizationMenu_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_LoadoutItemInfo_SlideOut;                           // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_LoadoutItemInfo_SlideIn;                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_Quartermaster_ButtonPressed;                        // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                            CurrentMenuDirectory_Text;                               // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             DefaultFireMode_ComboBox;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        EquipTeamMate_HBox;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   GoToQuartermaster_Button;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                ItemIcon_Image;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                             ItemIcon_ScaleBox;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_GoToQuartermaster;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            Loadout_ScrollBox;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          LoadoutCategories_Container;                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          LoadoutItemInfo_Container;                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          LoadoutItemInfoMenu;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Presets_C*                              LoadoutPresets;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              Quatermaster_Box;                                        // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemDescription;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_EquipTeamMateCategory_C*                            W_EquipTeamMateCategory;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_EquipTeamMateCategory_C*                            W_EquipTeamMateCategory_2;                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_EquipTeamMateCategory_C*                            W_EquipTeamMateCategory_3;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_EquipTeamMateCategory_C*                            W_EquipTeamMateCategory_4;                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_EquipTeamMateCategory_C*                            W_EquipTeamMateCategory_5;                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_HotkeyBar_Entry_C*                                  W_HotkeyBar_Entry;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  LoadoutSlotName;                                         // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                      SelectedRow;                                             // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bLoadoutCategorySelected;                                // 0x035C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bLoadoutItemSelected;                                    // 0x035D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x035E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInPresetsMenu;                                          // 0x035F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UW_PreMission_C*                                       Owner;                                                   // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutCategory_C*                                  LastSelectedLoadoutCategory;                             // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutItem_C*                                      LastSelectedLoadoutItem;                                 // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                               LastSelectedLoadoutItemPreset;                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseItem*                                             LastSelectedLoadoutItemClass;                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Get_Quatermaster_Box_IsEnabled();
		void FindIconFromItemClass(class ABaseItem* ItemClass, class UTexture2D** ReturnValue);
		void StopItemInfoCardAnimation();
		void FadeOutItemInfoCard();
		void FadeInItemInfoCard();
		class FText Get_CurrentMenuDirectory_Text();
		void CanRenamePreset(bool* ReturnValue);
		void Escape();
		void UnselectLoadoutPreset();
		void SelectLoadoutPreset();
		void UnhoverLoadoutPreset();
		void HoverLoadoutPreset();
		void OnLoadoutItemPresetButtonClickedInternal(class UW_LoadoutItem_Preset_C* LoadoutItemPreset);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetCurrentlyFocusedWidget(class UWidget** ReturnValue);
		ESlateVisibility Get_Quatermaster_Box_Visibility();
		void AnyLoadoutCategoryWidgetHovered(bool* ReturnValue);
		void CanUnselect(bool* ReturnValue);
		void ApplyPresetToPreviewCharacterWeapon(class ABaseItem* ItemClass, class UW_LoadoutItem_Preset_C* LoadoutItemPreset, bool bDeselectAll);
		void UpdateFireModeOptions();
		void RenamePreset();
		void UnhoverAll();
		ESlateVisibility Get_LoadoutItemInfo_Container_Visibility();
		void UnhoverLoadoutCategory();
		void HoverLoadoutCategory();
		void UnselectLoadoutCategory();
		void SelectLoadoutCategory();
		void PreviousColumn();
		void NextColumn();
		void PreviousRow();
		void NextRow();
		void UpdateItemInfoCard(class ABaseItem* ItemClass);
		void FocusOnWidget(class UWidget* WidgetToFocus);
		void ScrollIntoView(class UWidget* WidgetToFind);
		void ScrollIntoTop(class UWidget* WidgetToFind);
		void ScrollIntoCenter(class UWidget* WidgetToFind);
		void ScrollToBottom();
		void ScrollToTop();
		void OnLoadoutItemButtonClickedInternal(EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot, class UW_LoadoutItem_C* LastSelectedLoadoutItem);
		void OnLoadoutCategoryButtonHoveredInternal(class UW_LoadoutCategory_C* LoadoutCategory);
		void OnLoadoutCategoryButtonClickedInternal(class UW_LoadoutCategory_C* LoadoutCategory);
		void OnLoadoutCategoryButtonClicked(class UW_LoadoutCategory_C* LoadoutCategory);
		void OnLoadoutCategoryButtonHovered(class UW_LoadoutCategory_C* LoadoutCategory);
		void InitializeWidget();
		void OnLoadoutLoaded();
		void BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature();
		void BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature();
		void BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void ResetAttachments();
		void OnLoadoutItemButtonClicked(EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot, class UW_LoadoutItem_C* LoadoutItemWidget);
		void OnPresetsLoaded();
		void Anim_OnSlideInFinished();
		void Anim_OnSlideOutFinished();
		void BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void OnDefaultWeaponFireModesLoaded();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnLoadoutCategoryButtonUnhovered(class UW_LoadoutCategory_C* LoadoutCategory);
		void InitializeTeammatebuttons();
		void SwapSelectedEquippingCharacter(EEquippingSwat NewEquippingSwat);
		void SwapPlayer(class UW_Button_C* Button);
		void SwapAlpha(class UW_Button_C* Button);
		void SwapBeta(class UW_Button_C* Button);
		void SwapCharlie(class UW_Button_C* Button);
		void SwapDelta(class UW_Button_C* Button);
		void ExecuteUbergraph_W_LoadoutCustomizationMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
