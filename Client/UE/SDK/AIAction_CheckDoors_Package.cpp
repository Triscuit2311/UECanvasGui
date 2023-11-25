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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.ResetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::ResetData()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84196);
		
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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.CanCheckDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADoor*                                       Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::CanCheckDoor(class ADoor* Door, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84195);
		
		struct
		{
			class ADoor*                                       Door;
			bool                                               ReturnValue;
		} params;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.Event_RemoveLastCheckedDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::Event_RemoveLastCheckedDoor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84194);
		
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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84193);
		
		struct
		{
			class ACyberneticController*                       Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84192);
		
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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnMoveComplete_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32_t RequestID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84191);
		
		struct
		{
			class AAIController*                               Controller;
			int32_t                                            RequestID;
		} params;
		params.Controller = Controller;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84190);
		
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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnPathFound_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PathId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERonNavigationQueryResult                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::OnPathFound_Blueprint(int32_t PathId, ERonNavigationQueryResult Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84189);
		
		struct
		{
			int32_t                                            PathId;
			ERonNavigationQueryResult                          Result;
		} params;
		params.PathId = PathId;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.InitAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::InitAction_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84188);
		
		struct
		{
			class ACyberneticController*                       Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.EndAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::EndAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84187);
		
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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.ExecuteUbergraph_AIAction_CheckDoors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_CheckDoors_C::ExecuteUbergraph_AIAction_CheckDoors(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84186);
		
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
	 * 		Name   -> PredefinedFunction UAIAction_CheckDoors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_CheckDoors_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84185);
		return ptr;
	}

}


