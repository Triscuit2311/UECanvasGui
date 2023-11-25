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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PopulateSlotIndexToMagsMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::PopulateSlotIndexToMagsMap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90204);
		
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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.GetMaxSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UW_WeaponWheel_MagazineDisplay_C::GetMaxSlots()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90203);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_MagazineSlot_C*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UW_WeaponWheel_MagazineSlot_C* UW_WeaponWheel_MagazineDisplay_C::CreateMagSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90202);
		
		struct
		{
			class UW_WeaponWheel_MagazineSlot_C*               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.UpdateMagIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MagIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::UpdateMagIcon(int32_t MagIndex, float CurrentAmmo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90201);
		
		struct
		{
			int32_t                                            MagIndex;
			float                                              CurrentAmmo;
		} params;
		params.MagIndex = MagIndex;
		params.CurrentAmmo = CurrentAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         InMagazineWeapon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::Initialize(class ABaseMagazineWeapon* InMagazineWeapon, float IconSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90200);
		
		struct
		{
			class ABaseMagazineWeapon*                         InMagazineWeapon;
			float                                              IconSize;
		} params;
		params.InMagazineWeapon = InMagazineWeapon;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMags()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90199);
		
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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagOutline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_MagazineSlot_C*               MagSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMagOutline(class UW_WeaponWheel_MagazineSlot_C** MagSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90198);
		
		struct
		{
			class UW_WeaponWheel_MagazineSlot_C*               MagSlot;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagSlot != nullptr)
			*MagSlot = params.MagSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_MagazineSlot_C*               MagSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::CreateMag(class UW_WeaponWheel_MagazineSlot_C** MagSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90197);
		
		struct
		{
			class UW_WeaponWheel_MagazineSlot_C*               MagSlot;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagSlot != nullptr)
			*MagSlot = params.MagSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90196);
		
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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90195);
		
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
	 * 		Name   -> Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.ExecuteUbergraph_W_WeaponWheel_MagazineDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineDisplay_C::ExecuteUbergraph_W_WeaponWheel_MagazineDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90194);
		
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
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_MagazineDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_MagazineDisplay_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90193);
		return ptr;
	}

}


