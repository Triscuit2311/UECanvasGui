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
	 * 		Name   -> Function Generic_Fire_M4A1.Generic_Fire_M4A1_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UGeneric_Fire_M4A1_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48483);
		
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
	 * 		Name   -> PredefinedFunction UGeneric_Fire_M4A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGeneric_Fire_M4A1_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48482);
		return ptr;
	}

}


