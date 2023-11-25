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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45123);
		
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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19G5_AnimGraphNode_BlendListByBool_60CFA88C4D4AEA81A41BB499B0DCB9F2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45122);
		
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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_DropSpeedReloadMagazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::AnimNotify_DropSpeedReloadMagazine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45121);
		
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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.AnimNotify_ShowMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45120);
		
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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45119);
		
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
	 * 		Name   -> Function ANIMBP_G19G5.ANIMBP_G19G5_C.ExecuteUbergraph_ANIMBP_G19G5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UANIMBP_G19G5_C::ExecuteUbergraph_ANIMBP_G19G5(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(45118);
		
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
	 * 		Name   -> PredefinedFunction UANIMBP_G19G5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UANIMBP_G19G5_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45117);
		return ptr;
	}

}


