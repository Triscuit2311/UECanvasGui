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
	 * WidgetBlueprintGeneratedClass W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C
	 * Size -> 0x04D0 (FullSize[0x0730] - InheritedSize[0x0260])
	 */
	class UW_Loadout_ItemList_Vertical_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_SubNav;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_Fade;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_Fade_2;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            ItemScrollBox;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Header;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Pagination;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Content;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLoadoutCategory>                              GearCategoryClasses;                                     // 0x02A8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         IsQuartermaster;                                         // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_Button_C*, EItemType>                          SubnavGearButtons;                                       // 0x02C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		EItemCategory                                                LoadoutCategory;                                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemClicked;                                    // 0x0318(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0319(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemCategory                                                LoadoutSlot;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_Button_C*, EWeaponAttachmentType>              SubnavAttachmentButtons;                                 // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UDataTable*                                            ItemDataTable;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                    SelectedItemType;                                        // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemDoubleClicked;                              // 0x0390(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x0391(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<struct FLoadoutCategory>                              DemoGearClasses;                                         // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         IsDesignTime;                                            // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0006[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_LoadoutSlot_C*, EItemType>                     Items;                                                   // 0x03B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_Button_C*                                           CurrentActiveSubnav;                                     // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x0410(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_LoadoutSlot_C*                                      CurrentlyEquipped;                                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Open;                                                    // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWeaponAttachmentType                                        SelectedAttachmentSlot;                                  // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0007[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             AttachingWeaponData;                                     // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        FirstItemOffset;                                         // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                               ListItemPadding;                                         // 0x05A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0008[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemHovered;                                    // 0x05B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0009[0xF];                                   // 0x05B9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnLoadoutItemUnhovered;                                  // 0x05C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0010[0xF];                                   // 0x05C9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAttachmentItemClicked;                                 // 0x05D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0011[0xF];                                   // 0x05D9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAttachmentItemHovered;                                 // 0x05E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0012[0xF];                                   // 0x05E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TMap<class UW_LoadoutSlot_Attachment_C*, EWeaponAttachmentType> Attachments;                                             // 0x05F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         IsPrimary;                                               // 0x0648(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         Quartermaster;                                           // 0x0649(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0013[0x2];                                   // 0x064A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                               ContentMargins;                                          // 0x064C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         DemoAttachmentList;                                      // 0x065C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0014[0x3];                                   // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_LoadoutSlot_Attachment_C*                           EquippedAttachment;                                      // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      EquippedItem;                                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ScrollToViewPadding;                                     // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      ScrollPageSize;                                          // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      ScrollPageCount;                                         // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentScrollTarget;                                     // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentScrollPage;                                       // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentOffset;                                           // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         IsUserScrollInput;                                       // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0015[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                       VisibleItems;                                            // 0x0690(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ABaseItem*>                                     ExcludedItems;                                           // 0x06A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                  ExcludedAmmoType;                                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnAttachmentUnhovered;                                   // 0x06B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0016[0xF];                                   // 0x06B9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemClicked;                                       // 0x06C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0017[0xF];                                   // 0x06C9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemHovered;                                       // 0x06D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0018[0xF];                                   // 0x06D9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemDoubleClicked;                                 // 0x06E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0019[0xF];                                   // 0x06E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         IsAmmunition;                                            // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         IsArmourMaterial;                                        // 0x06F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0020[0x6];                                   // 0x06FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnArmourMaterialClicked;                                 // 0x0700(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0021[0xF];                                   // 0x0701(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnArmourMaterialDoubleClicked;                           // 0x0710(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0022[0xF];                                   // 0x0711(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnArmourMaterialHovered;                                 // 0x0720(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0023[0xF];                                   // 0x0721(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void RefreshEquippedArmourMaterial();
		void RefreshEquippedAmmo();
		void CreateArmourMaterialLoadoutWidgetItem(class UArmourMaterial* ArmourMaterial, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget);
		void PopulateArmourMaterials();
		void CreateAmmoLoadoutWidgetItem(const class FName& AmmoType, class ABaseItem* Weapon, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget);
		void PopulateAmmo(TArray<class FName>* AmmoTypes, class ABaseItem* Weapon);
		void ScrollToPage(int32_t Page);
		void ScrollToTargetIndex(int32_t ItemIndex);
		void ScrollToPreviousItem();
		void ScrollToNextItem();
		void ScrollToPreviousPage();
		void ScrollToNextPage();
		void UpdateScrollPage();
		void SetupScrollPagination();
		void ScrollToEquipped();
		void RefreshEquippedAttachments();
		void RefreshEquippedItems();
		void SetListItemPadding(bool IsFirstItem, class UScrollBoxSlot* ScrollBoxSlotItem);
		void PopulateAttachments(TArray<class UWeaponAttachment*>* Attachments);
		void RefreshEquipped(const struct FSavedLoadout& ActiveLoadout, bool RefreshAttachments);
		void SortItems();
		void CreateLoadoutWidgetItem(class ABaseItem* ItemData, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget);
		void GetItemArrayBySlot();
		void PopulateItems(TArray<struct FLoadoutCategory>* GearCategoryClasses);
		void PopulateSubnav();
		void OpenList();
		void AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void ScrollOpenedToEquipped();
		void BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void InitializeLoadoutList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses);
		void LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void InitializeAttachmentList(class ABaseItem* ItemData, EWeaponAttachmentType AttachmentType);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void HideList();
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void InitializeDeployableList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class ABaseItem*> ExcludedItems);
		void Hide(float Delay, bool Collapse);
		void InitializeAmmoList(const class FName& ExcludedAmmoType, class ABaseItem* Weapon);
		void Reveal(float Delay);
		void AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem);
		void AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void InitializeArmourMaterialList();
		void SubnavButtonClicked(class UW_Button_C* TriggeringButton);
		void ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem);
		void ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem);
		void ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem);
		void ExecuteUbergraph_W_Loadout_ItemList_Vertical(int32_t EntryPoint);
		void OnLoadoutItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnLoadoutItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnAttachmentUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void OnArmourMaterialHovered__DelegateSignature(class UArmourMaterial* ArmourMaterial);
		void OnArmourMaterialDoubleClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial);
		void OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial);
		void OnAmmoItemDoubleClicked__DelegateSignature(const class FName& AmmoType);
		void OnAmmoItemHovered__DelegateSignature(const class FName& AmmoType);
		void OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon);
		void OnAttachmentItemHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void OnAttachmentItemClicked__DelegateSignature(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData);
		void OnLoadoutItemDoubleClicked__DelegateSignature(class ABaseItem* ItemData);
		void OnLoadoutItemClicked__DelegateSignature(class ABaseItem* ItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
