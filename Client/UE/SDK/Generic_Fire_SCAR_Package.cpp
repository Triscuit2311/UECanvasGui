﻿/**
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
	 * 		Name   -> Function Generic_Fire_SCAR.Generic_Fire_SCAR_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UGeneric_Fire_SCAR_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54714);
		
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
	 * 		Name   -> PredefinedFunction UGeneric_Fire_SCAR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGeneric_Fire_SCAR_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54713);
		return ptr;
	}

}

