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
	 * WidgetBlueprintGeneratedClass W_WeaponWheel.W_WeaponWheel_C
	 * Size -> 0x01F0 (FullSize[0x0600] - InheritedSize[0x0410])
	 */
	class UW_WeaponWheel_C : public UWeaponWheelWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundBlur*                                       BackgroundBlur;                                          // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        Controls_Container;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfoContainer_Items;                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfoContainer_Logic;                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfoContainer_Settings;                             // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Image_251;                                               // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              TestSmoothCursor;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            WeaponStat_Category_Text;                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            WeaponStat_ItemName_Text;                                // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                WeaponWheel_Background;                                  // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                WeaponWheel_InnerBorder;                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          WeaponWheel_ItemInfo_Container;                          // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          WeaponWheel_ItemStats_Container;                         // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_WeaponWheel_MultiItem_Selection_C*                  WeaponWheel_MultiItem_Selection;                         // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                WeaponWheel_OuterBorder;                                 // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          WeaponWheelArea;                                         // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, class UW_WeaponWheel_RadialSelection_C*>   WheelCategoryToRadialSelectionWidget;                    // 0x0498(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UW_WeaponWheel_ItemStat_C*>                     ItemStats;                                               // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UW_WeaponWheel_RadialSelection_C*>              WeaponWheelCategories;                                   // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ABaseItem*>                                     ItemCategories;                                          // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		EEasingFunc                                                  StatGrowthEffect;                                        // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        StatGrowthSpeed;                                         // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      CategoryTextFontSize;                                    // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      ItemTextFontSize;                                        // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class ABaseItem*>                                     PrimaryWeapons;                                          // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                     SecondaryWeapons;                                        // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                     Grenades;                                                // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                     Assistants;                                              // 0x0558(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                     TacticalDevices;                                         // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                     TabletDevices;                                           // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		class UW_WeaponWheel_RadialSelection_C*                      CurrentSelectedRadialWidget;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_WeaponWheel_RadialSelection_C*                      PreviousSelectedRadialWidget;                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               CategoryDeselected;                                      // 0x0598(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0599(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               CategorySelected;                                        // 0x05A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x05A9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               ItemSelected;                                            // 0x05B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x05B9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               ItemDeselected;                                          // 0x05C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x05C9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		int32_t                                                      MaxItemStats;                                            // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponWheelScript*>                            ItemExecutables;                                         // 0x05E0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UWeaponWheelScript*>                            ItemExecutableScripts;                                   // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool RemoveNullItemsFromAllCategories();
		bool RemoveNullItemsFromCategory(const class FName& WeaponWheelCategoryName);
		void IsItemAtBack(class ABaseItem* Item, bool* ReturnValue);
		void IsItemAtFront(class ABaseItem* Item, bool* ReturnValue);
		void IsItemAtIndex(class ABaseItem* Item, int32_t Index, bool* ReturnValue);
		void ClearStats();
		void UpdateDebugInformation();
		void RemoveExecutableItemFromCategory(class UWeaponWheelScript* NewWeaponWheelScript, int32_t AtIndex);
		void AddExecutableItemToCategory(class UWeaponWheelScript* NewWeaponWheelScript, int32_t AtIndex);
		void ShuffleItemsInCategory(const class FName& CategoryName);
		void GetCurrentICategorytemCount(int32_t* ReturnValue);
		void GetCurrentItemSelectionIndex(int32_t* ReturnValue);
		void MoveItemToAnotherCategoryIndex(int32_t ItemIndex, const class FName& FromCategory, const class FName& ToCategory, int32_t NewIndexInCategory);
		void MoveItemToAnotherCategory(class ABaseItem* Item, const class FName& ToCategory, int32_t NewIndexInCategory);
		void MoveItemToNewSpotIndex(int32_t ItemIndex, const class FName& CategoryName, int32_t NewIndex);
		void MoveItemToNewSpot(class ABaseItem* Item, int32_t NewIndex);
		void MoveItemToBack(class ABaseItem* Item);
		void MoveItemToFront(class ABaseItem* Item);
		void MoveItemToBackIndex(int32_t ItemIndex, const class FName& CategoryName);
		void MoveItemToFrontIndex(int32_t ItemIndex, const class FName& CategoryName);
		void RemoveAssistant(class ABaseItem* AssistantItem);
		void RemoveTabletDevice(class ABaseItem* TabletDeviceItem);
		void RemoveTacticalDevices(class ABaseItem* DoorDeviceItem);
		void RemoveGrenade(class ABaseItem* GrenadeItem);
		void RemoveSecondaryWeapon(class ABaseItem* SecondaryWeaponItem);
		void RemovePrimaryWeapon(class ABaseItem* PrimaryWeaponItem);
		void RemoveItemFromCategory(class ABaseItem* Item, const class FName& WheelCategory);
		void AddItemToCategory(class ABaseItem* Item, const class FName& WheelCategory);
		void AddTabletDevice(class ABaseItem* TabletDeviceItem);
		void AddTacticalDevice(class ABaseItem* TacticalDeviceItem);
		void AddAssistants(class ABaseItem* Assistants);
		void AddGrenade(class ABaseItem* GrenadeItem);
		void AddSecondaryWeapon(class ABaseItem* SecondayWeaponItem);
		void AddPrimaryWeapon(class ABaseItem* PrimaryWeaponItem);
		void RefreshMultiItemWidget();
		bool IsWheelCursorVisible();
		bool OnRadialMenuInitialized();
		bool OnRadialSectorCreated(int32_t Index, float InAngle);
		bool ExecuteRadial();
		bool ShowWheel();
		bool HideWheel();
		void NotifyAllStatsOnWheelCreated();
		void NotifyAllCategoriesOnWheelCreated();
		void FindDataTableRowNameFromItemName(const class FName& ItemName, class FName* RowName);
		void StatEnumToName(uint8_t ItemStat, class FName* StatName);
		void RefreshStats(TArray<class UUserWidget*>* ItemStats, const struct FItemLookupTable& ItemDataTable);
		void RefreshCategory(TArray<class ABaseItem*>* NewCategoryItems, TArray<class UWeaponWheelScript*>* NewWeaponWheelScripts, const class FName& CategoryName, int32_t StartingItemIndex);
		void UpdateTabletDevices(TArray<class ABaseItem*>* NewTabletDevices, int32_t StartingItemIndex);
		void UpdateTacticalDevices(TArray<class ABaseItem*>* NewDoorDevices, int32_t StartingItemIndex);
		void UpdateAssistants(TArray<class ABaseItem*>* NewAssistants, int32_t StartingItemIndex);
		void UpdateGrenades(TArray<class ABaseItem*>* NewGrenades, int32_t StartingItemIndex);
		void UpdateSecondaryWeapons(TArray<class ABaseItem*>* NewSecondaryWeapons, int32_t StartingItemIndex);
		void UpdatePrimaryWeapons(TArray<class ABaseItem*>* NewPrimaryWeapons, int32_t StartingItemIndex);
		void PreviousItem();
		void NextItem();
		void PopulateAllCategories();
		void PopulateCategory(TArray<class ABaseItem*>* Items, const class FName& CategoryName);
		void PlaceWidgetInWheel(class UCanvasPanelSlot** CanvasSlot, const struct FVector2D& Positionn);
		void SelectItem(class UW_WeaponWheel_RadialSelection_C* ItemToSelect, bool PlayAnimation, bool PlaySound, bool RefreshStats, bool* bSuccess);
		void CreateWheelStat(class UW_WeaponWheel_ItemStat_C* ItemStatClass, float FillSpeed, EEasingFunc EasingFunction, const struct FItemLookupTable& LookupTable, class UW_WeaponWheel_ItemStat_C** ItemStatWidget);
		void CreateWheelCategory(int32_t Index, const class FName& CategoryName, class UCanvasPanelSlot** CanvasPanelSlot);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnItemSelcted(bool PlayAnimation);
		void OnItemDeselected();
		void OnSectorSelected(int32_t SelectedIndex);
		void OnSectorDeselected(int32_t DeselectedIndex);
		void OnRadialMenuCreated();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_WeaponWheel(int32_t EntryPoint);
		void ItemDeselected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName, int32_t ItemIndex, const class FName& ItemName);
		void ItemSelected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName, int32_t ItemIndex, const class FName& ItemName);
		void CategorySelected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName);
		void CategoryDeselected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
