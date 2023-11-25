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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SequenceEvent__ENTRYPOINTW_LoadoutSlot_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SequenceEvent__ENTRYPOINTW_LoadoutSlot_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56756);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.DisableInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::DisableInteraction(bool Disabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56755);
		
		struct
		{
			bool                                               Disabled;
		} params;
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetCompactLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CompactLayout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetCompactLayout(bool CompactLayout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56754);
		
		struct
		{
			bool                                               CompactLayout;
		} params;
		params.CompactLayout = CompactLayout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetExclusiveLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetExclusiveLock()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56753);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ApplyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ApplyIcon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56752);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshArmourMaterialInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::RefreshArmourMaterialInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56751);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56750);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetAmmoCategoryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::GetAmmoCategoryText(class UObject* ItemData, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56749);
		
		struct
		{
			class UObject*                                     ItemData;
			class FText                                        Text;
		} params;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::RefreshAmmoInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56748);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetCountText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetCountText(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56747);
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetInvetoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::GetInvetoryCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56746);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetEquipped(bool Equipped)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56745);
		
		struct
		{
			bool                                               Equipped;
		} params;
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TSoftObjectPtr<class UTexture2D>                   Image                                                      (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::GetItemIcon(TSoftObjectPtr<class UTexture2D>* Image)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56744);
		
		struct
		{
			TSoftObjectPtr<class UTexture2D>                   Image;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.RefreshItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::RefreshItemInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56743);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MinimalLayout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetLayout(bool MinimalLayout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56742);
		
		struct
		{
			bool                                               MinimalLayout;
		} params;
		params.MinimalLayout = MinimalLayout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetIsSuppressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuppressed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::GetIsSuppressed(bool* IsSuppressed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56741);
		
		struct
		{
			bool                                               IsSuppressed;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSuppressed != nullptr)
			*IsSuppressed = params.IsSuppressed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.GetHoverState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_LoadoutSlot_C::GetHoverState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56740);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetActive(bool IsActive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56739);
		
		struct
		{
			bool                                               IsActive;
		} params;
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnLoaded_2301B5524398E883D7B4A9A8DD59E91D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnLoaded_2301B5524398E883D7B4A9A8DD59E91D(class UObject* Loaded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56738);
		
		struct
		{
			class UObject*                                     Loaded;
		} params;
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnLoaded_FCECFCDB446A3843E9F216BC9A4A7723
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnLoaded_FCECFCDB446A3843E9F216BC9A4A7723(class UObject* Loaded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56737);
		
		struct
		{
			class UObject*                                     Loaded;
		} params;
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.Finished_D51AD9A24CFA959F985A078C69194B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::Finished_D51AD9A24CFA959F985A078C69194B2E()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56736);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56735);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::InitializeItemData(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56734);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAsListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::InitializeAsListItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56733);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56732);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56731);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56730);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAsSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::InitializeAsSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56729);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ReinitializeItemData(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56728);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ForceClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ForceClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56727);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ForceDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ForceDoubleClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56726);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeAmmoData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Primary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::InitializeAmmoData(bool Primary, const class FName& AmmoType, class ABaseItem* Weapon, int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56725);
		
		struct
		{
			bool                                               Primary;
			unsigned char                                      UnknownData_0000[0x3];
			class FName                                        AmmoType;
			unsigned char                                      UnknownData_0001[0x4];
			class ABaseItem*                                   Weapon;
			int32_t                                            AmmoCount;
		} params;
		params.Primary = Primary;
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.Collapse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::Collapse()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56724);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56723);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56722);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.InitializeArmourMaterialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::InitializeArmourMaterialData(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56721);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49078);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49077);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49076);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49075);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeAmmoData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Primary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ReinitializeAmmoData(bool Primary, const class FName& AmmoType, class ABaseItem* Weapon, int32_t AmmoCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49074);
		
		struct
		{
			bool                                               Primary;
			unsigned char                                      UnknownData_0002[0x3];
			class FName                                        AmmoType;
			unsigned char                                      UnknownData_0003[0x4];
			class ABaseItem*                                   Weapon;
			int32_t                                            AmmoCount;
		} params;
		params.Primary = Primary;
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ReinitializeArmorMaterialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ReinitializeArmorMaterialData(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49073);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49072);
		
		struct
		{
			class UObject*                                     ListItemObject;
		} params;
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ApplyAugment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ApplyAugment()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49071);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateAugment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AugmentText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::UpdateAugment(const class FText& AugmentText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49070);
		
		struct
		{
			class FText                                        AugmentText;
		} params;
		params.AugmentText = AugmentText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49069);
		
		struct
		{
			bool                                               bIsSelected;
		} params;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49068);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.UpdateAmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::UpdateAmmoCount(int32_t Count)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49067);
		
		struct
		{
			int32_t                                            Count;
		} params;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49066);
		
		struct
		{
			bool                                               bIsExpanded;
		} params;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BP_OnEntryReleased()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49065);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49064);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ExpandReveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ExpandReveal()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49063);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.ExecuteUbergraph_W_LoadoutSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::ExecuteUbergraph_W_LoadoutSlot(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49062);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0004[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnSlotDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49061);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49060);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49059);
		
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
	 * 		Name   -> Function W_LoadoutSlot.W_LoadoutSlot_C.OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutSlot_C::OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49058);
		
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
	 * 		Name   -> PredefinedFunction UW_LoadoutSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutSlot_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49057);
		return ptr;
	}

}


