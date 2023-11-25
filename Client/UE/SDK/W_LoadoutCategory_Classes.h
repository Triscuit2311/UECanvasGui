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
	 * WidgetBlueprintGeneratedClass W_LoadoutCategory.W_LoadoutCategory_C
	 * Size -> 0x01B0 (FullSize[0x0428] - InheritedSize[0x0278])
	 */
	class UW_LoadoutCategory_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_ButtonPressed;                                      // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_StandardButton_C*                                   Button;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              CategoryExpander_Overlay;                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MainContainer;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              SelectedItemInfo_Container;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_CategoryName;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  LoadoutCategoryName;                                     // 0x02B8(0x0018) Edit, BlueprintVisible
		class FText                                                  ItemName;                                                // 0x02D0(0x0018) Edit, BlueprintVisible
		TArray<class UW_LoadoutClass_C*>                             LoadoutClassWidgets;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FText                                                  Tooltip;                                                 // 0x02F8(0x0018) Edit, BlueprintVisible
		EItemCategory                                                LoadoutCategory;                                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		ELoadoutScrollBehaviour                                      ScrollBehaviour;                                         // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EVerticalAlignment                                           ItemInfoCardAlignment;                                   // 0x0312(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x0313(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                               ItemInfoCardPadding;                                     // 0x0314(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLoadoutCategory>                              GearCategoryClasses;                                     // 0x0328(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UW_LoadoutItem_C*>                              LoadoutItemWidgets;                                      // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBaseWidget*>                                   LoadoutWidgets;                                          // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_LoadoutItem_C*                                      SelectedLoadoutItem;                                     // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutClass_C*                                     LastSelectedLoadoutClass;                                // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutCustomizationMenu_C*                         Owner;                                                   // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseItem*                                             SelectedItemClass;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bCollapsed;                                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFMODEvent*                                            ItemSelectedSound;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bRequiresQuartermaster;                                  // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         bAllowPresets;                                           // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         bOnlyAllowOneSelection;                                  // 0x038A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x5];                                   // 0x038B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnButtonClicked;                                         // 0x0390(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0391(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnButtonHovered;                                         // 0x03A0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x03A1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnButtonUnhovered;                                       // 0x03B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x03B1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnLoadoutItemButtonClicked;                              // 0x03C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0007[0xF];                                   // 0x03C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         bApplyLoadoutOnConstruct;                                // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         bChangeCameraView;                                       // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0008[0x2];                                   // 0x03D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  CameraTag;                                               // 0x03D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0009[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                PreviewAnimation;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bChildSelected;                                          // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInMenuBounds;                                           // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHovered;                                                // 0x03F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x03F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                      SelectedRow;                                             // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SelectedColumn;                                          // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0010[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  DirectoryName;                                           // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                        ExpandCollapseDelayTimeRemaining;                        // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0011[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreMissionPlanning*                                   PreMissionPlanningWidget;                                // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanInteractPreMissionPlanning(bool* CanInteract);
		void GetCurrentMenuDirectory(class FText* ReturnValue);
		void GetAllUncollapsedLoadoutWidgets(TArray<class UBaseWidget*>* ReturnValue);
		void CreateLoadoutItemWidget(const class FText& LoadoutItemName, EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot);
		void ExitPresetsMenu();
		void EnterPresetsMenu();
		void Escape();
		void UnselectLoadoutPreset();
		void SelectLoadoutPreset();
		void UnhoverLoadoutPreset();
		void HoverLoadoutPreset();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CanExit(bool* ReturnValue);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		ESlateVisibility Get_SelectedItemInfo_Container_Visibility();
		void UnselectLoadoutClass();
		void SelectLoadoutClass();
		void UnhoverLoadoutClass();
		void HoverLoadoutClass();
		void UnselectUIElement();
		void SelectUIElement();
		void UnhoverUIElement();
		void HoverUIElement();
		void PreviousColumn();
		void NextColumn();
		void PreviousRow();
		void NextRow();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget);
		void OnLoadoutClassClicked(class UW_LoadoutClass_C* LoadoutClassWidget);
		void SimulateUnhover();
		void SimulateHover();
		void SimulateClick();
		void UpdateSelectedItemName(const class FText& InItemName);
		void RemoveAllLoadoutClassWidgets();
		void DeselectAllChildrenExcept(class UW_LoadoutItem_C* InLoadoutItemWidget);
		void CollapseAllChildrenExcept(class UW_LoadoutClass_C* InLoadoutClassWidget);
		void CreateLoadoutItem(const struct FLoadoutCategory& InLoadoutCategory);
		void ExpandChildren();
		void CollapseChildren(bool bResetPreviewAnim);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
		void OnLoadoutLoaded();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
		void OnLoadoutClassButtonHovered(class UW_LoadoutClass_C* LoadoutClass);
		void OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem);
		void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
		void OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_W_LoadoutCategory(int32_t EntryPoint);
		void OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
		void OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
		void OnLoadoutItemButtonClicked__DelegateSignature(EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot, class UW_LoadoutItem_C* LoadoutItemWidget);
		void OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
