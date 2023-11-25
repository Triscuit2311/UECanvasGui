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
	 * 		Name   -> Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_MoveToPlayerSpawn_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113137);
		
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
	 * 		Name   -> Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_MoveToPlayerSpawn_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113138);
		
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
	 * 		Name   -> Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.EndAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_MoveToPlayerSpawn_C::EndAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113139);
		
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
	 * 		Name   -> Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.ExecuteUbergraph_AIAction_MoveToPlayerSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_MoveToPlayerSpawn_C::ExecuteUbergraph_AIAction_MoveToPlayerSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113140);
		
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
	 * 		Name   -> PredefinedFunction UAIAction_MoveToPlayerSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_MoveToPlayerSpawn_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(113141);
		return ptr;
	}

}


