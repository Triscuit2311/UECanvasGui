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
	 * WidgetBlueprintGeneratedClass W_SkinCategory.W_SkinCategory_C
	 * Size -> 0x00F0 (FullSize[0x0368] - InheritedSize[0x0278])
	 */
	class UW_SkinCategory_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_ButtonPressed;                                      // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_StandardButton_C*                                   Button;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                     GridPanel;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              SelectedItemInfo_Container;                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_CategoryName;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_ItemName;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  ItemName;                                                // 0x02B0(0x0018) Edit, BlueprintVisible
		class FText                                                  SkinCategoryName;                                        // 0x02C8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UW_SkinItem_C*>                                 SkinItemWidgets;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         bCollapsed;                                              // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnButtonClicked;                                         // 0x02F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02F9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnButtonHovered;                                         // 0x0308(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0309(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnButtonUnhovered;                                       // 0x0318(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0319(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnSkinItemButtonClicked;                                 // 0x0328(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0329(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<class USkinComponent*>                                SkinAttachments;                                         // 0x0338(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class USkinComponent*                                        NullSkinAttachment;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UW_QuartermasterMenu_C*                                Owner;                                                   // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bChildSelected;                                          // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInMenuBounds;                                           // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHovered;                                                // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bAnyKeyDown;                                             // 0x035B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                      SelectedRow;                                             // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SelectedColumn;                                          // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      NumOfColumns;                                            // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeselectAll();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void IsValidGridIndex(int32_t InRow, int32_t InColumn, bool* ReturnValue);
		void FindGridIndexFromSkinItemWidget(class UW_SkinItem_C* InSkinItemWidget, int32_t* OutRow, int32_t* OutColumn);
		void FindAttachmentItemWidgetAt(int32_t InRow, int32_t InColumn, class UW_SkinItem_C** ReturnValue);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		ESlateVisibility Get_SelectedItemInfo_Container_Visibility();
		void UnselectSkinItem();
		void SelectSkinItem();
		void UnhoverSkinItem();
		void HoverSkinItem();
		void PreviousColumn();
		void NextColumn();
		void PreviousRow();
		void NextRow();
		void SimulateClick();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SimulateUnhover();
		void SimulateHover();
		void UpdateSelectedItemName(const class FText& InItemName);
		void RemoveAllAttachmentItemWidgets();
		void UnhoverAllChildrenExcept(class UW_SkinItem_C* SkinItemWidget);
		void DeselectAllChildrenExcept(class UW_SkinItem_C* InSkinItemWidget);
		void CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget);
		void OnSkinItemClicked(class UW_SkinItem_C* SkinItemWidget);
		void CreateSkinItemWidget(class USkinComponent* SkinClass, int32_t InRow, int32_t InColumn);
		void ExpandChildren();
		void CollapseChildren();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
		void OnLoadoutLoaded();
		void OnSkinItemButtonHovered(class UW_SkinItem_C* SkinItem);
		void OnGunCleaned();
		void ExecuteUbergraph_W_SkinCategory(int32_t EntryPoint);
		void OnButtonUnhovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
		void OnButtonHovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
		void OnSkinItemButtonClicked__DelegateSignature(class USkinComponent* SkinClass);
		void OnButtonClicked__DelegateSignature(class UW_SkinCategory_C* SkinCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
