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
	 * WidgetBlueprintGeneratedClass W_LoadoutSlot.W_LoadoutSlot_C
	 * Size -> 0x0E40 (FullSize[0x10A0] - InheritedSize[0x0260])
	 */
	class UW_LoadoutSlot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal_Expand;                                       // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animCollapse;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animReveal;                                              // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animHideAugment;                                         // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animRevealAugment;                                       // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                               AugmentContainer;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               Border_2;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_DivBot;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_ItemImage;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Equipped;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               Name;                                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SB_Equipped;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                             SB_Icon;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                             scale_Name;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SizeBox_1;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           SlotButton;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               SlotContents;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Augment;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Category;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Count;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Name;                                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                         StartCollapsed;                                          // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EItemCategory                                                LoadoutSlot;                                             // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0312(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseItem*                                             ItemData;                                                // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  ItemName;                                                // 0x0320(0x0018) Edit, BlueprintVisible
		class FText                                                  Category;                                                // 0x0338(0x0018) Edit, BlueprintVisible
		bool                                                         HasAugment;                                              // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  Augment;                                                 // 0x0358(0x0018) Edit, BlueprintVisible
		bool                                                         CompactLayout;                                           // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         MinimalLayout;                                           // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x6];                                   // 0x0372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            ItemIcon;                                                // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         StartActive;                                             // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         IsActive;                                                // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FST_Style_Text                                        NameTextStyle;                                           // 0x0388(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FMargin                                               NormalNamePadding;                                       // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FButtonStyle                                          NormalButtonStyle;                                       // 0x0438(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FST_Style_Text                                        NameTextStyle_Active;                                    // 0x06B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FButtonStyle                                          ActiveButtonStyle;                                       // 0x0750(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnSlotClicked;                                           // 0x09C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x09C9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnSlotHovered;                                           // 0x09D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x09D9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnSlotUnhovered;                                         // 0x09E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x09E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		EItemClass                                                   ItemClass;                                               // 0x09F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0007[0x7];                                   // 0x09F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EItemCategory>                                        ItemCategories;                                          // 0x0A00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FItemVisualData                                       Visuals;                                                 // 0x0A10(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                            Icon;                                                    // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnSlotDoubleClicked;                                     // 0x0A48(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0008[0xF];                                   // 0x0A49(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<struct FLoadoutCategory>                              GearCategoryClasses;                                     // 0x0A58(0x0010) Edit, BlueprintVisible
		struct FST_Style_Text                                        MinimalNameTextStyle;                                    // 0x0A68(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FMargin                                               MinimalNamePadding;                                      // 0x0B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FST_Style_Text                                        MinimalNameTextStyle_Active;                             // 0x0B18(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                         IsListItem;                                              // 0x0BB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                         Equipped;                                                // 0x0BB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0009[0x2];                                   // 0x0BBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                          NormalColor;                                             // 0x0BBC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          ActiveColor;                                             // 0x0BCC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          EquippedColor;                                           // 0x0BDC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          AugmentTextColor;                                        // 0x0BEC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0010[0x4];                                   // 0x0BFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                          EquippedButtonStyle;                                     // 0x0C00(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		EItemType                                                    ItemType;                                                // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Attachment;                                              // 0x0E79(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0011[0x6];                                   // 0x0E7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x0E80(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         AugmentDisplayed;                                        // 0x0FF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0012[0x7];                                   // 0x0FF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  CurrentAugment;                                          // 0x1000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                        EquippedLabelHeight;                                     // 0x1018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         NewItem;                                                 // 0x101C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         FirstInitialization;                                     // 0x101D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0013[0x2];                                   // 0x101E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  CameraTag;                                               // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                                PreviewAnimation;                                        // 0x1028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FName                                                  AmmoType;                                                // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AmmoMax;                                                 // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Hidden;                                                  // 0x1044(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0014[0x3];                                   // 0x1045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_Loadout_C*                                          LoadoutWidget;                                           // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                  CustomCategoryText;                                      // 0x1050(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UArmourMaterial*                                       ArmourMaterialData;                                      // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         IsAmmunition;                                            // 0x1070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         IsArmourMaterial;                                        // 0x1071(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         IsPrimary;                                               // 0x1072(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         Refreshing;                                              // 0x1073(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0015[0x4];                                   // 0x1074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  AmmoCaliber;                                             // 0x1078(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         IsCollapsed;                                             // 0x1090(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0016[0x3];                                   // 0x1091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MinimalHeight;                                           // 0x1094(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CompactHeight;                                           // 0x1098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        FullHeight;                                              // 0x109C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTW_LoadoutSlot_1();
		void DisableInteraction(bool Disabled);
		void SetCompactLayout(bool CompactLayout);
		void SetExclusiveLock();
		void ApplyIcon();
		void RefreshArmourMaterialInfo();
		void GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget);
		void GetAmmoCategoryText(class UObject* ItemData, class FText* Text);
		void RefreshAmmoInfo();
		void SetCountText(const class FText& Text);
		void GetInvetoryCount();
		void SetEquipped(bool Equipped);
		void GetItemIcon(TSoftObjectPtr<class UTexture2D>* Image);
		void RefreshItemInfo();
		void SetLayout(bool MinimalLayout);
		void GetIsSuppressed(bool* IsSuppressed);
		bool GetHoverState();
		void SetActive(bool IsActive);
		void OnLoaded_2301B5524398E883D7B4A9A8DD59E91D(class UObject* Loaded);
		void OnLoaded_FCECFCDB446A3843E9F216BC9A4A7723(class UObject* Loaded);
		void Finished_D51AD9A24CFA959F985A078C69194B2E();
		void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
		void InitializeItemData(class ABaseItem* ItemData);
		void InitializeAsListItem();
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void InitializeAsSlot();
		void ReinitializeItemData(class ABaseItem* ItemData);
		void ForceClick();
		void ForceDoubleClick();
		void InitializeAmmoData(bool Primary, const class FName& AmmoType, class ABaseItem* Weapon, int32_t AmmoCount);
		void Collapse();
		void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void InitializeArmourMaterialData(class UArmourMaterial* ArmourMaterial);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void ReinitializeAmmoData(bool Primary, const class FName& AmmoType, class ABaseItem* Weapon, int32_t AmmoCount);
		void ReinitializeArmorMaterialData(class UArmourMaterial* ArmourMaterial);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void ApplyAugment();
		void UpdateAugment(const class FText& AugmentText);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
		void UpdateAmmoCount(int32_t Count);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnEntryReleased();
		void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
		void ExpandReveal();
		void ExecuteUbergraph_W_LoadoutSlot(int32_t EntryPoint);
		void OnSlotDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
