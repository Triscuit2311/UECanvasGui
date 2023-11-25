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
	 * 		Name   -> Function MPL_Camera_Shake_Draw2.MPL_Camera_Shake_Draw2_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMPL_Camera_Shake_Draw2_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24337);
		
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
	 * 		Name   -> PredefinedFunction UMPL_Camera_Shake_Draw2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMPL_Camera_Shake_Draw2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(24336);
		return ptr;
	}

}


