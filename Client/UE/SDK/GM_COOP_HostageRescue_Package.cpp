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
	 * 		Name   -> PredefinedFunction AGM_COOP_HostageRescue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AGM_COOP_HostageRescue_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125632);
		return ptr;
	}

}

