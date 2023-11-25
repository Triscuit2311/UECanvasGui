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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.UpdateShoothouseTimers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::UpdateShoothouseTimers(float Seconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125314);
		
		struct
		{
			float                                              Seconds;
		} params;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ResetShoothouseTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ResetShoothouseTargets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125315);
		
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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ResetShoothouseDoors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ResetShoothouseDoors()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125316);
		
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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.AllTargetsDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::AllTargetsDamaged(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125317);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x3];
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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125318);
		
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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125319);
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::CustomEvent_3(class APlayerCharacter* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125320);
		
		struct
		{
			class APlayerCharacter*                            TriggeredBy;
		} params;
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::CustomEvent_4(class APlayerCharacter* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125321);
		
		struct
		{
			class APlayerCharacter*                            TriggeredBy;
		} params;
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ShoothouseTrialFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ShoothouseTrialFail()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125322);
		
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
	 * 		Name   -> Function Lobby_V2.Lobby_V2_C.ExecuteUbergraph_Lobby_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ALobby_V2_C::ExecuteUbergraph_Lobby_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125323);
		
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
	 * 		Name   -> PredefinedFunction ALobby_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ALobby_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125324);
		return ptr;
	}

}


