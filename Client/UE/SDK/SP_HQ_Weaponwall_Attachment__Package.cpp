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
	 * 		Name   -> PredefinedFunction ASP_HQ_Weaponwall_Attachment__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ASP_HQ_Weaponwall_Attachment__C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125848);
		return ptr;
	}

}


