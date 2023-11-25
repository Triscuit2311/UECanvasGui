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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24345);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SCAR_L_AnimGraphNode_ModifyBone_63CED5434E3B6F80396FBFBF2AD2D247
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SCAR_L_AnimGraphNode_ModifyBone_63CED5434E3B6F80396FBFBF2AD2D247()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24344);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SCAR_L_AnimGraphNode_BlendListByBool_49A8C05741D54A5C16477CBFFA9A0D29
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SCAR_L_AnimGraphNode_BlendListByBool_49A8C05741D54A5C16477CBFFA9A0D29()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24343);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24342);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24341);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24340);
		
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
	 * 		Name   -> Function ANIMBP_SCAR_L.ANIMBP_SCAR_L_C.ExecuteUbergraph_ANIMBP_SCAR_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_SCAR_L_C::ExecuteUbergraph_ANIMBP_SCAR_L(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24339);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_SCAR_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_SCAR_L_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(24338);
		return ptr;
	}

}

