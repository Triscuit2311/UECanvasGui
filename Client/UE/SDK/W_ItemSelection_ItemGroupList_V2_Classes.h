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
	 * WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UW_ItemSelection_ItemGroupList_V2_C : public UBaseWidget
	{
	public:
		class UHorizontalBox*                                        ItemList_Container;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2;                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2_2;                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2_3;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2_4;                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2_5;                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       W_ItemSelection_ItemGroup_V2_6;                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UW_ItemSelection_ItemList_V2_C*>                ItemLists;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetListAtIndex(int32_t Index, class UW_ItemSelection_ItemList_V2_C** ReturnValue);
		void ResetAnimationState();
		void FadeOutAllExcept(int32_t Index);
		void UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups);
		void SelectCategory(int32_t GroupIndex, int32_t CategoryIndex);
		void SelectList(int32_t Index);
		void Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
