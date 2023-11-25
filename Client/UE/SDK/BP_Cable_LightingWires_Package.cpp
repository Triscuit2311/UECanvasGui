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
	 * 		Name   -> Function BP_Cable_LightingWires.BP_Cable_LightingWires_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Cable_LightingWires_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(126396);
		
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
	 * 		Name   -> PredefinedFunction ABP_Cable_LightingWires_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_Cable_LightingWires_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(126397);
		return ptr;
	}

}


