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
	 * WidgetBlueprintGeneratedClass W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C
	 * Size -> 0x0088 (FullSize[0x0300] - InheritedSize[0x0278])
	 */
	class UW_ItemSelection_ItemList_V2_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_FadeOut;                                            // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroup_V2_C*                       ItemGroup;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VerticalBox_Items;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VerticalBox_Main;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FItemSelectionGroup                                   ItemSelectionGroup;                                      // 0x02A0(0x0048) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         bIsLastGroup;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      SelectionIndex;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_ItemSelection_Item_C*>                       ItemWidgets;                                             // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void FadeOut();
		void FadeOutAll();
		void FadeOutAllExcept(int32_t Index);
		void Unfocus();
		void Focus();
		void HideList(bool bPlaySound);
		void ShowList(bool bPlaySound);
		void OnAnimSelectFinished();
		void ConfirmSelection();
		void Select(int32_t Index);
		void CreateItem(EItemCategory InItemCategory, class ABaseItem* InItem);
		void PopulateList();
		void Initialize();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_ItemSelection_ItemList_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
