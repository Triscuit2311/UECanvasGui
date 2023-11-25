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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35070);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_ModifyBone_F8DD9F834A1362227A76659BBDFB391B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_ModifyBone_F8DD9F834A1362227A76659BBDFB391B()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35069);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_BlendListByBool_A79BAE044D4E4B45AC3186A1665EC9F5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_BlendListByBool_A79BAE044D4E4B45AC3186A1665EC9F5()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35068);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35067);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35066);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35065);
		
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
	 * 		Name   -> Function ANIMBP_MP7.ANIMBP_MP7_C.ExecuteUbergraph_ANIMBP_MP7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_MP7_C::ExecuteUbergraph_ANIMBP_MP7(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(35064);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_MP7_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_MP7_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(35063);
		return ptr;
	}

}


