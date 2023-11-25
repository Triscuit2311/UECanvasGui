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
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AProjectile_TrashBag_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(37963);
		
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
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AProjectile_TrashBag_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(37962);
		
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
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.OnDeflect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  DeflectionHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void AProjectile_TrashBag_C::OnDeflect(const struct FHitResult& DeflectionHit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(37961);
		
		struct
		{
			struct FHitResult                                  DeflectionHit;
		} params;
		params.DeflectionHit = DeflectionHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Projectile_TrashBag.Projectile_TrashBag_C.ExecuteUbergraph_Projectile_TrashBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AProjectile_TrashBag_C::ExecuteUbergraph_Projectile_TrashBag(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(37960);
		
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
	 * 		Name   -> PredefinedFunction AProjectile_TrashBag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AProjectile_TrashBag_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(37959);
		return ptr;
	}

}


