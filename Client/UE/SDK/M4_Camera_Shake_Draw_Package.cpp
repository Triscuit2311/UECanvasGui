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
	 * 		Name   -> Function M4_Camera_Shake_Draw.M4_Camera_Shake_Draw_C.NewFunction_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UM4_Camera_Shake_Draw_C::NewFunction_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(52402);
		
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
	 * 		Name   -> PredefinedFunction UM4_Camera_Shake_Draw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UM4_Camera_Shake_Draw_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(52401);
		return ptr;
	}

}


