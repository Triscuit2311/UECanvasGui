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
	 * WidgetBlueprintGeneratedClass W_LoadoutClass.W_LoadoutClass_C
	 * Size -> 0x0138 (FullSize[0x03B0] - InheritedSize[0x0278])
	 */
	class UW_LoadoutClass_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_ButtonPressed;                                      // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_StandardButton_C*                                   Button;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                CollapseIcon_Image;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       ExpandCollapse_Switcher;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                ExpandIcon_Image;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MainContainer;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              SelectedItemInfo_Container;                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_LoadoutClass;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLoadoutCategory                                      LoadoutCategory;                                         // 0x02C8(0x0068) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UW_LoadoutItem_C*>                              LoadoutItems;                                            // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         bCollapsed;                                              // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnButtonClicked;                                         // 0x0348(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0349(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnButtonHovered;                                         // 0x0358(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0359(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnChildButtonClicked;                                    // 0x0368(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0369(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UW_LoadoutCategory_C*                                  Owner;                                                   // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bInMenuBounds;                                           // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bChildSelected;                                          // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x0382(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x1];                                   // 0x0383(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      SelectedRow;                                             // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SelectedColumn;                                          // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  DirectoryName;                                           // 0x0390(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_LoadoutItem_C*                                      SelectedLoadoutItem;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateItemNameText(const class FText& InText);
		void GetCurrentMenuDirectory(class FText* ReturnValue);
		void EnterPresetsMenu();
		void ExitPresetsMenu();
		void Escape();
		void UnselectUIElement();
		void SelectUIElement();
		void UnhoverUIElement();
		void HoverUIElement();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CanExit(bool* ReturnValue);
		void GetAllUncollapsedLoadoutItemWidgets(TArray<class UW_LoadoutItem_C*>* ReturnValue);
		ESlateVisibility Get_SelectedItemInfo_Container_Visibility();
		void GetAllTacticalDeviceClassesExpectGrenades(TArray<class ABaseItem*>* ReturnValue);
		void GetAllGrenadeClasses(TArray<class ABaseGrenade*>* ReturnValue);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UnhoverLoadoutItem();
		void HoverLoadoutItem();
		void UnselectLoadoutItem();
		void SelectLoadoutItem();
		void PreviousColumn();
		void NextColumn();
		void PreviousRow();
		void NextRow();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SimulateClick();
		void SimulateUnhover();
		void SimulateHover();
		void SelectActiveLoadout();
		void ShowSelectedItemInfo();
		void HideSelectedItemInfo();
		void OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget);
		void CreateLoadoutItemWidget(const class FText& LoadoutItemName, EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot);
		void InitializeLoadoutItems();
		void DeselectAllExcept(class UW_LoadoutItem_C* InLoadoutItemWidget);
		void RemoveAllChildren();
		void ExpandChildren();
		void CollapseChildren(bool bResetPreviewAnim);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
		void OnLoadoutLoaded();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
		void OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem);
		void OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem);
		void ExecuteUbergraph_W_LoadoutClass(int32_t EntryPoint);
		void OnButtonHovered__DelegateSignature(class UW_LoadoutClass_C* LoadoutClass);
		void OnChildButtonClicked__DelegateSignature(class UW_LoadoutItem_C* LoadoutItemWidget);
		void OnButtonClicked__DelegateSignature(class UW_LoadoutClass_C* LoadoutClassWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
