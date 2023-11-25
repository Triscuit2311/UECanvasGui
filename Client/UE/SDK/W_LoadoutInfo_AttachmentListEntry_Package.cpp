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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           AttachmentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::SetInfo(class UWeaponAttachment* AttachmentClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46508);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46507);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46506);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46505);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46504);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46503);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46502);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46501);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46500);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46499);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46498);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46497);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::BndEvt__W_LoadoutInfo_AttachmentListEntry_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46496);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46495);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnRemoveClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::OnRemoveClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46494);
		
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
	 * 		Name   -> Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutInfo_AttachmentListEntry_C*        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutInfo_AttachmentListEntry_C::OnClicked__DelegateSignature(class UW_LoadoutInfo_AttachmentListEntry_C* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46493);
		
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
	 * 		Name   -> PredefinedFunction UW_LoadoutInfo_AttachmentListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutInfo_AttachmentListEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(46492);
		return ptr;
	}

}


