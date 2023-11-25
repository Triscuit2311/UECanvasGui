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
	 * WidgetBlueprintGeneratedClass W_LoadoutInfo_EffectsList.W_LoadoutInfo_EffectsList_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UW_LoadoutInfo_EffectsList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Affects;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           W_Header;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FST_ItemEffects>                               Placeholders;                                            // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnModifyWeaponButtonClick;                               // 0x0290(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0291(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<class UW_LoadoutInfo_EffectsListEntry_C*>             EffectListItems;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                        RevealDelay;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        RevealDelayOffset;                                       // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnAttachmentItemClicked;                                 // 0x02B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02B9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<struct FST_ItemEffects>                               Effects;                                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Populate(TArray<struct FST_ItemEffects>* Effects);
		void GetIsNullAttachment(class UWeaponAttachment* AttachmentData, bool* IsNull);
		void Finished_001C63E74329714F2226218E06608382();
		void Hide(float Delay, bool Collapse);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void RefreshList(TArray<struct FST_ItemEffects>* Effects);
		void Reveal(float Delay);
		void ExecuteUbergraph_W_LoadoutInfo_EffectsList(int32_t EntryPoint);
		void OnAttachmentItemClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry);
		void OnModifyWeaponButtonClick__DelegateSignature(class ABaseItem* ItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
