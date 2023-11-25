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
	 * WidgetBlueprintGeneratedClass W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C
	 * Size -> 0x0220 (FullSize[0x0480] - InheritedSize[0x0260])
	 */
	class UW_LoadoutInfo_AttachmentList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           btn_CleanWeapon;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ModifyWeapon;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Attachments;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           W_Header;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWeaponAttachment*>                             Placeholders;                                            // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x02A0(0x0178) Edit, BlueprintVisible, ExposeOnSpawn
		class ABaseItem*                                             ItemClass;                                               // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UWeaponAttachment*>                             Attachments;                                             // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnModifyWeaponButtonClick;                               // 0x0430(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0431(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<class UW_LoadoutInfo_AttachmentListEntry_C*>          AttachmentListItems;                                     // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         Restricted;                                              // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        RevealDelay;                                             // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        RevealDelayOffset;                                       // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnAttachmentItemClicked;                                 // 0x0460(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0461(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnRemoveAttachmentClicked;                               // 0x0470(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0471(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void CheckCurrentAttachments(TArray<class UWeaponAttachment*>* Attachments);
		void GetIsNullAttachment(class UWeaponAttachment* AttachmentData, bool* IsNull);
		void AttachmentArraySidearm();
		void AttachmentArrayPrimary();
		void GetCurrentAttachments(TArray<class UWeaponAttachment*>* Attachments);
		void Finished_EC73150B49B091C3F6FAB48DDD93DD29();
		void Hide(float Delay, bool Collapse);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void RefreshList(const struct FSavedLoadout& ActiveLoadout, class ABaseItem* ItemClass, bool Restricted);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void Reveal(float Delay);
		void AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
		void RemoveAttachmentClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy);
		void ExecuteUbergraph_W_LoadoutInfo_AttachmentList(int32_t EntryPoint);
		void OnRemoveAttachmentClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry);
		void OnAttachmentItemClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry);
		void OnModifyWeaponButtonClick__DelegateSignature(class ABaseItem* ItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
