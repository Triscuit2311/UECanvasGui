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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35693);
		
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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_ModifyBone_840474584ED0B753AD6DF9B917324032
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_ModifyBone_840474584ED0B753AD6DF9B917324032()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35692);
		
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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_BlendListByBool_14BC27694C204713BF249982948108B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_BlendListByBool_14BC27694C204713BF249982948108B9()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35691);
		
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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35690);
		
		struct
		{
			float                                              DeltaTimeX;
		} params;
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35689);
		
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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35688);
		
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
	 * 		Name   -> Function ANIMBP_MK18.ANIMBP_MK18_C.ExecuteUbergraph_ANIMBP_MK18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MK18_C::ExecuteUbergraph_ANIMBP_MK18(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35687);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_MK18_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_MK18_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(35686);
		return ptr;
	}

}


