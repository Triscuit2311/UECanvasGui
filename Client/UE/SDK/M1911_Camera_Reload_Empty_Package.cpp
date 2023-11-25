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
	 * 		Name   -> Function M1911_Camera_Reload_Empty.M1911_Camera_Reload_Empty_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UM1911_Camera_Reload_Empty_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40975);
		
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
	 * 		Name   -> PredefinedFunction UM1911_Camera_Reload_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UM1911_Camera_Reload_Empty_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40974);
		return ptr;
	}

}


