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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ClearPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ClearPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56703);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetPresetModified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PresetDirty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetPresetModified(bool PresetDirty)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56702);
		
		struct
		{
			bool                                               PresetDirty;
		} params;
		params.PresetDirty = PresetDirty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.LoadDefaultLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::LoadDefaultLoadout()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56701);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CheckPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CheckPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56700);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.DeleteLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          TriggeringModal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56699);
		
		struct
		{
			class UW_StandardModal_C*                          TriggeringModal;
			class FText                                        TextEntry;
		} params;
		params.TriggeringModal = TriggeringModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.Open Loadout Preset Modal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPreset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Delete                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenLoadoutPresetModal(const class FString& CurrentPreset, bool Delete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56698);
		
		struct
		{
			class FString                                      CurrentPreset;
			bool                                               Delete;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.CurrentPreset = CurrentPreset;
		params.Delete = Delete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ApplyLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLoadoutPreset                              LoadoutPreset                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ApplyLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56697);
		
		struct
		{
			struct FLoadoutPreset                              LoadoutPreset;
		} params;
		params.LoadoutPreset = LoadoutPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenAttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenAttachmentList(bool VerticalList, class ABaseItem* ItemData, EWeaponAttachmentType AttachmentType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56696);
		
		struct
		{
			bool                                               VerticalList;
			unsigned char                                      UnknownData_0001[0x7];
			class ABaseItem*                                   ItemData;
			EWeaponAttachmentType                              AttachmentType;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		params.VerticalList = VerticalList;
		params.ItemData = ItemData;
		params.AttachmentType = AttachmentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenItemList(bool VerticalList, EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56695);
		
		struct
		{
			bool                                               VerticalList;
			EItemCategory                                      LoadoutSlot;
			unsigned char                                      UnknownData_0003[0x6];
			TArray<struct FLoadoutCategory>                    GearCategoryClasses;
		} params;
		params.VerticalList = VerticalList;
		params.LoadoutSlot = LoadoutSlot;
		params.GearCategoryClasses = GearCategoryClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenDeployableList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABaseItem*>                           ExcludedItems                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenDeployableList(bool VerticalList, EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class ABaseItem*> ExcludedItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56694);
		
		struct
		{
			bool                                               VerticalList;
			EItemCategory                                      LoadoutSlot;
			unsigned char                                      UnknownData_0004[0x6];
			TArray<struct FLoadoutCategory>                    GearCategoryClasses;
			TArray<class ABaseItem*>                           ExcludedItems;
		} params;
		params.VerticalList = VerticalList;
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenArmourMaterialList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenArmourMaterialList(bool VerticalList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56693);
		
		struct
		{
			bool                                               VerticalList;
			unsigned char                                      UnknownData_0005[0x7];
		} params;
		params.VerticalList = VerticalList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenAmmoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalList                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ExcludedAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenAmmoList(bool VerticalList, const class FName& ExcludedAmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56692);
		
		struct
		{
			bool                                               VerticalList;
			unsigned char                                      UnknownData_0006[0x3];
			class FName                                        ExcludedAmmoType;
			unsigned char                                      UnknownData_0007[0x4];
			class ABaseItem*                                   Weapon;
		} params;
		params.VerticalList = VerticalList;
		params.ExcludedAmmoType = ExcludedAmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveLoadoutPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          TriggeringModal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveLoadoutPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56691);
		
		struct
		{
			class UW_StandardModal_C*                          TriggeringModal;
			class FText                                        TextEntry;
		} params;
		params.TriggeringModal = TriggeringModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.IsNullAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNull                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::IsNullAttachment(class UWeaponAttachment* Attachment, bool* IsNull)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56690);
		
		struct
		{
			class UWeaponAttachment*                           Attachment;
			bool                                               IsNull;
			unsigned char                                      UnknownData_0008[0x7];
		} params;
		params.Attachment = Attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNull != nullptr)
			*IsNull = params.IsNull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.RefreshAttachmentInfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 AttachmentSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::RefreshAttachmentInfoPanel(class UW_LoadoutSlot_Attachment_C* AttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56689);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 AttachmentSlot;
		} params;
		params.AttachmentSlot = AttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.RefreshItemInfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::RefreshItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56688);
		
		struct
		{
			class UW_LoadoutSlot_C*                            LoadoutSlot;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.HideItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::HideItemList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56687);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipArmourMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipArmourMaterial(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56686);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveArmorCoverage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EArmourCoverage                                    ArmorCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveArmorCoverage(EArmourCoverage ArmorCoverage)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56685);
		
		struct
		{
			EArmourCoverage                                    ArmorCoverage;
			unsigned char                                      UnknownData_0009[0x7];
		} params;
		params.ArmorCoverage = ArmorCoverage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipSidearmAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SidearmAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipSidearmAmmo(TArray<class FName>* SidearmAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56684);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipPrimaryAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                PrimaryAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipPrimaryAmmo(TArray<class FName>* PrimaryAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56683);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenArmorQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenArmorQuartermaster(class ABaseItem* ItemToModify)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56682);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
		} params;
		params.ItemToModify = ItemToModify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveTacticalSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TacticalSlotsCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveTacticalSlotCount(int32_t TacticalSlotsCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56681);
		
		struct
		{
			int32_t                                            TacticalSlotsCount;
		} params;
		params.TacticalSlotsCount = TacticalSlotsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveGrenadeSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GrenadeSlotsCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveGrenadeSlotCount(int32_t GrenadeSlotsCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56680);
		
		struct
		{
			int32_t                                            GrenadeSlotsCount;
		} params;
		params.GrenadeSlotsCount = GrenadeSlotsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveSidearmAmmoSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SecondaryAmmoSlotsCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveSidearmAmmoSlotCount(int32_t SecondaryAmmoSlotsCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56679);
		
		struct
		{
			int32_t                                            SecondaryAmmoSlotsCount;
		} params;
		params.SecondaryAmmoSlotsCount = SecondaryAmmoSlotsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SavePrimaryAmmoSlotCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrimaryAmmoSlotsCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SavePrimaryAmmoSlotCount(int32_t PrimaryAmmoSlotsCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56678);
		
		struct
		{
			int32_t                                            PrimaryAmmoSlotsCount;
		} params;
		params.PrimaryAmmoSlotsCount = PrimaryAmmoSlotsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateCurrentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateCurrentItem(EItemCategory ItemCategory, class ABaseItem* ItemClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56677);
		
		struct
		{
			EItemCategory                                      ItemCategory;
			unsigned char                                      UnknownData_0010[0x7];
			class ABaseItem*                                   ItemClass;
		} params;
		params.ItemCategory = ItemCategory;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.DeselectAttachmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::DeselectAttachmentSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56676);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateWorkbenchCameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateWorkbenchCameraRotation(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56675);
		
		struct
		{
			float                                              DeltaTime;
		} params;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetupWorkbenchCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetupWorkbenchCamera()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56674);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.LookAtAttachmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::LookAtAttachmentSlot(EWeaponAttachmentType AttachmentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56673);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentSlot;
			unsigned char                                      UnknownData_0011[0x3];
		} params;
		params.AttachmentSlot = AttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveWeaponPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          TriggeringModal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveWeaponPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56672);
		
		struct
		{
			class UW_StandardModal_C*                          TriggeringModal;
			class FText                                        TextEntry;
		} params;
		params.TriggeringModal = TriggeringModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CleanCurrentWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CleanCurrentWeapon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56671);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CloseLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CloseLoadout()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56670);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateHUDStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateHUDStates()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56669);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ShowHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ShowHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56668);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.HideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::HideHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56667);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SaveActiveLoadoutOld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SaveActiveLoadoutOld()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56666);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.HolsterPreviewCharacterWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHolstering                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::HolsterPreviewCharacterWeapon(bool* IsHolstering)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56665);
		
		struct
		{
			bool                                               IsHolstering;
			unsigned char                                      UnknownData_0012[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHolstering != nullptr)
			*IsHolstering = params.IsHolstering;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.InitializeWeaponAttachmentMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::InitializeWeaponAttachmentMap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56664);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateAllPreviewWeaponAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWorkbench                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABaseItem*                                   Weapon                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               IsSidearm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateAllPreviewWeaponAttachments(bool IsWorkbench, class ABaseItem* Weapon, bool IsSidearm)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56663);
		
		struct
		{
			bool                                               IsWorkbench;
			unsigned char                                      UnknownData_0013[0x7];
			class ABaseItem*                                   Weapon;
			bool                                               IsSidearm;
			unsigned char                                      UnknownData_0014[0x7];
		} params;
		params.IsWorkbench = IsWorkbench;
		params.Weapon = Weapon;
		params.IsSidearm = IsSidearm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdatePreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdatePreview(EItemCategory Selection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56662);
		
		struct
		{
			EItemCategory                                      Selection;
		} params;
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetPreMissionCameraBySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetPreMissionCameraBySlot(EItemCategory LoadoutSlot, float BlendTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56661);
		
		struct
		{
			EItemCategory                                      LoadoutSlot;
			unsigned char                                      UnknownData_0015[0x3];
			float                                              BlendTime;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipSidearmAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipSidearmAttachments(EWeaponAttachmentType AttachmentType, class UWeaponAttachment* AttachmentData, class ABaseItem* AttachingWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56660);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentType;
			unsigned char                                      UnknownData_0016[0x7];
			class UWeaponAttachment*                           AttachmentData;
			class ABaseItem*                                   AttachingWeapon;
		} params;
		params.AttachmentType = AttachmentType;
		params.AttachmentData = AttachmentData;
		params.AttachingWeapon = AttachingWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipPrimaryAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipPrimaryAttachments(EWeaponAttachmentType AttachmentType, class UWeaponAttachment* AttachmentData, class ABaseItem* AttachingWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56659);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentType;
			unsigned char                                      UnknownData_0017[0x7];
			class UWeaponAttachment*                           AttachmentData;
			class ABaseItem*                                   AttachingWeapon;
		} params;
		params.AttachmentType = AttachmentType;
		params.AttachmentData = AttachmentData;
		params.AttachingWeapon = AttachingWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.DeselectLoadoutSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::DeselectLoadoutSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56658);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_Loadout_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56657);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.GoBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::GoBack()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56656);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_Loadout_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56655);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipAttachment(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56654);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.InitializeAttachmentSelectionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::InitializeAttachmentSelectionPanel(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56653);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.InitializeItemSelectionRemote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::InitializeItemSelectionRemote(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56652);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.InitializeItemSelectionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::InitializeItemSelectionPanel(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56651);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipTactical(TArray<class ABaseItem*>* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56650);
		
		struct
		{
			TArray<class ABaseItem*>                           ItemData;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipGrenades(TArray<class ABaseItem*>* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56649);
		
		struct
		{
			TArray<class ABaseItem*>                           ItemData;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipLongTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipLongTactical(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56648);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipHeadwear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipHeadwear(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56647);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipArmor(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56646);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SidearmChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SidearmChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56645);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.PrimaryChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::PrimaryChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56644);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.EquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::EquipItem(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56643);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LoadoutName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotPlayerState*                      RoNPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEquippingSwat                                     EquippingUnit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetActiveLoadout(const class FString& LoadoutName, class AReadyOrNotPlayerState* RoNPlayerState, EEquippingSwat EquippingUnit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56642);
		
		struct
		{
			class FString                                      LoadoutName;
			class AReadyOrNotPlayerState*                      RoNPlayerState;
			EEquippingSwat                                     EquippingUnit;
		} params;
		params.LoadoutName = LoadoutName;
		params.RoNPlayerState = RoNPlayerState;
		params.EquippingUnit = EquippingUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetupBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetupBindings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56641);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OpenWeaponQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OpenWeaponQuartermaster(class ABaseItem* ItemToModify)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56640);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
		} params;
		params.ItemToModify = ItemToModify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.HideItemInfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::HideItemInfoPanel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56639);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ShowItemInfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ShowItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56638);
		
		struct
		{
			class UW_LoadoutSlot_C*                            LoadoutSlot;
		} params;
		params.LoadoutSlot = LoadoutSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.InitializeOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::InitializeOverview()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56637);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ShowTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLevelDataLookupTable                       MissionDetails                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ShowTooltip(const struct FLevelDataLookupTable& MissionDetails)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56636);
		
		struct
		{
			struct FLevelDataLookupTable                       MissionDetails;
		} params;
		params.MissionDetails = MissionDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56635);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.DoItemUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::DoItemUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56634);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56633);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_EquippingUnit                           EquippingUnitInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56632);
		
		struct
		{
			struct FST_EquippingUnit                           EquippingUnitInfo;
		} params;
		params.EquippingUnitInfo = EquippingUnitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56631);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56630);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToModify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature(class ABaseItem* ItemToModify)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56629);
		
		struct
		{
			class ABaseItem*                                   ItemToModify;
		} params;
		params.ItemToModify = ItemToModify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CloseQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CloseQuartermaster()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56628);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SelectListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SelectListItem(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56627);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.RedrawWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::RedrawWeapon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56626);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetPreMissionCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetPreMissionCamera(const class FName& Tag, const class FString& Animation, float BlendTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56625);
		
		struct
		{
			class FName                                        Tag;
			class FString                                      Animation;
			float                                              BlendTime;
		} params;
		params.Tag = Tag;
		params.Animation = Animation;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56624);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56623);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnLoadoutSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnLoadoutSaved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56622);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56621);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56620);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnSwatCharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnSwatCharacterChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56619);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CancelSavePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CancelSavePreset(class UW_StandardModal_C* CallingModal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56618);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
		} params;
		params.CallingModal = CallingModal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class ABaseItem*>              ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56617);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56616);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56615);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56614);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56613);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56612);
		
		struct
		{
			EWeaponAttachmentType                              Slot;
			unsigned char                                      UnknownData_0018[0x7];
			class UWeaponAttachment*                           AttachmentData;
		} params;
		params.Slot = Slot;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56611);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56610);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56609);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56608);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56607);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56606);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.CloseArmorQuartermaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::CloseArmorQuartermaster()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56605);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56604);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56603);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56602);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56601);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OverviewItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56600);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.AttachmentSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56599);
		
		struct
		{
			class UW_LoadoutSlot_Attachment_C*                 TriggeringSlot;
		} params;
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.QuartermasterWeaponClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::QuartermasterWeaponClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56598);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.RefreshItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::RefreshItemList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56597);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HotkeyID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56596);
		
		struct
		{
			class FString                                      HotkeyID;
		} params;
		params.HotkeyID = HotkeyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56595);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.AttachmentHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::AttachmentHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56594);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56593);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.DoAttachmentUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::DoAttachmentUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56592);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56591);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.AttachmentUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::AttachmentUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56590);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56589);
		
		struct
		{
			EWeaponAttachmentType                              Slot;
		} params;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56588);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponAttachment*                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature(class ABaseItem* AttachingWeapon, class UWeaponAttachment* AttachmentData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56587);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature(class ABaseItem* ItemData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56586);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56585);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49055);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnLoadoutPresetsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnLoadoutPresetsLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49054);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49053);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.ExecuteUbergraph_W_Loadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::ExecuteUbergraph_W_Loadout(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49052);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0019[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnAmmoOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnAmmoOptionSelected__DelegateSignature(const class FName& AmmoType, class ABaseItem* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49051);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnArmorMaterialEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnArmorMaterialEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49050);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnArmorCoverageSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnArmorCoverageSaved__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49049);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnArmorEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnArmorEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49048);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnSidearmWeaponEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnSidearmWeaponEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49047);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnPrimaryWeaponEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnPrimaryWeaponEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49046);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnTacticalCountSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnTacticalCountSaved__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49045);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnGrenadeCountSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnGrenadeCountSaved__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49044);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnSidearmAmmoCountSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnSidearmAmmoCountSaved__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49043);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnPrimaryAmmoCountSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnPrimaryAmmoCountSaved__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49042);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnTacticalEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnTacticalEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49041);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnGrenadesEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnGrenadesEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49040);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnSidearmAmmoEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnSidearmAmmoEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49039);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnPrimaryAmmoEquipped__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnPrimaryAmmoEquipped__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49038);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.OnQuartermasterListHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::OnQuartermasterListHidden__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49037);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49036);
		
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
	 * 		Name   -> Function W_Loadout.W_Loadout_C.UpdateMapMaterial__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  LayoutTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49035);
		
		struct
		{
			class UTexture2D*                                  LayoutTexture;
		} params;
		params.LayoutTexture = LayoutTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout.W_Loadout_C.PanMap__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                      CursorPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Loadout_C::PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49034);
		
		struct
		{
			bool                                               Pressed;
			unsigned char                                      UnknownData_0020[0x3];
			struct FVector2D                      CursorPos;
		} params;
		params.Pressed = Pressed;
		params.CursorPos = CursorPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Loadout_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49033);
		return ptr;
	}

}


