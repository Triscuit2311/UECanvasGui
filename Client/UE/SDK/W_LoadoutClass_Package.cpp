﻿/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.UpdateItemNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::UpdateItemNameText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58636);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.GetCurrentMenuDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::GetCurrentMenuDirectory(class FText* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58635);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.EnterPresetsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::EnterPresetsMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58634);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.ExitPresetsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::ExitPresetsMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58633);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::Escape()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58632);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.UnselectUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::UnselectUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58631);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SelectUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SelectUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58630);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.UnhoverUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::UnhoverUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58629);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.HoverUIElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::HoverUIElement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58628);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutClass_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58627);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.CanExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::CanExit(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58626);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.GetAllUncollapsedLoadoutItemWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UW_LoadoutItem_C*>                    ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::GetAllUncollapsedLoadoutItemWidgets(TArray<class UW_LoadoutItem_C*>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58625);
		
		struct
		{
			TArray<class UW_LoadoutItem_C*>                    ReturnValue;
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_LoadoutClass_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58624);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.GetAllTacticalDeviceClassesExpectGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::GetAllTacticalDeviceClassesExpectGrenades(TArray<class ABaseItem*>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58623);
		
		struct
		{
			TArray<class ABaseItem*>                           ReturnValue;
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.GetAllGrenadeClasses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseGrenade*>                        ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::GetAllGrenadeClasses(TArray<class ABaseGrenade*>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58622);
		
		struct
		{
			TArray<class ABaseGrenade*>                        ReturnValue;
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutClass_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58621);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.UnhoverLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::UnhoverLoadoutItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58620);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.HoverLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::HoverLoadoutItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58619);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.UnselectLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::UnselectLoadoutItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58618);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SelectLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SelectLoadoutItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58617);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.PreviousColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::PreviousColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58616);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.NextColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::NextColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(58615);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57968);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57967);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutClass_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57966);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SimulateClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SimulateClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57965);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SimulateUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SimulateUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57964);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SimulateHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SimulateHover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57963);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.SelectActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::SelectActiveLoadout()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57962);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.ShowSelectedItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::ShowSelectedItemInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57961);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.HideSelectedItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::HideSelectedItemInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57960);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItemWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57959);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.CreateLoadoutItemWidget
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
	void UW_LoadoutClass_C::CreateLoadoutItemWidget(const class FText& LoadoutItemName, EItemClass ItemClass, class ABaseItem* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57958);
		
		struct
		{
			class FText                                        LoadoutItemName;
			EItemClass                                         ItemClass;
			unsigned char                                      UnknownData_0000[0x7];
			class ABaseItem*                                   ItemObjectClass;
			bool                                               bIsTactical;
			unsigned char                                      UnknownData_0001[0x3];
			int32_t                                            TacticalSlot;
			bool                                               bIsMultipleTacticalSlots;
			unsigned char                                      UnknownData_0002[0x3];
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.InitializeLoadoutItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::InitializeLoadoutItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57957);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.DeselectAllExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            InLoadoutItemWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::DeselectAllExcept(class UW_LoadoutItem_C* InLoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57956);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.RemoveAllChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::RemoveAllChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57955);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.ExpandChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::ExpandChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57954);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.CollapseChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetPreviewAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::CollapseChildren(bool bResetPreviewAnim)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57953);
		
		struct
		{
			bool                                               bResetPreviewAnim;
			unsigned char                                      UnknownData_0003[0x3];
		} params;
		params.bResetPreviewAnim = bResetPreviewAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57952);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57951);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57950);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57949);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57948);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57947);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57946);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57945);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.ExecuteUbergraph_W_LoadoutClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::ExecuteUbergraph_W_LoadoutClass(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57944);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnButtonHovered__DelegateSignature(class UW_LoadoutClass_C* LoadoutClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57943);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnChildButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItemWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnChildButtonClicked__DelegateSignature(class UW_LoadoutItem_C* LoadoutItemWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57942);
		
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
	 * 		Name   -> Function W_LoadoutClass.W_LoadoutClass_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClassWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutClass_C::OnButtonClicked__DelegateSignature(class UW_LoadoutClass_C* LoadoutClassWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57941);
		
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
	 * 		Name   -> PredefinedFunction UW_LoadoutClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutClass_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(57940);
		return ptr;
	}

}

