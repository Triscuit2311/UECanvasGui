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
	 * 		Name   -> Function Projectile_Flare.Projectile_Flare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AProjectile_Flare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54572);
		
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
	 * 		Name   -> Function Projectile_Flare.Projectile_Flare_C.SpawnLensFlare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AProjectile_Flare_C::SpawnLensFlare()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54571);
		
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
	 * 		Name   -> Function Projectile_Flare.Projectile_Flare_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AProjectile_Flare_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54570);
		
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
	 * 		Name   -> Function Projectile_Flare.Projectile_Flare_C.ExecuteUbergraph_Projectile_Flare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AProjectile_Flare_C::ExecuteUbergraph_Projectile_Flare(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54569);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0xC];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Flare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AProjectile_Flare_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54568);
		return ptr;
	}

}

