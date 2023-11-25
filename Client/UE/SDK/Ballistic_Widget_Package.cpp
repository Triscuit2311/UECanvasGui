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
	 * 		Name   -> Function Ballistic_Widget.Ballistic_Widget_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBallistic_Widget_C::CustomEvent_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56421);
		
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
	 * 		Name   -> Function Ballistic_Widget.Ballistic_Widget_C.ExecuteUbergraph_Ballistic_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBallistic_Widget_C::ExecuteUbergraph_Ballistic_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56420);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBallistic_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBallistic_Widget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(56419);
		return ptr;
	}

}

