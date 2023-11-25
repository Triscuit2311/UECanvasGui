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
	 * 		Name   -> PredefinedFunction UWCQB_Flashlight_Integrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWCQB_Flashlight_Integrated_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54597);
		return ptr;
	}

}


