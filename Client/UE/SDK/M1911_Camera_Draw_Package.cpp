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
	 * 		Name   -> Function M1911_Camera_Draw.M1911_Camera_Draw_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UM1911_Camera_Draw_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54091);
		
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
	 * 		Name   -> PredefinedFunction UM1911_Camera_Draw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UM1911_Camera_Draw_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54090);
		return ptr;
	}

}


