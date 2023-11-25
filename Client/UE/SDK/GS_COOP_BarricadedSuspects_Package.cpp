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
	 * 		Name   -> PredefinedFunction AGS_COOP_BarricadedSuspects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AGS_COOP_BarricadedSuspects_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(112460);
		return ptr;
	}

}


