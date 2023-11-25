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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetCount(int32_t Count)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40238);
		
		struct
		{
			int32_t                                            Count;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetSlotVisibility(bool IsGrenade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40237);
		
		struct
		{
			bool                                               IsGrenade;
		} params;
		params.IsGrenade = IsGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UW_LoadoutSlot_C* UW_Loadout_MunitionSlots_Deployable_C::GetSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40236);
		
		struct
		{
			class UW_LoadoutSlot_C*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCountControls                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::DisplayCountControls(bool ShowCountControls)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40235);
		
		struct
		{
			bool                                               ShowCountControls;
		} params;
		params.ShowCountControls = ShowCountControls;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40234);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40233);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40232);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40231);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40230);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40229);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40228);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetItemClass(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40227);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40226);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40225);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ToggleAddButton(bool Enabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40224);
		
		struct
		{
			bool                                               Enabled;
		} params;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ForceClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ForceClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40223);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40222);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40221);
		
		struct
		{
			class UW_LoadoutSlot_C*                            LoadoutSlot;
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40220);
		
		struct
		{
			class UW_LoadoutSlot_C*                            LoadoutSlot;
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40219);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot;
			class UW_LoadoutSlot_C*                            LoadoutSlot;
		} params;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		params.LoadoutSlot = LoadoutSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnMinusClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40218);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot;
		} params;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnAddClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40217);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot;
		} params;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_MunitionSlots_Deployable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_MunitionSlots_Deployable_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40216);
		return ptr;
	}

}


