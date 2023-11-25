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
	 * 		Name   -> Function PPR_IsNotWearingFlashGoggles.PPR_IsNotWearingFlashGoggles_C.EnablePostProcessEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UPPR_IsNotWearingFlashGoggles_C::EnablePostProcessEffect()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43197);
		
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
	 * 		Name   -> PredefinedFunction UPPR_IsNotWearingFlashGoggles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPPR_IsNotWearingFlashGoggles_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43196);
		return ptr;
	}

}


