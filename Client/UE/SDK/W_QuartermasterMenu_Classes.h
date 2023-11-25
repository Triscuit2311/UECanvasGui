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
	 * WidgetBlueprintGeneratedClass W_QuartermasterMenu.W_QuartermasterMenu_C
	 * Size -> 0x00B0 (FullSize[0x0328] - InheritedSize[0x0278])
	 */
	class UW_QuartermasterMenu_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_AttachmentCategory_C*                               ApplyAttachments;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_AttachmentCategory_C*                               CleanGun;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_AttachmentCategory_C*                               DiscardAttachments;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Preset;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Stats;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            Quartermaster_ScrollBox;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          QuartermasterCategories_Container;                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          QuartermasterMenu;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_PresetName;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_WeaponName;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                      SelectedRow;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bCategorySelected;                                       // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInMenuBounds;                                           // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x02D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x02D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             SelectedItemClass;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponAttachment*                                     SelectedAttachmentClass;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkinComponent*                                        SelectedSkinClass;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_AttachmentCategory_C*                               LastSelectedAttachmentCategoryWidget;                    // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_SkinCategory_C*                                     LastSelectedSkinCategoryWidget;                          // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_PreMission_C*                                       Owner;                                                   // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_AttachmentCategory_C*>                       AttachmentCategoryWidgets;                               // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UW_SkinCategory_C*>                             SkinCategoryWidgets;                                     // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UnhoverAllCategories();
		void UnhoverAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget);
		void CollapseAllCategories();
		void CollapseAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget);
		void OnGunCleaned();
		void CanCleanGun(bool* ReturnValue);
		ESlateVisibility Get_CleanGun_Visibility();
		void AttemptCreateSkinCategory(TArray<struct FWeaponData>* WeaponDataArray, bool* ReturnValue);
		void ScrollIntoView(class UWidget* WidgetToFind);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void AnyAttachmentCategoryWidgetHovered(bool* ReturnValue);
		void GetCurrentlyFocusedWidget(class UWidget** ReturnValue);
		void PopulateAttachmentCategory(bool bAllowAttachmentCategory, TArray<struct FAttachmentCategory>* AttachmentCategories, const struct FAttachmentCategory& AttachmentCategory);
		void UnhoverAll();
		void FocusOnWidget(class UWidget* InWidgetToFocus);
		void Escape();
		void UnselectAttachmentCategory();
		void SelectAttachmentCategory();
		void UnhoverAttachmentCategory();
		void HoverAttachmentCategory();
		void PreviousRow();
		void NextRow();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Exit();
		void Enter(class ABaseItem* LoadoutItemClass);
		void OnAttachmentCategoryButtonClicked(class UW_AttachmentCategory_C* AttachmentCategory);
		void OnAttachmentItemButtonClicked(class UWeaponAttachment* AttachmentClass);
		void OnAttachmentCategoryButtonHovered(class UW_AttachmentCategory_C* AttachmentCategory);
		void OnAttachmentCategoryButtonUnhovered(class UW_AttachmentCategory_C* AttachmentCategory);
		void OnSkinCategoryButtonClicked(class UW_SkinCategory_C* SkinCategory);
		void OnSkinCategoryButtonHovered(class UW_SkinCategory_C* SkinCategory);
		void OnSkinCategoryButtonUnhovered(class UW_SkinCategory_C* SkinCategory);
		void OnSkinItemButtonClicked(class USkinComponent* SkinClass);
		void BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory);
		void BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory);
		void BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory);
		void ExecuteUbergraph_W_QuartermasterMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
