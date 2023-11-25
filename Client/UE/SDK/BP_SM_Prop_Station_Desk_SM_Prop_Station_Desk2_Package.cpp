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
	 * 		Name   -> PredefinedFunction ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125972);
		return ptr;
	}

}


