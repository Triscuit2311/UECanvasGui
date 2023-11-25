﻿/**
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedArmourMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::RefreshEquippedArmourMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56571);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::RefreshEquippedAmmo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56570);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateArmourMaterialLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::CreateArmourMaterialLoadoutWidgetItem(class UArmourMaterial* ArmourMaterial, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56569);
		
		struct
		{
			class UArmourMaterial*                             ArmourMaterial;
			class UScrollBoxSlot*                              AsScrollBoxSlot;
			class UW_LoadoutSlot_C*                            LoadoutSlotWidget;
		} params;
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScrollBoxSlot != nullptr)
			*AsScrollBoxSlot = params.AsScrollBoxSlot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateArmourMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PopulateArmourMaterials()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56568);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateAmmoLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::CreateAmmoLoadoutWidgetItem(const class FName& AmmoType, class ABaseItem* Weapon, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56567);
		
		struct
		{
			class FName                                        AmmoType;
			class ABaseItem*                                   Weapon;
			class UScrollBoxSlot*                              AsScrollBoxSlot;
			class UW_LoadoutSlot_C*                            LoadoutSlotWidget;
		} params;
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScrollBoxSlot != nullptr)
			*AsScrollBoxSlot = params.AsScrollBoxSlot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PopulateAmmo(TArray<class FName>* AmmoTypes, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56566);
		
		struct
		{
			TArray<class FName>                                AmmoTypes;
			class ABaseItem*                                   Weapon;
		} params;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToPage(int32_t Page)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56565);
		
		struct
		{
			int32_t                                            Page;
		} params;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToTargetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToTargetIndex(int32_t ItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56564);
		
		struct
		{
			int32_t                                            ItemIndex;
		} params;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPreviousItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToPreviousItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56563);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToNextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToNextItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56562);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToPreviousPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToPreviousPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56561);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToNextPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToNextPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56560);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateScrollPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::UpdateScrollPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56559);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetupScrollPagination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::SetupScrollPagination()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56558);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollToEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollToEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56557);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::RefreshEquippedAttachments()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56556);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquippedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::RefreshEquippedItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56555);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetListItemPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UScrollBoxSlot*                              ScrollBoxSlotItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::SetListItemPadding(bool IsFirstItem, class UScrollBoxSlot* ScrollBoxSlotItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56554);
		
		struct
		{
			bool                                               IsFirstItem;
			unsigned char                                      UnknownData_0000[0x7];
			class UScrollBoxSlot*                              ScrollBoxSlotItem;
		} params;
		params.IsFirstItem = IsFirstItem;
		params.ScrollBoxSlotItem = ScrollBoxSlotItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWeaponAttachment*>                   Attachments                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PopulateAttachments(TArray<class UWeaponAttachment*>* Attachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56553);
		
		struct
		{
			TArray<class UWeaponAttachment*>                   Attachments;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.RefreshEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               RefreshAttachments                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::RefreshEquipped(const struct FSavedLoadout& ActiveLoadout, bool RefreshAttachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56552);
		
		struct
		{
			struct FSavedLoadout                               ActiveLoadout;
			bool                                               RefreshAttachments;
		} params;
		params.ActiveLoadout = ActiveLoadout;
		params.RefreshAttachments = RefreshAttachments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.SortItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::SortItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56551);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.CreateLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::CreateLoadoutWidgetItem(class ABaseItem* ItemData, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56550);
		
		struct
		{
			class ABaseItem*                                   ItemData;
			class UScrollBoxSlot*                              AsScrollBoxSlot;
			class UW_LoadoutSlot_C*                            LoadoutSlotWidget;
		} params;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScrollBoxSlot != nullptr)
			*AsScrollBoxSlot = params.AsScrollBoxSlot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.GetItemArrayBySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::GetItemArrayBySlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56549);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PopulateItems(TArray<struct FLoadoutCategory>* GearCategoryClasses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56548);
		
		struct
		{
			TArray<struct FLoadoutCategory>                    GearCategoryClasses;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearCategoryClasses != nullptr)
			*GearCategoryClasses = params.GearCategoryClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PopulateSubnav
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PopulateSubnav()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56547);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeLoadoutList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::InitializeLoadoutList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56546);
		
		struct
		{
			EItemCategory                                      LoadoutSlot;
			unsigned char                                      UnknownData_0001[0x7];
			TArray<struct FLoadoutCategory>                    GearCategoryClasses;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		params.GearCategoryClasses = GearCategoryClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.SubnavButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 TriggeringButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::SubnavButtonClicked(class UW_Button_C* TriggeringButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56545);
		
		struct
		{
			class UW_Button_C*                                 TriggeringButton;
		} params;
		params.TriggeringButton = TriggeringButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeAttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::InitializeAttachmentList(class ABaseItem* ItemData, EWeaponAttachmentType AttachmentType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56544);
		
		struct
		{
			class ABaseItem*                                   ItemData;
			EWeaponAttachmentType                              AttachmentType;
		} params;
		params.ItemData = ItemData;
		params.AttachmentType = AttachmentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::HideList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56543);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56542);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OpenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OpenList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56541);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56540);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment;
		} params;
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56539);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment;
		} params;
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56538);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56537);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56536);
		
		struct
		{
			struct FSavedLoadout                               ActiveLoadout;
		} params;
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56535);
		
		struct
		{
			TMap<EItemCategory, class ABaseItem*>              ItemCategory;
		} params;
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56534);
		
		struct
		{
			class UW_LoadoutSlot_C*                            CurrentSlot;
		} params;
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ScrollOpenedToEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ScrollOpenedToEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56533);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56532);
		
		struct
		{
			float                                              CurrentOffset;
		} params;
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56531);
		
		struct
		{
			float                                              Delay;
			bool                                               Collapse;
		} params;
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56530);
		
		struct
		{
			float                                              Delay;
		} params;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeDeployableList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABaseItem*>                           ExcludedItems                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::InitializeDeployableList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class ABaseItem*> ExcludedItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56529);
		
		struct
		{
			EItemCategory                                      LoadoutSlot;
			unsigned char                                      UnknownData_0002[0x7];
			TArray<struct FLoadoutCategory>                    GearCategoryClasses;
			TArray<class ABaseItem*>                           ExcludedItems;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		params.GearCategoryClasses = GearCategoryClasses;
		params.ExcludedItems = ExcludedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56528);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeAmmoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ExcludedAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::InitializeAmmoList(const class FName& ExcludedAmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56527);
		
		struct
		{
			class FName                                        ExcludedAmmoType;
			class ABaseItem*                                   Weapon;
		} params;
		params.ExcludedAmmoType = ExcludedAmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56526);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56525);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56524);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56523);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.InitializeArmourMaterialList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::InitializeArmourMaterialList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56522);
		
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
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56521);
		
		struct
		{
			class UW_Loadout_C*                                LoadoutWidget;
		} params;
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56520);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56519);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56518);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TrigeringItem;
		} params;
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AttachmentItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48640);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment;
		} params;
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48639);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.LoadoutItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48638);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.AmmoItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48637);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringItem;
		} params;
		params.TriggeringItem = TriggeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ArmourMaterialUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48636);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringItem;
		} params;
		params.TriggeringItem = TriggeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.ExecuteUbergraph_W_Loadout_ItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::ExecuteUbergraph_W_Loadout_ItemList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48635);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0003[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnLoadoutItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48634);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnLoadoutItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48633);
		
		struct
		{
			class UW_LoadoutSlot_C*                            TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAttachmentUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48632);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment;
		} params;
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnArmourMaterialHovered__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48631);
		
		struct
		{
			class UArmourMaterial*                             ArmourMaterial;
		} params;
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnArmourMaterialDoubleClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48630);
		
		struct
		{
			class UArmourMaterial*                             ArmourMaterial;
		} params;
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnArmourMaterialClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48629);
		
		struct
		{
			class UArmourMaterial*                             ArmourMaterial;
		} params;
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAmmoItemDoubleClicked__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48628);
		
		struct
		{
			class FName                                        AmmoType;
		} params;
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAmmoItemHovered__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48627);
		
		struct
		{
			class FName                                        AmmoType;
		} params;
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAmmoItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48626);
		
		struct
		{
			class FName                                        AmmoType;
			class ABaseItem*                                   Weapon;
		} params;
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAttachmentItemHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48625);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment;
		} params;
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnAttachmentItemClicked__DelegateSignature(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48624);
		
		struct
		{
			class ABaseItem*                                   AttachingWeapon;
			class UWeaponAttachment*                           AttachmentData;
		} params;
		params.AttachingWeapon = AttachingWeapon;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnLoadoutItemDoubleClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48623);
		
		struct
		{
			class ABaseItem*                                   ItemData;
		} params;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList.W_Loadout_ItemList_C.OnLoadoutItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_C::OnLoadoutItemClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48622);
		
		struct
		{
			class ABaseItem*                                   ItemData;
		} params;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_ItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_ItemList_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48621);
		return ptr;
	}

}


