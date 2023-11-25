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
	 * 		Name   -> PredefinedFunction UWCQB_Flashlight_Integrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWCQB_Flashlight_Integrated_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(37986);
		return ptr;
	}

}


