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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePreviewSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               PreviewLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializePreviewSummary(const struct FSavedLoadout& PreviewLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40385);
		
		struct
		{
			struct FSavedLoadout                               PreviewLoadout;
		} params;
		params.PreviewLoadout = PreviewLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GroupAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AmmoType2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                GroupedAmmo                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GroupAmmo(const class FName& AmmoType1, int32_t AmmoCount1, const class FName& AmmoType2, int32_t AmmoCount2, TArray<class FName>* GroupedAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40384);
		
		struct
		{
			class FName                                        AmmoType1;
			int32_t                                            AmmoCount1;
			class FName                                        AmmoType2;
			int32_t                                            AmmoCount2;
			TArray<class FName>                                GroupedAmmo;
		} params;
		params.AmmoType1 = AmmoType1;
		params.AmmoCount1 = AmmoCount1;
		params.AmmoType2 = AmmoType2;
		params.AmmoCount2 = AmmoCount2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupedAmmo != nullptr)
			*GroupedAmmo = params.GroupedAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurrentAmmoType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceSidearmAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40383);
		
		struct
		{
			class FName                                        CurrentAmmoType;
			class FName                                        NewAmmoType;
		} params;
		params.CurrentAmmoType = CurrentAmmoType;
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplacePrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurrentAmmoType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::ReplacePrimaryAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40382);
		
		struct
		{
			class FName                                        CurrentAmmoType;
			class FName                                        NewAmmoType;
		} params;
		params.CurrentAmmoType = CurrentAmmoType;
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditorChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::RevealSlotEditorChildren(float* Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40381);
		
		struct
		{
			float                                              Delay;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditorChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HideSlotEditorChildren(float* Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40380);
		
		struct
		{
			float                                              Delay;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SwapWeaponAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sidearm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SwapWeaponAmmo(bool Sidearm)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40379);
		
		struct
		{
			bool                                               Sidearm;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.Sidearm = Sidearm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetTacticalAddButtonVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetTacticalAddButtonVis()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40378);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpTacticalSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::FreeUpTacticalSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40377);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddTacticalType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::AddTacticalType()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40376);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetGrenadeAddButtonVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetGrenadeAddButtonVis()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40375);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllGrenadeTypes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetAllGrenadeTypes()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40374);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40373);
		
		struct
		{
			class UW_Loadout_C*                                LoadoutWidget;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadoutWidget != nullptr)
			*LoadoutWidget = params.LoadoutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpGrenadeSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::FreeUpGrenadeSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40372);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateGrenadeSlots()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40371);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddGrenadeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::AddGrenadeType()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40370);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTacticalSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTacticalSummary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40369);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateGrenadeSummary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40368);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSidearmSummary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40367);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdatePrimarySummary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40366);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateItemSummaryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::CreateItemSummaryEntry(class ABaseItem* ItemData, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40365);
		
		struct
		{
			class ABaseItem*                                   ItemData;
			int32_t                                            Count;
			unsigned char                                      UnknownData_0001[0x4];
			class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget;
		} params;
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryWidget != nullptr)
			*EntryWidget = params.EntryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateAmmoSummaryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::CreateAmmoSummaryEntry(class ABaseItem* Weapon, const class FName& AmmoType, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40364);
		
		struct
		{
			class ABaseItem*                                   Weapon;
			class FName                                        AmmoType;
			int32_t                                            Count;
			unsigned char                                      UnknownData_0002[0x4];
			class UW_Loadout_Munition_SummaryEntry_C*          EntryWidget;
		} params;
		params.Weapon = Weapon;
		params.AmmoType = AmmoType;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryWidget != nullptr)
			*EntryWidget = params.EntryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSummary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40363);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetActiveLoadout(struct FSavedLoadout* ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40362);
		
		struct
		{
			struct FSavedLoadout                               ActiveLoadout;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveLoadout != nullptr)
			*ActiveLoadout = params.ActiveLoadout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetSidearmDefaultAmmoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleAmmoType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetSidearmDefaultAmmoType(class FName* Output, bool* SingleAmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40361);
		
		struct
		{
			class FName                                        Output;
			bool                                               SingleAmmoType;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (SingleAmmoType != nullptr)
			*SingleAmmoType = params.SingleAmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetPrimaryDefaultAmmoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleAmmoType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetPrimaryDefaultAmmoType(class FName* Output, bool* SingleAmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40360);
		
		struct
		{
			class FName                                        Output;
			bool                                               SingleAmmoType;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (SingleAmmoType != nullptr)
			*SingleAmmoType = params.SingleAmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HandleRemainderSidearmAmmo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40359);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderPrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HandleRemainderPrimaryAmmo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40358);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionSlotEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateMunitionSlotEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40357);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionEditorTotalSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateMunitionEditorTotalSlotCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40356);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlotEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializeMunitionSlotEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40355);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalSidearmSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalSidearmSlotCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40354);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalPrimarySlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalPrimarySlotCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40353);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalTacticalSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalTacticalSlotCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40352);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalGrenadeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateTotalGrenadeCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40351);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   CurrentTactical                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   NewTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceTactical(class ABaseItem* CurrentTactical, class ABaseItem* NewTactical)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40350);
		
		struct
		{
			class ABaseItem*                                   CurrentTactical;
			class ABaseItem*                                   NewTactical;
		} params;
		params.CurrentTactical = CurrentTactical;
		params.NewTactical = NewTactical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::EquipTactical(class ABaseItem* ItemData, int32_t Count)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40349);
		
		struct
		{
			class ABaseItem*                                   ItemData;
			int32_t                                            Count;
			unsigned char                                      UnknownData_0005[0x4];
		} params;
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectTacticalType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SelectTacticalType(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40348);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   CurrentGrenade                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   NewGrenade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::ReplaceGrenades(class ABaseItem* CurrentGrenade, class ABaseItem* NewGrenade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40347);
		
		struct
		{
			class ABaseItem*                                   CurrentGrenade;
			class ABaseItem*                                   NewGrenade;
		} params;
		params.CurrentGrenade = CurrentGrenade;
		params.NewGrenade = NewGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::EquipGrenades(class ABaseItem* ItemData, int32_t Count)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40346);
		
		struct
		{
			class ABaseItem*                                   ItemData;
			int32_t                                            Count;
			unsigned char                                      UnknownData_0006[0x4];
		} params;
		params.ItemData = ItemData;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectGrenadeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SelectGrenadeType(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40345);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotMinusCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::TacticalSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40344);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotAddCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::TacticalSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40343);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateTacticalSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Tactical                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::CreateTacticalSlot(class ABaseItem* Tactical, const class FText& CategoryText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40342);
		
		struct
		{
			class ABaseItem*                                   Tactical;
			class FText                                        CategoryText;
		} params;
		params.Tactical = Tactical;
		params.CategoryText = CategoryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeTacticals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Tacticals                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializeTacticals(TArray<class ABaseItem*>* Tacticals)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40341);
		
		struct
		{
			TArray<class ABaseItem*>                           Tacticals;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tacticals != nullptr)
			*Tacticals = params.Tacticals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotMinusCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40340);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotAddCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40339);
		
		struct
		{
			class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentData()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40338);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetSidearmAmmoCount2(int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40337);
		
		struct
		{
			int32_t                                            AmmoCount;
		} params;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetSidearmAmmoCount1(int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40336);
		
		struct
		{
			int32_t                                            AmmoCount;
		} params;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoCount2(int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40335);
		
		struct
		{
			int32_t                                            AmmoCount;
		} params;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoCount1(int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40334);
		
		struct
		{
			int32_t                                            AmmoCount;
		} params;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoType1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetPrimaryAmmoType1(const class FName& AmmoType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40333);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateSidearmSlots()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40332);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdatePrimarySlots()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40331);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSidearm2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HideSidearm2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40330);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplaySidearm2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::DisplaySidearm2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40329);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializeSidearmAmmo(TArray<class FName>* AmmoTypes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40328);
		
		struct
		{
			TArray<class FName>                                AmmoTypes;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializePrimaryAmmo(TArray<class FName>* AmmoTypes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40327);
		
		struct
		{
			TArray<class FName>                                AmmoTypes;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HidePrimary2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HidePrimary2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40326);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplayPrimary2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::DisplayPrimary2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40325);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SplitSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewStack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OriginalStack                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SplitSlots(int32_t TotalSlots, int32_t* NewStack, int32_t* OriginalStack)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40324);
		
		struct
		{
			int32_t                                            TotalSlots;
			int32_t                                            NewStack;
			int32_t                                            OriginalStack;
		} params;
		params.TotalSlots = TotalSlots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewStack != nullptr)
			*NewStack = params.NewStack;
		if (OriginalStack != nullptr)
			*OriginalStack = params.OriginalStack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateDeployableSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::CreateDeployableSlot(bool IsGrenade, class ABaseItem* ItemData, const class FText& CategoryText, class UW_Loadout_MunitionSlots_Deployable_C** OutputPin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40323);
		
		struct
		{
			bool                                               IsGrenade;
			unsigned char                                      UnknownData_0007[0x7];
			class ABaseItem*                                   ItemData;
			class FText                                        CategoryText;
			class UW_Loadout_MunitionSlots_Deployable_C*       OutputPin;
		} params;
		params.IsGrenade = IsGrenade;
		params.ItemData = ItemData;
		params.CategoryText = CategoryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllDeployableItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GetAllDeployableItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40322);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Initialize Deployables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenades                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializeDeployables(bool IsGrenades)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40321);
		
		struct
		{
			bool                                               IsGrenades;
			unsigned char                                      UnknownData_0008[0x3];
		} params;
		params.IsGrenades = IsGrenades;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RemotePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::InitializeMunitionSlots(bool RemotePlayer, bool Preview)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40320);
		
		struct
		{
			bool                                               RemotePlayer;
			bool                                               Preview;
		} params;
		params.RemotePlayer = RemotePlayer;
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetupBinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetupBinds()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40319);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40318);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40317);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40316);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40315);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40314);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40313);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SlotClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40312);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SlotHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40311);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40310);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40309);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40308);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40307);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40306);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40305);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40304);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40303);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40302);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40301);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotClicked(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40300);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotHovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40299);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::DeployableSlotUnhovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40298);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40297);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40296);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40295);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40294);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40293);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40292);
		
		struct
		{
			class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40291);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40290);
		
		struct
		{
			class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40289);
		
		struct
		{
			class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40288);
		
		struct
		{
			class UW_Loadout_MunitionCountSlot_C*              TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryWeaponChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryWeaponChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40287);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmWeaponChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SidearmWeaponChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40286);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryAmmoChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40285);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SidearmAmmoChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40284);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoCountSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::SidearmAmmoCountSaved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40283);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoCountSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::PrimaryAmmoCountSaved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40282);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeCountSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeCountSaved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40281);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::GrenadeEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40280);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::TacticalEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40279);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalCountSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::TacticalCountSaved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40278);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40277);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40276);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::RevealSlotEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40275);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::HideSlotEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40274);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AmmoSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewAmmoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::AmmoSelected(const class FName& NewAmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40273);
		
		struct
		{
			class FName                                        NewAmmoType;
			class ABaseItem*                                   Weapon;
		} params;
		params.NewAmmoType = NewAmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ExecuteUbergraph_W_Loadout_MunitionSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::ExecuteUbergraph_W_Loadout_MunitionSlots(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40272);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0009[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnGrenadesChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Grenades                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnGrenadesChanged__DelegateSignature(TArray<class ABaseItem*>* Grenades)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40271);
		
		struct
		{
			TArray<class ABaseItem*>                           Grenades;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grenades != nullptr)
			*Grenades = params.Grenades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnPrimaryAmmoChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                PrimaryAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnPrimaryAmmoChanged__DelegateSignature(TArray<class FName>* PrimaryAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40270);
		
		struct
		{
			TArray<class FName>                                PrimaryAmmo;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimaryAmmo != nullptr)
			*PrimaryAmmo = params.PrimaryAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnSidearmAmmoChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SidearmAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnSidearmAmmoChanged__DelegateSignature(TArray<class FName>* SidearmAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40269);
		
		struct
		{
			TArray<class FName>                                SidearmAmmo;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SidearmAmmo != nullptr)
			*SidearmAmmo = params.SidearmAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotCountChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrimaryAmmoSlotCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SidearmAmmoSlotCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GrenadeSlotCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TacticalSlotCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotCountChanged__DelegateSignature(int32_t PrimaryAmmoSlotCount, int32_t SidearmAmmoSlotCount, int32_t GrenadeSlotCount, int32_t TacticalSlotCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40268);
		
		struct
		{
			int32_t                                            PrimaryAmmoSlotCount;
			int32_t                                            SidearmAmmoSlotCount;
			int32_t                                            GrenadeSlotCount;
			int32_t                                            TacticalSlotCount;
		} params;
		params.PrimaryAmmoSlotCount = PrimaryAmmoSlotCount;
		params.SidearmAmmoSlotCount = SidearmAmmoSlotCount;
		params.GrenadeSlotCount = GrenadeSlotCount;
		params.TacticalSlotCount = TacticalSlotCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40267);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40266);
		
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
	 * 		Name   -> Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_MunitionSlots_C::OnMunitionSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40265);
		
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
	 * 		Name   -> PredefinedFunction UW_Loadout_MunitionSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_MunitionSlots_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40264);
		return ptr;
	}

}


