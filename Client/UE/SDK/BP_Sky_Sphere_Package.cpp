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
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Sky_Sphere_C::RefreshMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(74224);
		
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
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Sky_Sphere_C::UpdateSunDirection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(74223);
		
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
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Sky_Sphere_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(74222);
		
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
	 * 		Name   -> PredefinedFunction ABP_Sky_Sphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_Sky_Sphere_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(74221);
		return ptr;
	}

}

