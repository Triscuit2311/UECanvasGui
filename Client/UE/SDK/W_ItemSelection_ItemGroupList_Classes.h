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
	 * WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C
	 * Size -> 0x0071 (FullSize[0x02E9] - InheritedSize[0x0278])
	 */
	class UW_ItemSelection_ItemGroupList_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                        ItemList_Container;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_2;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_3;                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_4;                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_5;                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_6;                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_C*                          W_ItemSelection_ItemGroup_75;                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                      SelectedColumn;                                          // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      PreviousSelectedColumn;                                  // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_ItemSelection_ItemList_C*>                   ItemLists;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FItemSelectionGroup>                           ItemGroups;                                              // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class APlayerCharacter*                                      PlayerCharacter;                                         // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bNVGOn;                                                  // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups);
		void IsInsideList(bool* ReturnValue);
		void SplitItemList(bool bSplit);
		void Event_UnfocusAll();
		void Event_FocusAll();
		void FadeOutOverview();
		void FadeInOverview();
		void FadeOutMagCount();
		void FadeInMagCount();
		void UnfocusAll(bool bForce);
		void FadeOutAllItemLists();
		void FadeInAllItemLists();
		void OnInputReleased();
		void FocusAll(bool bForce);
		void GetListAtColumnIndex(int32_t Index, class UW_ItemSelection_ItemList_C** ReturnValue);
		void Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray);
		void Previous();
		void Next();
		void CreateNewItemList(TArray<class ABaseItem*>* Items, int32_t Index, class UW_ItemSelection_ItemList_C** ReturnValue);
		void SelectColumn(int32_t Index);
		void Construct();
		void OnNightVisionGogglesToggled_Event_1(bool bNVGOn);
		void OnInitialized();
		void ExecuteUbergraph_W_ItemSelection_ItemGroupList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
