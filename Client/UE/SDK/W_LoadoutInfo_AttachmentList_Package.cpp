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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.CheckCurrentAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWeaponAttachment*>                   Attachments                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::CheckCurrentAttachments(TArray<class UWeaponAttachment*>* Attachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46538);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetIsNullAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNull                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::GetIsNullAttachment(class UWeaponAttachment* AttachmentData, bool* IsNull)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46537);
		
		struct
		{
			class UWeaponAttachment*                           AttachmentData;
			bool                                               IsNull;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNull != nullptr)
			*IsNull = params.IsNull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArraySidearm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentArraySidearm()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46536);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArrayPrimary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentArrayPrimary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46535);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetCurrentAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWeaponAttachment*>                   Attachments                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::GetCurrentAttachments(TArray<class UWeaponAttachment*>* Attachments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46534);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Finished_EC73150B49B091C3F6FAB48DDD93DD29
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::Finished_EC73150B49B091C3F6FAB48DDD93DD29()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46533);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46532);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46531);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46530);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46529);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46528);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46527);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46526);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RefreshList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class ABaseItem*                                   ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Restricted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::RefreshList(const struct FSavedLoadout& ActiveLoadout, class ABaseItem* ItemClass, bool Restricted)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46525);
		
		struct
		{
			struct FSavedLoadout                               ActiveLoadout;
			class ABaseItem*                                   ItemClass;
			bool                                               Restricted;
		} params;
		params.ActiveLoadout = ActiveLoadout;
		params.ItemClass = ItemClass;
		params.Restricted = Restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46524);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46523);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46522);
		
		struct
		{
			class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy;
		} params;
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RemoveAttachmentClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::RemoveAttachmentClicked(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46521);
		
		struct
		{
			class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy;
		} params;
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::ExecuteUbergraph_W_LoadoutInfo_AttachmentList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46520);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnRemoveAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnRemoveAttachmentClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46519);
		
		struct
		{
			class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry;
		} params;
		params.TriggeringListEntry = TriggeringListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnAttachmentItemClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeringListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46518);
		
		struct
		{
			class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeringListEntry;
		} params;
		params.TriggeringListEntry = TriggeringListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnModifyWeaponButtonClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentList_C::OnModifyWeaponButtonClick__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46517);
		
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
	 * 		Name   -> PredefinedFunction UW_LoadoutInfo_AttachmentList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutInfo_AttachmentList_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(46516);
		return ptr;
	}

}


