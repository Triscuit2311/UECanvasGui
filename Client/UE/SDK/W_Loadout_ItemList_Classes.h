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
	 * WidgetBlueprintGeneratedClass W_Loadout_ItemList.W_Loadout_ItemList_C
	 * Size -> 0x04D8 (FullSize[0x0738] - InheritedSize[0x0260])
	 */
	class UW_Loadout_ItemList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_SubNav;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_Fade;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_Fade_2;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            ItemScrollBox;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                          RetainerBox_1;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Header;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Pagination;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Content;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLoadoutCategory>                              GearCategoryClasses;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         IsQuartermaster;                                         // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_Button_C*, EItemType>                          SubnavGearButtons;                                       // 0x02C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		EItemCategory                                                LoadoutCategory;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemClicked;                                    // 0x0320(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0321(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemCategory                                                LoadoutSlot;                                             // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_Button_C*, EWeaponAttachmentType>              SubnavAttachmentButtons;                                 // 0x0338(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UDataTable*                                            ItemDataTable;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                    SelectedItemType;                                        // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemDoubleClicked;                              // 0x0398(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x0399(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<struct FLoadoutCategory>                              DemoGearClasses;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         IsDesignTime;                                            // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0006[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UW_LoadoutSlot_C*, EItemType>                     Items;                                                   // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_Button_C*                                           CurrentActiveSubnav;                                     // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x0418(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_LoadoutSlot_C*                                      CurrentlyEquipped;                                       // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Open;                                                    // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWeaponAttachmentType                                        SelectedAttachmentSlot;                                  // 0x0599(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0007[0x6];                                   // 0x059A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             AttachingWeaponData;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        FirstItemOffset;                                         // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                               ListItemPadding;                                         // 0x05AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0008[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnLoadoutItemHovered;                                    // 0x05C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0009[0xF];                                   // 0x05C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnLoadoutItemUnhovered;                                  // 0x05D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0010[0xF];                                   // 0x05D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAttachmentItemClicked;                                 // 0x05E0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0011[0xF];                                   // 0x05E1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAttachmentItemHovered;                                 // 0x05F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0012[0xF];                                   // 0x05F1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TMap<class UW_LoadoutSlot_Attachment_C*, EWeaponAttachmentType> Attachments;                                             // 0x0600(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         IsPrimary;                                               // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         Quartermaster;                                           // 0x0651(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0013[0x2];                                   // 0x0652(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                               ContentMargins;                                          // 0x0654(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         DemoAttachmentList;                                      // 0x0664(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0014[0x3];                                   // 0x0665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_LoadoutSlot_Attachment_C*                           EquippedAttachment;                                      // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      EquippedItem;                                            // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ScrollToViewPadding;                                     // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      ScrollPageSize;                                          // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      ScrollPageCount;                                         // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentScrollTarget;                                     // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentScrollPage;                                       // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentOffset;                                           // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         IsUserScrollInput;                                       // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0015[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                       VisibleItems;                                            // 0x0698(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ABaseItem*>                                     ExcludedItems;                                           // 0x06A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                  ExcludedAmmoType;                                        // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnAttachmentUnhovered;                                   // 0x06C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0016[0xF];                                   // 0x06C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemClicked;                                       // 0x06D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0017[0xF];                                   // 0x06D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemHovered;                                       // 0x06E0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0018[0xF];                                   // 0x06E1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnAmmoItemDoubleClicked;                                 // 0x06F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0019[0xF];                                   // 0x06F1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         IsAmmunition;                                            // 0x0700(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         IsArmourMaterial;                                        // 0x0701(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0020[0x6];                                   // 0x0702(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnArmourMaterialClicked;                                 // 0x0708(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0021[0xF];                                   // 0x0709(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnArmourMaterialDoubleClicked;                           // 0x0718(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0022[0xF];                                   // 0x0719(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnArmourMaterialHovered;                                 // 0x0728(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0023[0xF];                                   // 0x0729(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

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
		void InitializeLoadoutList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses);
		void SubnavButtonClicked(class UW_Button_C* TriggeringButton);
		void InitializeAttachmentList(class ABaseItem* ItemData, EWeaponAttachmentType AttachmentType);
		void HideList();
		void LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void OpenList();
		void AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void ScrollOpenedToEquipped();
		void BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void Hide(float Delay, bool Collapse);
		void Reveal(float Delay);
		void InitializeDeployableList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class ABaseItem*> ExcludedItems);
		void Construct();
		void InitializeAmmoList(const class FName& ExcludedAmmoType, class ABaseItem* Weapon);
		void PreConstruct(bool IsDesignTime);
		void AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem);
		void AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void InitializeArmourMaterialList();
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem);
		void ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem);
		void AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem);
		void ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem);
		void ExecuteUbergraph_W_Loadout_ItemList(int32_t EntryPoint);
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
