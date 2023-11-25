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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Can Interact Pre Mission Planning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CanInteractPreMissionPlanning(bool* CanInteract)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39691);
		
		struct
		{
			bool                                               CanInteract;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.GetCurrentMenuDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::GetCurrentMenuDirectory(class FText* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39690);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.GetAllUncollapsedLoadoutWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBaseWidget*>                         ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::GetAllUncollapsedLoadoutWidgets(TArray<class UBaseWidget*>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39689);
		
		struct
		{
			TArray<class UBaseWidget*>                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        LoadoutItemName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingTacticalSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CreateLoadoutItemWidget(const class FText& LoadoutItemName, EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39688);
		
		struct
		{
			class FText                                        LoadoutItemName;
			EItemClass                                         ItemClass;
			unsigned char                                      UnknownData_0001[0x7];
			class ABaseItem*                                   ItemObjectClass;
			bool                                               bIsTactical;
			unsigned char                                      UnknownData_0002[0x3];
			int32_t                                            TacticalSlot;
			bool                                               bIsMultipleTacticalSlots;
			unsigned char                                      UnknownData_0003[0x3];
			int32_t                                            MaxTacticalSlots;
			int32_t                                            StartingTacticalSlot;
		} params;
		params.LoadoutItemName = LoadoutItemName;
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.StartingTacticalSlot = StartingTacticalSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExitPresetsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::ExitPresetsMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39687);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.EnterPresetsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::EnterPresetsMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39686);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::Escape()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39685);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnselectLoadoutPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39684);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SelectLoadoutPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39683);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnhoverLoadoutPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39682);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::HoverLoadoutPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39681);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39680);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CanExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CanExit(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39679);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39678);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_LoadoutCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39677);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnselectLoadoutClass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39676);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SelectLoadoutClass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39675);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnhoverLoadoutClass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39674);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::HoverLoadoutClass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39673);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnselectUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39672);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SelectUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39671);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UnhoverUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39670);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::HoverUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39669);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::PreviousColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39668);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.NextColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::NextColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39667);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39666);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39665);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39664);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItemWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39663);
		
		struct
		{
			class UW_LoadoutItem_C*                            LoadoutItemWidget;
		} params;
		params.LoadoutItemWidget = LoadoutItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClassWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutClassClicked(class UW_LoadoutClass_C* LoadoutClassWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39662);
		
		struct
		{
			class UW_LoadoutClass_C*                           LoadoutClassWidget;
		} params;
		params.LoadoutClassWidget = LoadoutClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SimulateUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39661);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SimulateHover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39660);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::SimulateClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39659);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39658);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.RemoveAllLoadoutClassWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::RemoveAllLoadoutClassWidgets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39657);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            InLoadoutItemWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::DeselectAllChildrenExcept(class UW_LoadoutItem_C* InLoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39656);
		
		struct
		{
			class UW_LoadoutItem_C*                            InLoadoutItemWidget;
		} params;
		params.InLoadoutItemWidget = InLoadoutItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           InLoadoutClassWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CollapseAllChildrenExcept(class UW_LoadoutClass_C* InLoadoutClassWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39655);
		
		struct
		{
			class UW_LoadoutClass_C*                           InLoadoutClassWidget;
		} params;
		params.InLoadoutClassWidget = InLoadoutClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLoadoutCategory                            InLoadoutCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CreateLoadoutItem(const struct FLoadoutCategory& InLoadoutCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39654);
		
		struct
		{
			struct FLoadoutCategory                            InLoadoutCategory;
		} params;
		params.InLoadoutCategory = InLoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::ExpandChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39653);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetPreviewAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::CollapseChildren(bool bResetPreviewAnim)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39652);
		
		struct
		{
			bool                                               bResetPreviewAnim;
			unsigned char                                      UnknownData_0004[0x3];
		} params;
		params.bResetPreviewAnim = bResetPreviewAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39651);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39650);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39649);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39648);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39647);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39646);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutClassButtonHovered(class UW_LoadoutClass_C* LoadoutClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39645);
		
		struct
		{
			class UW_LoadoutClass_C*                           LoadoutClass;
		} params;
		params.LoadoutClass = LoadoutClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39644);
		
		struct
		{
			class UW_LoadoutItem_C*                            LoadoutItem;
		} params;
		params.LoadoutItem = LoadoutItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39643);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39642);
		
		struct
		{
			class UW_LoadoutItem_C*                            LoadoutItem;
		} params;
		params.LoadoutItem = LoadoutItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39641);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExecuteUbergraph_W_LoadoutCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::ExecuteUbergraph_W_LoadoutCategory(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39640);
		
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39639);
		
		struct
		{
			class UW_LoadoutCategory_C*                        LoadoutCategory;
		} params;
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39638);
		
		struct
		{
			class UW_LoadoutCategory_C*                        LoadoutCategory;
		} params;
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingTacticalSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_C*                            LoadoutItemWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonClicked__DelegateSignature(EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot, class UW_LoadoutItem_C* LoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39637);
		
		struct
		{
			EItemClass                                         ItemClass;
			unsigned char                                      UnknownData_0005[0x7];
			class ABaseItem*                                   ItemObjectClass;
			bool                                               bIsTactical;
			unsigned char                                      UnknownData_0006[0x3];
			int32_t                                            TacticalSlot;
			bool                                               bIsMultipleTacticalSlots;
			unsigned char                                      UnknownData_0007[0x3];
			int32_t                                            MaxTacticalSlots;
			int32_t                                            StartingTacticalSlot;
			unsigned char                                      UnknownData_0008[0x4];
			class UW_LoadoutItem_C*                            LoadoutItemWidget;
		} params;
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.StartingTacticalSlot = StartingTacticalSlot;
		params.LoadoutItemWidget = LoadoutItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutCategory_C::OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39636);
		
		struct
		{
			class UW_LoadoutCategory_C*                        LoadoutCategory;
		} params;
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutCategory_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39635);
		return ptr;
	}

}


