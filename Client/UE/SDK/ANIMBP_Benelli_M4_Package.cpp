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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34826);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34825);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_PrimeShellRack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_PrimeShellRack()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34824);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_FinishShellLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_FinishShellLoad()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34823);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReplaceShellRack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_ReplaceShellRack()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34822);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReloadNextShell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::AnimNotify_ReloadNextShell()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34821);
		
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
	 * 		Name   -> Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.ExecuteUbergraph_ANIMBP_Benelli_M4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_Benelli_M4_C::ExecuteUbergraph_ANIMBP_Benelli_M4(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(34820);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_Benelli_M4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_Benelli_M4_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(34819);
		return ptr;
	}

}


