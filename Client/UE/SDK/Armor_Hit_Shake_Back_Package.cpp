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
	 * 		Name   -> Function Armor_Hit_Shake_Back.Armor_Hit_Shake_Back_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UArmor_Hit_Shake_Back_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(41371);
		
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
	 * 		Name   -> PredefinedFunction UArmor_Hit_Shake_Back_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UArmor_Hit_Shake_Back_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(41370);
		return ptr;
	}

}


