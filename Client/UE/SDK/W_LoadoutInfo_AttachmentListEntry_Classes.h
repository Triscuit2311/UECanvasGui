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
	 * WidgetBlueprintGeneratedClass W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UW_LoadoutInfo_AttachmentListEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Attachment;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Remove;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                               Button_1;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_AttachmentEntry;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                icn_remove;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Slot;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  AttachmentName;                                          // 0x02A8(0x0018) Edit, BlueprintVisible
		EWeaponAttachmentType                                        AttachmentSlot;                                          // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponAttachment*                                     WeaponAttachment;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  SlotName;                                                // 0x02D0(0x0018) Edit, BlueprintVisible
		class UMulticastInlineDelegate                               OnClicked;                                               // 0x02E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnRemoveClicked;                                         // 0x02F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x02F9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void SetInfo(class UWeaponAttachment* AttachmentClass);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry(int32_t EntryPoint);
		void OnRemoveClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
		void OnClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
