/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FindIconFromItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::FindIconFromItemClass(class APlayerController* PlayerController, class ABaseItem* ItemClass, class UObject* __WorldContext, class UTexture2D** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55203);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class ABaseItem*                                   ItemClass;
			class UObject*                                     __WorldContext;
			class UTexture2D*                                  ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.ItemClass = ItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.IsFactorySkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinComponent*                              SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::IsFactorySkin(class USkinComponent* SkinClass, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55202);
		
		struct
		{
			class USkinComponent*                              SkinClass;
			class UObject*                                     __WorldContext;
			bool                                               ReturnValue;
		} params;
		params.SkinClass = SkinClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCharacterDataFromHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterData                              Data                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetCharacterDataFromHandle(const class FName& Handle, class UObject* __WorldContext, struct FCharacterData* Data)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55201);
		
		struct
		{
			class FName                                        Handle;
			class UObject*                                     __WorldContext;
			struct FCharacterData                              Data;
		} params;
		params.Handle = Handle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.PlayerStatusToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStatus                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatusText                                                 (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::PlayerStatusToText(EPlayerStatus Status, class APlayerCharacter* PlayerState, class UObject* __WorldContext, class FText* StatusText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55200);
		
		struct
		{
			EPlayerStatus                                      Status;
			unsigned char                                      UnknownData_0000[0x7];
			class APlayerCharacter*                            PlayerState;
			class UObject*                                     __WorldContext;
			class FText                                        StatusText;
		} params;
		params.Status = Status;
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusText != nullptr)
			*StatusText = params.StatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoDescriptionForWeaponAndAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint8_t                                            AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetAmmoDescriptionForWeaponAndAmmo(class ABaseMagazineWeapon* Weapon, uint8_t AmmoType, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55199);
		
		struct
		{
			class ABaseMagazineWeapon*                         Weapon;
			uint8_t                                            AmmoType;
			unsigned char                                      UnknownData_0001[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.Weapon = Weapon;
		params.AmmoType = AmmoType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoTypeNameForWeaponAndAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint8_t                                            AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetAmmoTypeNameForWeaponAndAmmo(class ABaseMagazineWeapon* WeaponClass, uint8_t AmmoType, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55198);
		
		struct
		{
			class ABaseMagazineWeapon*                         WeaponClass;
			uint8_t                                            AmmoType;
			unsigned char                                      UnknownData_0002[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.WeaponClass = WeaponClass;
		params.AmmoType = AmmoType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetNonDefaultLoadouts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Loadouts                                                   (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetNonDefaultLoadouts(class UObject* __WorldContext, TArray<class FString>* Loadouts)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55197);
		
		struct
		{
			class UObject*                                     __WorldContext;
			TArray<class FString>                              Loadouts;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loadouts != nullptr)
			*Loadouts = params.Loadouts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponData                                 WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanCustomize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::CanCustomizeWeaponData(const struct FWeaponData& WeaponClass, class UObject* __WorldContext, bool* CanCustomize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55196);
		
		struct
		{
			struct FWeaponData                                 WeaponClass;
			class UObject*                                     __WorldContext;
			bool                                               CanCustomize;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		params.WeaponClass = WeaponClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCustomize != nullptr)
			*CanCustomize = params.CanCustomize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanCustomize                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::CanCustomizeWeaponClass(class ABaseMagazineWeapon* WeaponClass, class UObject* __WorldContext, bool* CanCustomize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55195);
		
		struct
		{
			class ABaseMagazineWeapon*                         WeaponClass;
			class UObject*                                     __WorldContext;
			bool                                               CanCustomize;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		params.WeaponClass = WeaponClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCustomize != nullptr)
			*CanCustomize = params.CanCustomize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetArmorCoverageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EArmourCoverage                                    Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint8_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetArmorCoverageText(EArmourCoverage Coverage, uint8_t Level, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55194);
		
		struct
		{
			EArmourCoverage                                    Coverage;
			uint8_t                                            Level;
			unsigned char                                      UnknownData_0005[0x6];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.Coverage = Coverage;
		params.Level = Level;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAttachmentTextData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponAttachment*                           Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetAttachmentTextData(class UWeaponAttachment* Attachment, class UObject* __WorldContext, ESlateVisibility* Visibility, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55193);
		
		struct
		{
			class UWeaponAttachment*                           Attachment;
			class UObject*                                     __WorldContext;
			ESlateVisibility                                   Visibility;
			unsigned char                                      UnknownData_0006[0x7];
			class FText                                        Text;
		} params;
		params.Attachment = Attachment;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ConstructEquipmentOverviewAmmoString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MagazineCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::ConstructEquipmentOverviewAmmoString(uint8_t AmmoType, int32_t MagazineCount, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55192);
		
		struct
		{
			uint8_t                                            AmmoType;
			unsigned char                                      UnknownData_0007[0x3];
			int32_t                                            MagazineCount;
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.AmmoType = AmmoType;
		params.MagazineCount = MagazineCount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ItemWeightToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fractional                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::ItemWeightToText(float Weight, bool Fractional, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55191);
		
		struct
		{
			float                                              Weight;
			bool                                               Fractional;
			unsigned char                                      UnknownData_0008[0x3];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.Weight = Weight;
		params.Fractional = Fractional;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.MuzzleVelocityToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MuzzleVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::MuzzleVelocityToText(float MuzzleVelocity, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55190);
		
		struct
		{
			float                                              MuzzleVelocity;
			unsigned char                                      UnknownData_0009[0x4];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.MuzzleVelocity = MuzzleVelocity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCaliberFromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TSoftClassPtr<class ABaseItem>                     WeaponBlueprint                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CaliberText                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetCaliberFromBlueprint(TSoftClassPtr<class ABaseItem> WeaponBlueprint, class UObject* __WorldContext, class FText* CaliberText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55189);
		
		struct
		{
			TSoftClassPtr<class ABaseItem>                     WeaponBlueprint;
			class UObject*                                     __WorldContext;
			class FText                                        CaliberText;
		} params;
		params.WeaponBlueprint = WeaponBlueprint;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaliberText != nullptr)
			*CaliberText = params.CaliberText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetWeaponTypeLocalizedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LocalizedName                                              (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetWeaponTypeLocalizedName(EWeaponType WeaponType, class UObject* __WorldContext, class FText* LocalizedName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55188);
		
		struct
		{
			EWeaponType                                        WeaponType;
			unsigned char                                      UnknownData_0010[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        LocalizedName;
		} params;
		params.WeaponType = WeaponType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedName != nullptr)
			*LocalizedName = params.LocalizedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetFirstWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EWeaponType>                                WeaponTypes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponType                                        WeaponType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetFirstWeaponType(TArray<EWeaponType>* WeaponTypes, class UObject* __WorldContext, EWeaponType* WeaponType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55187);
		
		struct
		{
			TArray<EWeaponType>                                WeaponTypes;
			class UObject*                                     __WorldContext;
			EWeaponType                                        WeaponType;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponTypes != nullptr)
			*WeaponTypes = params.WeaponTypes;
		if (WeaponType != nullptr)
			*WeaponType = params.WeaponType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FormatSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SpawnPointFormat                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSpawnPoints                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               DoubleCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::FormatSpawnPoint(const class FText& SpawnPointFormat, const struct FSpawnPoints& Spawn, bool DoubleCost, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55186);
		
		struct
		{
			class FText                                        SpawnPointFormat;
			struct FSpawnPoints                                Spawn;
			bool                                               DoubleCost;
			unsigned char                                      UnknownData_0011[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.SpawnPointFormat = SpawnPointFormat;
		params.Spawn = Spawn;
		params.DoubleCost = DoubleCost;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActiveDeployablesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetActiveDeployablesText(class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55185);
		
		struct
		{
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewDeployableListText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Deployables                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::CreateOverviewDeployableListText(TArray<int32_t>* Deployables, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55184);
		
		struct
		{
			TArray<int32_t>                                    Deployables;
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deployables != nullptr)
			*Deployables = params.Deployables;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActivePersonnelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetActivePersonnelText(class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55183);
		
		struct
		{
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewPersonnelListText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    PersonnelList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::CreateOverviewPersonnelListText(TArray<int32_t>* PersonnelList, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55182);
		
		struct
		{
			TArray<int32_t>                                    PersonnelList;
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PersonnelList != nullptr)
			*PersonnelList = params.PersonnelList;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetSpawnForEntryNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            SpawnNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpawnPoints                                OutSpawn                                                   (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBpPlanningMenuLibrary_C::GetSpawnForEntryNum(uint8_t SpawnNum, class UObject* __WorldContext, struct FSpawnPoints* OutSpawn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55181);
		
		struct
		{
			uint8_t                                            SpawnNum;
			unsigned char                                      UnknownData_0012[0x7];
			class UObject*                                     __WorldContext;
			struct FSpawnPoints                                OutSpawn;
		} params;
		params.SpawnNum = SpawnNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawn != nullptr)
			*OutSpawn = params.OutSpawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBpPlanningMenuLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBpPlanningMenuLibrary_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55180);
		return ptr;
	}

}


