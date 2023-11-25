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
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.IsFakeExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESurrenderExitType                                 ExitType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_SurrenderExit_C::IsFakeExit(ESurrenderExitType ExitType, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84146);
		
		struct
		{
			ESurrenderExitType                                 ExitType;
			bool                                               ReturnValue;
		} params;
		params.ExitType = ExitType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ShouldPerformAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAIAction_SurrenderExit_C::ShouldPerformAction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84145);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_SurrenderExit_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84144);
		
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
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_SurrenderExit_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84143);
		
		struct
		{
			float                                              DeltaTime;
		} params;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ExecuteUbergraph_AIAction_SurrenderExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_SurrenderExit_C::ExecuteUbergraph_AIAction_SurrenderExit(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84142);
		
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
	 * 		Name   -> PredefinedFunction UAIAction_SurrenderExit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_SurrenderExit_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84141);
		return ptr;
	}

}


