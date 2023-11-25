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
	 * 		Name   -> PredefinedFunction ARoN_Meth_BarricadedSuspects_Core_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ARoN_Meth_BarricadedSuspects_Core_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(103212);
		return ptr;
	}

}


