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
	 * 		Name   -> Function C_Generic_Fire_Shaky_2012.C_Generic_Fire_Shaky_2011_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UC_Generic_Fire_Shaky_2011_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54730);
		
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
	 * 		Name   -> PredefinedFunction UC_Generic_Fire_Shaky_2011_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UC_Generic_Fire_Shaky_2011_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54729);
		return ptr;
	}

}


