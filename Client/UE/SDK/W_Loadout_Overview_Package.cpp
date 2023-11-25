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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.ShowPresetModified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Modified                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::ShowPresetModified(bool Modified)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48910);
		
		struct
		{
			bool                                               Modified;
		} params;
		params.Modified = Modified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               PreviewLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::InitializeOverviewPreview(const struct FSavedLoadout& PreviewLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48909);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.GetLoadoutInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::GetLoadoutInfo(struct FSavedLoadout* ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48908);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeLoadoutPresets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::InitializeLoadoutPresets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48907);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.GetAttachmentSlotByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_Attachment_C*                 AttachmentSlotRef                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::GetAttachmentSlotByType(EWeaponAttachmentType AttachmentSlot, class UW_LoadoutSlot_Attachment_C** AttachmentSlotRef)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48906);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentSlot;
			unsigned char                                      UnknownData_0000[0x7];
			class UW_LoadoutSlot_Attachment_C*                 AttachmentSlotRef;
		} params;
		params.AttachmentSlot = AttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachmentSlotRef != nullptr)
			*AttachmentSlotRef = params.AttachmentSlotRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeArmorSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::InitializeArmorSettings(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48905);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SelectTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SelectTactical(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48904);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SelectGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SelectGrenade(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48903);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.ApplyWeaponPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FWeaponPreset                               WeaponPreset                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::ApplyWeaponPreset(class ABaseItem* Weapon, bool IsPrimary, const struct FWeaponPreset& WeaponPreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48902);
		
		struct
		{
			class ABaseItem*                                   Weapon;
			bool                                               IsPrimary;
			unsigned char                                      UnknownData_0001[0x7];
			struct FWeaponPreset                               WeaponPreset;
		} params;
		params.Weapon = Weapon;
		params.IsPrimary = IsPrimary;
		params.WeaponPreset = WeaponPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.DeselectCurrentWeaponPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::DeselectCurrentWeaponPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48901);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SelectWeaponPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PresetID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SelectWeaponPreset(const class FString& PresetID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48900);
		
		struct
		{
			class FString                                      PresetID;
		} params;
		params.PresetID = PresetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotAutoSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AutoSelectAttachmentSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::AttachmentSlotAutoSelect(EWeaponAttachmentType AutoSelectAttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48899);
		
		struct
		{
			EWeaponAttachmentType                              AutoSelectAttachmentSlot;
		} params;
		params.AutoSelectAttachmentSlot = AutoSelectAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeWeaponPresetOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Weapon                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::InitializeWeaponPresetOptions(class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48898);
		
		struct
		{
			class ABaseItem*                                   Weapon;
		} params;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.CreateQuartermasterAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RevealDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::CreateQuartermasterAttachment(EWeaponAttachmentType AttachmentType, float RevealDelay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48897);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentType;
			unsigned char                                      UnknownData_0002[0x3];
			float                                              RevealDelay;
		} params;
		params.AttachmentType = AttachmentType;
		params.RevealDelay = RevealDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OpenWeaponQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemLookupTable                            ItemLookupTable                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OpenWeaponQuartermaster(class ABaseItem* ItemToModify, const struct FItemLookupTable& ItemLookupTable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48896);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
			unsigned char                                      UnknownData_0003[0x8];
			struct FItemLookupTable                            ItemLookupTable;
		} params;
		params.ItemToModify = ItemToModify;
		params.ItemLookupTable = ItemLookupTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SetupBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SetupBindings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48895);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SetActiveQuatermasterWeaponButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SetActiveQuatermasterWeaponButton(bool IsPrimary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48894);
		
		struct
		{
			bool                                               IsPrimary;
		} params;
		params.IsPrimary = IsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RemotePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::InitializeOverviewList(bool RemotePlayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48893);
		
		struct
		{
			bool                                               RemotePlayer;
			unsigned char                                      UnknownData_0004[0x3];
		} params;
		params.RemotePlayer = RemotePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_607C2935489AA67033764DA335DA7382
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Finished_607C2935489AA67033764DA335DA7382()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48892);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_340D92A941109D40A716A09F93EFD3B1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Finished_340D92A941109D40A716A09F93EFD3B1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48891);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_1C1140E544F6D72CBF82B4B0A003F591
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Finished_1C1140E544F6D72CBF82B4B0A003F591()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48890);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_42BB49A3444AA78D7A547F8D1ED2AB88
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Finished_42BB49A3444AA78D7A547F8D1ED2AB88()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48889);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48888);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48887);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48886);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48885);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.ClearQuartermasterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::ClearQuartermasterList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48884);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48883);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OverviewItemDoubleClick(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48882);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48881);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OverviewItemHover(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48880);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OverviewItemUnhover(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48879);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48878);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OpenQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemLookupTable                            ItemLookupTable                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OpenQuartermaster(class ABaseItem* ItemToModify, const struct FItemLookupTable& ItemLookupTable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48877);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
			unsigned char                                      UnknownData_0005[0x8];
			struct FItemLookupTable                            ItemLookupTable;
		} params;
		params.ItemToModify = ItemToModify;
		params.ItemLookupTable = ItemLookupTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48876);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48875);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SwapQuartermasterWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SwapQuartermasterWeapon(bool IsPrimary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48874);
		
		struct
		{
			bool                                               IsPrimary;
		} params;
		params.IsPrimary = IsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48873);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48872);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48871);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot;
		} params;
		params.TriggeringAttachmentSlot = TriggeringAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::AttachmentSlotHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48870);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot;
		} params;
		params.TriggeringAttachmentSlot = TriggeringAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48869);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.RefreshQuartermasterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemLookupTable                            ItemLookupTable                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::RefreshQuartermasterList(class ABaseItem* ItemToModify, const struct FItemLookupTable& ItemLookupTable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48868);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
			unsigned char                                      UnknownData_0006[0x8];
			struct FItemLookupTable                            ItemLookupTable;
		} params;
		params.ItemToModify = ItemToModify;
		params.ItemLookupTable = ItemLookupTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.CloseQuartermasterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::CloseQuartermasterList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48867);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.HideOverviewWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimationOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::HideOverviewWidgets(float AnimationOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48866);
		
		struct
		{
			float                                              AnimationOffset;
		} params;
		params.AnimationOffset = AnimationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48865);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OpenArmorEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OpenArmorEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48864);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::FadeOverviewToQuartermaster()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48863);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToArmorEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::FadeOverviewToArmorEditor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48862);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.CloseArmorQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::CloseArmorQuartermaster()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48861);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmorEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::NewArmorEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48860);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48859);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmourMaterialEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::NewArmourMaterialEquipped()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48858);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_AttachingWeaponSlot_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_AttachingWeaponSlot_K2Node_ComponentBoundEvent_5_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48857);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::AttachmentSlotUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48856);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachmentSlot;
		} params;
		params.TriggeringAttachmentSlot = TriggeringAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48855);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48854);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48853);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48852);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48851);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.ExecuteUbergraph_W_Loadout_Overview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::ExecuteUbergraph_W_Loadout_Overview(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48850);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnAttachmentSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48849);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnQuartermasterWeaponClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48848);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnArmorEditorClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48847);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorOpen__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnArmorEditorOpen__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48846);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewOpen__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewOpen__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48845);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewWidgetsHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewWidgetsHidden__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48844);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnQuartermasterClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48843);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnQuartermasterOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48842);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnAttachmentSlotHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48841);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnAttachmentSlotClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48840);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponSwapped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48839);
		
		struct
		{
			bool                                               IsPrimary;
		} params;
		params.IsPrimary = IsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnCleanWeaponClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnCleanWeaponClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48838);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48837);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewItemClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48836);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48835);
		
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
	 * 		Name   -> Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_Overview_C::OnOverviewItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48834);
		
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
	 * 		Name   -> PredefinedFunction UW_Loadout_Overview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_Overview_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48833);
		return ptr;
	}

}


