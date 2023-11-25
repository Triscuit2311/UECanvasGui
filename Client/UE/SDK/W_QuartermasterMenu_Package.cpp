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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::UnhoverAllCategories()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39503);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinCategory_C*                           SkinCategoryWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::UnhoverAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39502);
		
		struct
		{
			class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget;
			class UW_SkinCategory_C*                           SkinCategoryWidget;
		} params;
		params.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
		params.SkinCategoryWidget = SkinCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::CollapseAllCategories()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39501);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinCategory_C*                           SkinCategoryWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::CollapseAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39500);
		
		struct
		{
			class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget;
			class UW_SkinCategory_C*                           SkinCategoryWidget;
		} params;
		params.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
		params.SkinCategoryWidget = SkinCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnGunCleaned()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39499);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::CanCleanGun(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39498);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_QuartermasterMenu_C::Get_CleanGun_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39497);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FWeaponData>                         WeaponDataArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::AttemptCreateSkinCategory(TArray<struct FWeaponData>* WeaponDataArray, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39496);
		
		struct
		{
			TArray<struct FWeaponData>                         WeaponDataArray;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponDataArray != nullptr)
			*WeaponDataArray = params.WeaponDataArray;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::ScrollIntoView(class UWidget* WidgetToFind)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39495);
		
		struct
		{
			class UWidget*                                     WidgetToFind;
		} params;
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_QuartermasterMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39494);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::AnyAttachmentCategoryWidgetHovered(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39493);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::GetCurrentlyFocusedWidget(class UWidget** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39492);
		
		struct
		{
			class UWidget*                                     ReturnValue;
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowAttachmentCategory                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAttachmentCategory>                 AttachmentCategories                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAttachmentCategory                         AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::PopulateAttachmentCategory(bool bAllowAttachmentCategory, TArray<struct FAttachmentCategory>* AttachmentCategories, const struct FAttachmentCategory& AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39491);
		
		struct
		{
			bool                                               bAllowAttachmentCategory;
			unsigned char                                      UnknownData_0001[0x7];
			TArray<struct FAttachmentCategory>                 AttachmentCategories;
			struct FAttachmentCategory                         AttachmentCategory;
		} params;
		params.bAllowAttachmentCategory = bAllowAttachmentCategory;
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachmentCategories != nullptr)
			*AttachmentCategories = params.AttachmentCategories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::UnhoverAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39490);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidgetToFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::FocusOnWidget(class UWidget* InWidgetToFocus)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39489);
		
		struct
		{
			class UWidget*                                     InWidgetToFocus;
		} params;
		params.InWidgetToFocus = InWidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::Escape()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39488);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnselectAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::UnselectAttachmentCategory()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39487);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::SelectAttachmentCategory()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39486);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::UnhoverAttachmentCategory()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39485);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::HoverAttachmentCategory()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39484);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39483);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39482);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_QuartermasterMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39481);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::Exit()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39480);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   LoadoutItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::Enter(class ABaseItem* LoadoutItemClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39479);
		
		struct
		{
			class ABaseItem*                                   LoadoutItemClass;
		} params;
		params.LoadoutItemClass = LoadoutItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonClicked(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39478);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           AttachmentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnAttachmentItemButtonClicked(class UWeaponAttachment* AttachmentClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39477);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonHovered(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39476);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonUnhovered(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39475);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonClicked(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39474);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonHovered(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39473);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonUnhovered(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39472);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinComponent*                              SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::OnSkinItemButtonClicked(class USkinComponent* SkinClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39471);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39470);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39469);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39468);
		
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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_QuartermasterMenu_C::ExecuteUbergraph_W_QuartermasterMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39467);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0002[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_QuartermasterMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_QuartermasterMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39466);
		return ptr;
	}

}


