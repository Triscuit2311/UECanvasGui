/**
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54061);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54060);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_ArrestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_ArrestComplete()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54059);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_PlayFootstep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_PlayFootstep()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54058);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_CaptureSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_CaptureSnapshot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54057);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_ExplodeVest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_ExplodeVest()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54056);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54055);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_96A47EA341AD120E0E97819CDA871E8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_96A47EA341AD120E0E97819CDA871E8B()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54054);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54053);
		
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
	 * 		Name   -> Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_AI_MoveStyle_Base_C::ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54052);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_AI_MoveStyle_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_AI_MoveStyle_Base_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54051);
		return ptr;
	}

}


