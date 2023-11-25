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
	 * 		Name   -> Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Zipcuffs_Placed_FP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(42376);
		
		struct
		{
			struct FPoseLink                                   AnimGraph;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Zipcuffs_Placed_FP.ANIMBP_Zipcuffs_Placed_FP_C.ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Zipcuffs_Placed_FP_C::ExecuteUbergraph_ANIMBP_Zipcuffs_Placed_FP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(42375);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_Zipcuffs_Placed_FP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_Zipcuffs_Placed_FP_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42374);
		return ptr;
	}

}


