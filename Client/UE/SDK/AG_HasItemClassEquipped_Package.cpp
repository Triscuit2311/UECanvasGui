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
	 * 		Name   -> Function AG_HasItemClassEquipped.AG_HasItemClassEquipped_C.CanOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAG_HasItemClassEquipped_C::CanOpen(const struct FAIActionDecisionContext& Context)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(85342);
		
		struct
		{
			struct FAIActionDecisionContext                    Context;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAG_HasItemClassEquipped_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAG_HasItemClassEquipped_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(85341);
		return ptr;
	}

}

