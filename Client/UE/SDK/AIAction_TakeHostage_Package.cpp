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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianNotFacingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::IsCivilianNotFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84140);
		
		struct
		{
			class ACivilianCharacter*                          Civilian;
			class AReadyOrNotCharacter*                        Target;
			bool                                               ReturnValue;
		} params;
		params.Civilian = Civilian;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianFacingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::IsCivilianFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84139);
		
		struct
		{
			class ACivilianCharacter*                          Civilian;
			class AReadyOrNotCharacter*                        Target;
			bool                                               ReturnValue;
		} params;
		params.Civilian = Civilian;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.AnySWATNearCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::AnySWATNearCivilian(class ACivilianCharacter* Civilian, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84138);
		
		struct
		{
			class ACivilianCharacter*                          Civilian;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.Civilian = Civilian;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnTakeHostageFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::OnTakeHostageFinished(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84137);
		
		struct
		{
			class UBaseActivity*                               Activity;
			class ACyberneticController*                       Controller;
		} params;
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.TraceForNearbyCivilians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACivilianCharacter*>                  ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::TraceForNearbyCivilians(TArray<class ACivilianCharacter*>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84136);
		
		struct
		{
			TArray<class ACivilianCharacter*>                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.ShouldPerformAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAIAction_TakeHostage_C::ShouldPerformAction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84135);
		
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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.FindClosestCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACivilianCharacter*>                  Civilians                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ACivilianCharacter*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::FindClosestCivilian(TArray<class ACivilianCharacter*>* Civilians, class ACivilianCharacter** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84134);
		
		struct
		{
			TArray<class ACivilianCharacter*>                  Civilians;
			class ACivilianCharacter*                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Civilians != nullptr)
			*Civilians = params.Civilians;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84133);
		
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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84132);
		
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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84131);
		
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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.ExecuteUbergraph_AIAction_TakeHostage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_TakeHostage_C::ExecuteUbergraph_AIAction_TakeHostage(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84130);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_TakeHostage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_TakeHostage_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84129);
		return ptr;
	}

}


