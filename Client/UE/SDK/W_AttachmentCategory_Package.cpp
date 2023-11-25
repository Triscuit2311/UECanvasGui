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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::DeselectAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51867);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.Transform Into Custom Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::TransformIntoCustomButton()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51866);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51865);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.IsValidGridIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::IsValidGridIndex(int32_t InRow, int32_t InColumn, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51864);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.FindGridIndexFromAttachmentItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         InAttachmentItemWidget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutColumn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::FindGridIndexFromAttachmentItemWidget(class UW_AttachmentItem_C* InAttachmentItemWidget, int32_t* OutRow, int32_t* OutColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51863);
		
		struct
		{
			class UW_AttachmentItem_C*                         InAttachmentItemWidget;
			int32_t                                            OutRow;
			int32_t                                            OutColumn;
		} params;
		params.InAttachmentItemWidget = InAttachmentItemWidget;
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.FindAttachmentItemWidgetAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_AttachmentItem_C*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::FindAttachmentItemWidgetAt(int32_t InRow, int32_t InColumn, class UW_AttachmentItem_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51862);
		
		struct
		{
			int32_t                                            InRow;
			int32_t                                            InColumn;
			class UW_AttachmentItem_C*                         ReturnValue;
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51861);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_AttachmentCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51860);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UnselectAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::UnselectAttachmentItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51859);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SelectAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::SelectAttachmentItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51858);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UnhoverAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::UnhoverAttachmentItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51857);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.HoverAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::HoverAttachmentItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51856);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::PreviousColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51855);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.NextColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::NextColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51854);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51853);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51852);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::SimulateClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51851);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51850);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::SimulateUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51849);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::SimulateHover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51848);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39415);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.RemoveAllAttachmentItemWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::RemoveAllAttachmentItemWidgets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39414);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         InAttachmentItemWidget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::DeselectAllChildrenExcept(class UW_AttachmentItem_C* InAttachmentItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39413);
		
		struct
		{
			class UW_AttachmentItem_C*                         InAttachmentItemWidget;
		} params;
		params.InAttachmentItemWidget = InAttachmentItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     InAttachmentCategoryWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39412);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItemWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemClicked(class UW_AttachmentItem_C* AttachmentItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39411);
		
		struct
		{
			class UW_AttachmentItem_C*                         AttachmentItemWidget;
		} params;
		params.AttachmentItemWidget = AttachmentItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CreateAttachmentItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           AttachmentItemClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::CreateAttachmentItemWidget(class UWeaponAttachment* AttachmentItemClass, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39410);
		
		struct
		{
			class UWeaponAttachment*                           AttachmentItemClass;
			int32_t                                            InRow;
			int32_t                                            InColumn;
		} params;
		params.AttachmentItemClass = AttachmentItemClass;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::ExpandChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39409);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::CollapseChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39408);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39407);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39406);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39405);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39404);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39403);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39402);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39401);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemButtonHovered(class UW_AttachmentItem_C* AttachmentItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39400);
		
		struct
		{
			class UW_AttachmentItem_C*                         AttachmentItem;
		} params;
		params.AttachmentItem = AttachmentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnGunCleaned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnGunCleaned()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39399);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.ExecuteUbergraph_W_AttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::ExecuteUbergraph_W_AttachmentCategory(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39398);
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnButtonUnhovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39397);
		
		struct
		{
			class UW_AttachmentCategory_C*                     AttachmentCategory;
		} params;
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnButtonHovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39396);
		
		struct
		{
			class UW_AttachmentCategory_C*                     AttachmentCategory;
		} params;
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           AttachmentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemButtonClicked__DelegateSignature(class UWeaponAttachment* AttachmentClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39395);
		
		struct
		{
			class UWeaponAttachment*                           AttachmentClass;
		} params;
		params.AttachmentClass = AttachmentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AttachmentCategory_C::OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39394);
		
		struct
		{
			class UW_AttachmentCategory_C*                     AttachmentCategory;
		} params;
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AttachmentCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_AttachmentCategory_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39393);
		return ptr;
	}

}


