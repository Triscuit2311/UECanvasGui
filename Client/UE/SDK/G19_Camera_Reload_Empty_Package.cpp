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
	 * 		Name   -> Function G19_Camera_Reload_Empty.G19_Camera_Reload_Empty_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UG19_Camera_Reload_Empty_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(33239);
		
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
	 * 		Name   -> PredefinedFunction UG19_Camera_Reload_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UG19_Camera_Reload_Empty_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(33238);
		return ptr;
	}

}


