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
	 * 		Name   -> Function Beanbag_Camera_Fire.Beanbag_Camera_Fire_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBeanbag_Camera_Fire_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57484);
		
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
	 * 		Name   -> PredefinedFunction UBeanbag_Camera_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBeanbag_Camera_Fire_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(57483);
		return ptr;
	}

}

