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
	 * 		Name   -> PredefinedFunction ASM_HQ_FlashbangBox_Closed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ASM_HQ_FlashbangBox_Closed_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125803);
		return ptr;
	}

}


