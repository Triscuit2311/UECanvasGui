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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44873);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_ModifyBone_4145EDEF444AE51BD88897AEB2156270
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_ModifyBone_4145EDEF444AE51BD88897AEB2156270()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44872);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_BlendListByBool_DF4CA0A943CB2A4BF9E3008B64199A35
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPX_AnimGraphNode_BlendListByBool_DF4CA0A943CB2A4BF9E3008B64199A35()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44871);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44870);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44869);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44868);
		
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
	 * 		Name   -> Function AnimBP_MPX.ANIMBP_MPX_C.ExecuteUbergraph_ANIMBP_MPX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MPX_C::ExecuteUbergraph_ANIMBP_MPX(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(44867);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_MPX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_MPX_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44866);
		return ptr;
	}

}


