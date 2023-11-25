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
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.UnhighlightAllMags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::UnhighlightAllMags()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43834);
		
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
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.HighlightCurrentMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::HighlightCurrentMag(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43833);
		
		struct
		{
			class ABaseMagazineWeapon*                         MagazineWeapon;
		} params;
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.RefreshMags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::RefreshMags(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43832);
		
		struct
		{
			class ABaseMagazineWeapon*                         MagazineWeapon;
		} params;
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43831);
		
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
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43830);
		
		struct
		{
			class ABaseMagazineWeapon*                         MagazineWeapon;
		} params;
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MagCheckOverview.W_MagCheckOverview_C.ExecuteUbergraph_W_MagCheckOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MagCheckOverview_C::ExecuteUbergraph_W_MagCheckOverview(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43829);
		
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
	 * 		Name   -> PredefinedFunction UW_MagCheckOverview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_MagCheckOverview_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43828);
		return ptr;
	}

}


