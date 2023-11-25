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
	 * 		Name   -> Function PPR_IsNotCurrentlyPeppersprayed.PPR_IsNotCurrentlyPeppersprayed_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UPPR_IsNotCurrentlyPeppersprayed_C::EnablePostProcessEffect()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(42729);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPPR_IsNotCurrentlyPeppersprayed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPPR_IsNotCurrentlyPeppersprayed_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42728);
		return ptr;
	}

}


