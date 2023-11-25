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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.GetNextClosestAliveCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::GetNextClosestAliveCivilian(class ACivilianCharacter** Civilian, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113123);
		
		struct
		{
			class ACivilianCharacter*                          Civilian;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Civilian != nullptr)
			*Civilian = params.Civilian;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.CanTargetCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          InCivilian                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::CanTargetCivilian(class ACivilianCharacter* InCivilian, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113124);
		
		struct
		{
			class ACivilianCharacter*                          InCivilian;
			bool                                               ReturnValue;
		} params;
		params.InCivilian = InCivilian;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.ShouldPerformAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAIAction_ActiveShooter_TargetNextCivilian_C::ShouldPerformAction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113125);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113126);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113127);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.EndAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::EndAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113128);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.OnPathFound_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PathId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERonNavigationQueryResult                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::OnPathFound_Blueprint(int32_t PathId, ERonNavigationQueryResult Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113129);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.FindNextCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::FindNextCivilian()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113130);
		
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
	 * 		Name   -> Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_ActiveShooter_TargetNextCivilian_C::ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(113131);
		
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
	 * 		Name   -> PredefinedFunction UAIAction_ActiveShooter_TargetNextCivilian_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_ActiveShooter_TargetNextCivilian_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(113132);
		return ptr;
	}

}


