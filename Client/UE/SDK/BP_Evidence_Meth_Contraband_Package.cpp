/**
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.OnRep_bPhoneOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::OnRep_bPhoneOn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120146);
		
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.TurnOnPhone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::TurnOnPhone()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120147);
		
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.TurnOffPhone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::TurnOffPhone()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120148);
		
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.UpdatePhoneState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::UpdatePhoneState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120149);
		
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.Server_SetPhoneState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::Server_SetPhoneState(bool bOn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120150);
		
		struct
		{
			bool                                               bOn;
		} params;
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.OnActorPickedUp_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      PickedActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::OnActorPickedUp_Event_1(class AActor* PickedActor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120151);
		
		struct
		{
			class AActor*                                      PickedActor;
		} params;
		params.PickedActor = PickedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120152);
		
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
	 * 		Name   -> Function BP_Evidence_Meth_Contraband.BP_Evidence_Meth_Contraband_C.ExecuteUbergraph_BP_Evidence_Meth_Contraband
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_Evidence_Meth_Contraband_C::ExecuteUbergraph_BP_Evidence_Meth_Contraband(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120153);
		
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
	 * 		Name   -> PredefinedFunction ABP_Evidence_Meth_Contraband_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_Evidence_Meth_Contraband_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(120154);
		return ptr;
	}

}


