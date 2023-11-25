﻿/**
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
	 * 		Name   -> Function W_FireModeChanged.W_FireModeChanged_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_FireModeChanged_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89988);
		
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
	 * 		Name   -> Function W_FireModeChanged.W_FireModeChanged_C.ExecuteUbergraph_W_FireModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModeChanged_C::ExecuteUbergraph_W_FireModeChanged(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89987);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_FireModeChanged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_FireModeChanged_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89986);
		return ptr;
	}

}


