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
	 * WidgetBlueprintGeneratedClass W_ItemSelection_ItemList.W_ItemSelection_ItemList_C
	 * Size -> 0x00DE (FullSize[0x0356] - InheritedSize[0x0278])
	 */
	class UW_ItemSelection_ItemList_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_Focus;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_Unfocus;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeIn;                                             // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeOut;                                            // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UGridPanel*                                            GridPanel_Items;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          ItemGroup;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VerticalBox_Items;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VerticalBox_Main;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       WidgetSwitcher_Style;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class ABaseItem*>                                     Items;                                                   // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		int32_t                                                      SelectionIndex;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UW_ItemSelection_Item_C*>                       ItemWidgets;                                             // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FItemSelectionGroup                                   ItemGroupSetting;                                        // 0x02F0(0x0048) Edit, BlueprintVisible, ExposeOnSpawn
		class ABasePlayer_C*                                         PlayerCharacter;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsFocused;                                              // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bCanNavigate;                                            // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bEnteredOnce;                                            // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x1];                                   // 0x0343(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                NudgeAmount;                                             // 0x0344(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        WorkingRenderOpacity;                                    // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      DuplicateRow;                                            // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsLastGroup;                                            // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         bInOverviewMode;                                         // 0x0355(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsInsideList(bool* ReturnValue);
		void UpdateItemList();
		void SwapItemWithGroup(int32_t ItemIndex);
		void OnGrenadeThrown(class ABaseGrenade* ThrownGrenade);
		void HideArrow();
		void ShowArrow();
		void RemoveItemIndex(int32_t ItemIndex);
		void RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems);
		void FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* ReturnValue, TArray<class FString>* Names);
		void ShowList();
		void HideList(bool bPlaySound);
		void CreateItem(class ABaseItem* Item, int32_t Index, bool bSwapping);
		void SwapItem(int32_t FromIndex, int32_t ToIndex);
		void OnAnimFadeOutFinished();
		void OnAnimSelectFinished();
		void Focus(bool bForce);
		void Unfocus(bool bForce);
		void EquipItem(bool* ItemEquipped);
		void ExecuteSelection(bool bSoftSelection);
		void GetSelectedItem(class ABaseItem** ReturnValue);
		void FadeIn(bool bFocusRequired);
		void FadeOut(bool bFocusRequired);
		void Deselect();
		void Select();
		void Previous();
		void Next();
		void PopulateList();
		void Initialize();
		void Construct();
		void OnInitialized();
		void CustomEvent_1();
		void PreConstruct(bool IsDesignTime);
		void CustomEvent_2();
		void ExecuteUbergraph_W_ItemSelection_ItemList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
