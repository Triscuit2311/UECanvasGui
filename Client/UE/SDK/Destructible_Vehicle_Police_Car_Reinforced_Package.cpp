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
	 * 		Name   -> PredefinedFunction ADestructible_Vehicle_Police_Car_Reinforced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ADestructible_Vehicle_Police_Car_Reinforced_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(137703);
		return ptr;
	}

}


