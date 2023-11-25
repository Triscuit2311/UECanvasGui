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
	 * 		Name   -> PredefinedFunction ABP_SM_Licenseplate_College_Plate2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_SM_Licenseplate_College_Plate2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(131734);
		return ptr;
	}

}


