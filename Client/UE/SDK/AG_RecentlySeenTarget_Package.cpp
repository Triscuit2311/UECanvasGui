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
	 * 		Name   -> Function AG_RecentlySeenTarget.AG_RecentlySeenTarget_C.CanOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAG_RecentlySeenTarget_C::CanOpen(const struct FAIActionDecisionContext& Context)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84206);
		
		struct
		{
			struct FAIActionDecisionContext                    Context;
			bool                                               ReturnValue;
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
	 * 		Name   -> PredefinedFunction UAG_RecentlySeenTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAG_RecentlySeenTarget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84205);
		return ptr;
	}

}


