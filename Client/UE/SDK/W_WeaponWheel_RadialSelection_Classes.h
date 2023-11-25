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
	 * WidgetBlueprintGeneratedClass W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C
	 * Size -> 0x00C0 (FullSize[0x0338] - InheritedSize[0x0278])
	 */
	class UW_WeaponWheel_RadialSelection_C : public UW_RadialSelectionBase_C
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_Expand;                                             // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                                Item_Icon;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MainArea;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              MainArea_Overlay;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        RootWidget;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                               Spacer_421;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_WeaponWheel_MagazineDisplay_C*                      WeaponWheel_MagazineDisplay;                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABaseItem*                                             Item;                                                    // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        ItemIconSize;                                            // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      CategoryIndex;                                           // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  ItemCategory;                                            // 0x02C8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class ABaseItem*>                                     Items;                                                   // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class UWeaponWheelScript*>                            ExecutableItems;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UObject*>                                       AllItems;                                                // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                        WheelSize;                                               // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        MaxWheelSize;                                            // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UImage*>                                        Icons;                                                   // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        StackedItems;                                            // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		class UImage* CreateIcon(const struct FSlateBrush& InBrush);
		void RemoveNullItemsInternal(TArray<class UObject*>* ItemArray);
		void RemoveNullItems();
		void IsInExecutablesArray(bool* ReturnValue);
		void RemoveExecutableItemFromCategory(class UWeaponWheelScript* WeaponWheelScript);
		void AddExecutableItemToCategory(class UWeaponWheelScript* WeaponWheelScript, int32_t AtIndex);
		void ShuffleItems();
		void ShiftItemToNewSpot(class ABaseItem* Item, int32_t NewIndex);
		void MoveToBack(class ABaseItem* Item);
		void MoveToFront(class ABaseItem* Item);
		void UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush);
		void Select(int32_t Index);
		void ExecuteRadial();
		void OnDeselected(bool PlayAnimation);
		void OnSelected(bool PlayAnimation);
		void Previous(bool* bSuccess);
		void Next(bool* bSuccess);
		void RemoveItemFromCategory(class ABaseItem* Item);
		void AddItemToCategory(class ABaseItem* NewItem, int32_t AtIndex);
		void IsEquipping(bool* IsEquipping);
		void GetItemName(class FName* ItemName);
		void GetCategory(class FText* Category);
		void PreConstruct(bool IsDesignTime);
		void OnWheelCreated();
		void ExecuteUbergraph_W_WeaponWheel_RadialSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
