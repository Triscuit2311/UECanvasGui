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
	 * 		Name   -> Function MPL_Camera_Shake_Holster2.MPL_Camera_Shake_Holster2_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMPL_Camera_Shake_Holster2_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(46387);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMPL_Camera_Shake_Holster2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMPL_Camera_Shake_Holster2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(46386);
		return ptr;
	}

}


