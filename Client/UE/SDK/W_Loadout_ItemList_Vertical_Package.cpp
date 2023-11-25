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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedArmourMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedArmourMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48990);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAmmo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48989);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateArmourMaterialLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateArmourMaterialLoadoutWidgetItem(class UArmourMaterial* ArmourMaterial, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48988);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateArmourMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateArmourMaterials()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48987);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateAmmoLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateAmmoLoadoutWidgetItem(const class FName& AmmoType, class ABaseItem* Weapon, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48986);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateAmmo(TArray<class FName>* AmmoTypes, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48985);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPage(int32_t Page)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48984);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToTargetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToTargetIndex(int32_t ItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48983);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48982);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToNextItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48981);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48980);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToNextPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48979);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateScrollPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateScrollPage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48978);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetupScrollPagination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::SetupScrollPagination()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48977);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48976);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAttachments()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48975);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48974);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetListItemPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UScrollBoxSlot*                              ScrollBoxSlotItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::SetListItemPadding(bool IsFirstItem, class UScrollBoxSlot* ScrollBoxSlotItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48973);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWeaponAttachment*>                   Attachments                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateAttachments(TArray<class UWeaponAttachment*>* Attachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48972);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               RefreshAttachments                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquipped(const struct FSavedLoadout& ActiveLoadout, bool RefreshAttachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48971);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SortItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::SortItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48970);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScrollBoxSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateLoadoutWidgetItem(class ABaseItem* ItemData, class UScrollBoxSlot** AsScrollBoxSlot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48969);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.GetItemArrayBySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::GetItemArrayBySlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48968);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateItems(TArray<struct FLoadoutCategory>* GearCategoryClasses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48967);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateSubnav
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateSubnav()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48966);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OpenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OpenList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48965);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48964);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48963);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48962);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollOpenedToEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollOpenedToEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48961);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48960);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeLoadoutList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeLoadoutList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48959);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48958);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48957);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48956);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48955);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48954);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48953);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeAttachmentList(class ABaseItem* ItemData, EWeaponAttachmentType AttachmentType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48952);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48951);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::HideList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48950);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48949);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeDeployableList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABaseItem*>                           ExcludedItems                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeDeployableList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class ABaseItem*> ExcludedItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48948);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48947);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAmmoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ExcludedAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeAmmoList(const class FName& ExcludedAmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48946);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48945);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48944);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48943);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48942);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeArmourMaterialList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeArmourMaterialList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48941);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SubnavButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 TriggeringButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::SubnavButtonClicked(class UW_Button_C* TriggeringButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48940);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48939);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48938);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48937);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48936);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48935);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48934);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48933);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48932);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ExecuteUbergraph_W_Loadout_ItemList_Vertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::ExecuteUbergraph_W_Loadout_ItemList_Vertical(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48931);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48930);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48929);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48928);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialHovered__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48927);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialDoubleClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48926);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48925);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemDoubleClicked__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48924);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemHovered__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48923);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48922);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48921);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemClicked__DelegateSignature(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48920);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemDoubleClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48919);
		
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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48918);
		
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
	 * 		Name   -> PredefinedFunction UW_Loadout_ItemList_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_ItemList_Vertical_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48917);
		return ptr;
	}

}


