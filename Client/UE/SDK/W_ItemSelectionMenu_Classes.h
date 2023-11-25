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
	 * WidgetBlueprintGeneratedClass W_ItemSelectionMenu.W_ItemSelectionMenu_C
	 * Size -> 0x0118 (FullSize[0x0390] - InheritedSize[0x0278])
	 */
	class UW_ItemSelectionMenu_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      SlideIn;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      FadeOut;                                                 // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                               DebugInfoContainer_Menu;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSelection_ItemGroupList_C*                      ItemGroupList;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                        MouseWheelDelta;                                         // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                  OpeningMenuKey;                                          // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                  PreviousMenuTriggerKey;                                  // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FKey>                                          MenuOpenKeyTriggers;                                     // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FItemSelectionGroup>                           ItemGroups;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         bInitialized;                                            // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      SelectedColumn;                                          // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bFadedOut;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCharacter*                                      PlayerCharacter;                                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsActive;                                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                          TH_FadeOut;                                              // 0x0318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<struct FKey, int32_t>                                   QueuedSelections;                                        // 0x0320(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                      OpenMenuTriggerCount;                                    // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0004[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                          TH_FadeOutSelected;                                      // 0x0378(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnMenuOpened;                                            // 0x0380(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x0381(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void ResetAnimationFadeOutState();
		void FindItemFromColumnIndex(class UW_ItemSelection_ItemList_C** ReturnValue);
		void FadeOutSelectedColumn();
		void CanQueueSelection(bool* ReturnValue);
		void QueuedExecuteSelection();
		void FindColumnIndexFromItem(class ABaseItem* InItem, int32_t* ReturnValue);
		void IsOpen(bool* ReturnValue);
		void HideMenu();
		void RemoveItemFromMenu(class ABaseItem* ItemToRemove, int32_t ListIndex);
		bool UpdateDebugInfo();
		void CanNavigate(bool* ReturnValue);
		void SetMouseWheelDelta(float NewMouseWheelDelta);
		void ExecuteSelection(int32_t Index);
		void CloseMenu();
		void OpenMenu(const struct FKey& TriggerKey);
		void OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon);
		void OnInitialized();
		void OnFadeOutFinished();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void Initialize(bool bForce, TArray<struct FItemSelectionGroup> InItemSelectionGroups);
		void CustomEvent_1();
		void ExecuteUbergraph_W_ItemSelectionMenu(int32_t EntryPoint);
		void OnMenuOpened__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
