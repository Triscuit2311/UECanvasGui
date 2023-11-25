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
	 * 		Name   -> PredefinedFunction UChaosEventListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosEventListenerComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3396);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosGameplayEventDispatcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosGameplayEventDispatcher::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3397);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IChaosNotifyHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IChaosNotifyHandlerInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3398);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  PhysicsCollision                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20285);
		
		struct
		{
			struct FChaosPhysicsCollisionInfo                  PhysicsCollision;
			struct FHitResult                                  ReturnValue;
		} params;
		params.PhysicsCollision = PhysicsCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosSolverEngineBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosSolverEngineBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3399);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosSolver::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3400);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AChaosSolverActor::SetSolverActive(bool bActive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20287);
		
		struct
		{
			bool                                               bActive;
		} params;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AChaosSolverActor::SetAsCurrentWorldSolver()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20286);
		
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
	 * 		Name   -> PredefinedFunction AChaosSolverActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AChaosSolverActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3401);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosSolverSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosSolverSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3402);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosDebugDrawComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosDebugDrawComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3395);
		return ptr;
	}

}


