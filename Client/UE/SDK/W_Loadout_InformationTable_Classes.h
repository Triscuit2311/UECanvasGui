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
	 * WidgetBlueprintGeneratedClass W_Loadout_InformationTable.W_Loadout_InformationTable_C
	 * Size -> 0x04A8 (FullSize[0x0708] - InheritedSize[0x0260])
	 */
	class UW_Loadout_InformationTable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animRefresh;                                             // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animHide;                                                // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animReveal;                                              // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                                div_Formation_Bot_2;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_icon;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              ItemInfoPanelWidget;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                           ItemListAnchor;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                             ScaleBox_Icon;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               SelectedMissionPanel_2;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SizeBox;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                              SizeBox_Icon;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Category;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Class;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Description;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_Overview_C*                                 W_Loadout_Overview;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnModifyWeaponButtonClicked;                             // 0x02E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x02E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         Hidden;                                                  // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  ItemName;                                                // 0x0300(0x0018) Edit, BlueprintVisible
		class FText                                                  ItemCategory;                                            // 0x0318(0x0018) Edit, BlueprintVisible
		class FText                                                  ItemDescription;                                         // 0x0330(0x0018) Edit, BlueprintVisible
		class ABaseItem*                                             ItemClass;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EItemCategory                                                LoadoutSlot;                                             // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  WeaponClassText;                                         // 0x0358(0x0018) Edit, BlueprintVisible
		EItemClass                                                   WeaponClass;                                             // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnInfoPanelRemoved;                                      // 0x0378(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0379(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         InfoHidden;                                              // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnCancelRefresh;                                         // 0x0390(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x0391(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x03A0(0x0178) Edit, BlueprintVisible, ExposeOnSpawn
		class UW_LoadoutInfo_AttachmentList_C*                       AttachmentList;                                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Restricted;                                              // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0007[0x7];                                   // 0x0521(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnInfoPanelAttachmentClicked;                            // 0x0528(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0008[0xF];                                   // 0x0529(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FName                                                  AmmoType;                                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                            ItemIcon;                                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UArmourMaterial*                                       ArmourMaterial;                                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponAttachment*                                     Attachment;                                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWeaponAttachmentType                                        AttachmentType;                                          // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0009[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                            ScopeReticle;                                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutInfo_EffectsList_C*                          EffectsList;                                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnInfoPanelRemoveAttachmentClicked;                      // 0x0570(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0010[0xF];                                   // 0x0571(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FLoadoutPreset                                        LoadoutPreset;                                           // 0x0580(0x0180) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_Loadout_Overview_C*                                 LoadoutPresetPreview;                                    // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateLoadoutPresetInfo();
		void SetAttachmentEffects(TArray<struct FST_ItemEffects>* Effects);
		void QuickHide();
		void PlayRefreshAnim();
		void UpdateAttachmentInfo();
		void UpdateArmourMaterialInfo();
		void UpdateAmmoInfo();
		void GetWeaponClassText(class FText* WeaponClass);
		void UpdateItemInfo();
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void Construct();
		void RefreshPanelItemInfo(const struct FSavedLoadout& ActiveLoadout, class ABaseItem* ItemClass, EItemCategory LoadoutSlot, bool Restricted);
		void ModifyWeaponClicked(class ABaseItem* ItemToModify);
		void InitializePanel(const struct FSavedLoadout& ActiveLoadout);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
		void RefreshPanelAmmoInfo(const class FName& AmmoType, class ABaseItem* WeaponData);
		void RefreshPanelArmourMaterial(class UArmourMaterial* ArmourMaterial);
		void RefreshPanelAttachment(class UWeaponAttachment* Attachment, class ABaseItem* AttachingWeapon);
		void RemoveAttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
		void RefreshPanelLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset);
		void ExecuteUbergraph_W_Loadout_InformationTable(int32_t EntryPoint);
		void OnInfoPanelRemoveAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot);
		void OnInfoPanelAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot, class UWeaponAttachment* AttachmentData);
		void OnCancelRefresh__DelegateSignature();
		void OnInfoPanelRemoved__DelegateSignature();
		void OnModifyWeaponButtonClicked__DelegateSignature(class ABaseItem* ItemToModify);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
