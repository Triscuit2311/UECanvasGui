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
	 * 		Name   -> PredefinedFunction AObjective_Meth_RescueAllCivilians_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AObjective_Meth_RescueAllCivilians_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(194975);
		return ptr;
	}

}


