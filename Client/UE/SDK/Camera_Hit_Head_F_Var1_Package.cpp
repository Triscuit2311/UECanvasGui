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
	 * 		Name   -> PredefinedFunction UCamera_Hit_Head_F_Var1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCamera_Hit_Head_F_Var1_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(35638);
		return ptr;
	}

}


