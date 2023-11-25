/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.DeselectAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::DeselectAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39458);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_SkinCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39457);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.IsValidGridIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::IsValidGridIndex(int32_t InRow, int32_t InColumn, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39456);
		
		struct
		{
			int32_t                                            InRow;
			int32_t                                            InColumn;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.Find Grid Index From Skin Item Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               InSkinItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutColumn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::FindGridIndexFromSkinItemWidget(class UW_SkinItem_C* InSkinItemWidget, int32_t* OutRow, int32_t* OutColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39455);
		
		struct
		{
			class UW_SkinItem_C*                               InSkinItemWidget;
			int32_t                                            OutRow;
			int32_t                                            OutColumn;
		} params;
		params.InSkinItemWidget = InSkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRow != nullptr)
			*OutRow = params.OutRow;
		if (OutColumn != nullptr)
			*OutColumn = params.OutColumn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.FindAttachmentItemWidgetAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinItem_C*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::FindAttachmentItemWidgetAt(int32_t InRow, int32_t InColumn, class UW_SkinItem_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39454);
		
		struct
		{
			int32_t                                            InRow;
			int32_t                                            InColumn;
			class UW_SkinItem_C*                               ReturnValue;
		} params;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_SkinCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39453);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SkinCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39452);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnselectSkinItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::UnselectSkinItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39451);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SelectSkinItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::SelectSkinItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39450);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnhoverSkinItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::UnhoverSkinItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39449);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.HoverSkinItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::HoverSkinItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39448);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::PreviousColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39447);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.NextColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::NextColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39446);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39445);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39444);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::SimulateClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39443);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_SkinCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39442);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::SimulateUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39441);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::SimulateHover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39440);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39439);
		
		struct
		{
			class FText                                        InItemName;
		} params;
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.RemoveAllAttachmentItemWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::RemoveAllAttachmentItemWidgets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39438);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnhoverAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItemWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::UnhoverAllChildrenExcept(class UW_SkinItem_C* SkinItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39437);
		
		struct
		{
			class UW_SkinItem_C*                               SkinItemWidget;
		} params;
		params.SkinItemWidget = SkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               InSkinItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::DeselectAllChildrenExcept(class UW_SkinItem_C* InSkinItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39436);
		
		struct
		{
			class UW_SkinItem_C*                               InSkinItemWidget;
		} params;
		params.InSkinItemWidget = InSkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     InAttachmentCategoryWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39435);
		
		struct
		{
			class UW_AttachmentCategory_C*                     InAttachmentCategoryWidget;
		} params;
		params.InAttachmentCategoryWidget = InAttachmentCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItemWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnSkinItemClicked(class UW_SkinItem_C* SkinItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39434);
		
		struct
		{
			class UW_SkinItem_C*                               SkinItemWidget;
		} params;
		params.SkinItemWidget = SkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CreateSkinItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinComponent*                              SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::CreateSkinItemWidget(class USkinComponent* SkinClass, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39433);
		
		struct
		{
			class USkinComponent*                              SkinClass;
			int32_t                                            InRow;
			int32_t                                            InColumn;
		} params;
		params.SkinClass = SkinClass;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::ExpandChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39432);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::CollapseChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39431);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39430);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39429);
		
		struct
		{
			class UW_StandardButton_C*                         CallingButton;
		} params;
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39428);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39427);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39426);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39425);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39424);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnSkinItemButtonHovered(class UW_SkinItem_C* SkinItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39423);
		
		struct
		{
			class UW_SkinItem_C*                               SkinItem;
		} params;
		params.SkinItem = SkinItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnGunCleaned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnGunCleaned()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39422);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.ExecuteUbergraph_W_SkinCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::ExecuteUbergraph_W_SkinCategory(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39421);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnButtonUnhovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39420);
		
		struct
		{
			class UW_SkinCategory_C*                           SkinCategory;
		} params;
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnButtonHovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39419);
		
		struct
		{
			class UW_SkinCategory_C*                           SkinCategory;
		} params;
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinComponent*                              SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnSkinItemButtonClicked__DelegateSignature(class USkinComponent* SkinClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39418);
		
		struct
		{
			class USkinComponent*                              SkinClass;
		} params;
		params.SkinClass = SkinClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SkinCategory_C::OnButtonClicked__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39417);
		
		struct
		{
			class UW_SkinCategory_C*                           SkinCategory;
		} params;
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SkinCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SkinCategory_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39416);
		return ptr;
	}

}


