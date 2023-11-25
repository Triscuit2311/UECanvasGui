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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.CanStartle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::CanStartle(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84156);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.AngleToAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::AngleToAnimation(float InAngle, bool bRight, class FString* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84155);
		
		struct
		{
			float                                              InAngle;
			bool                                               bRight;
			unsigned char                                      UnknownData_0001[0x3];
			class FString                                      ReturnValue;
		} params;
		params.InAngle = InAngle;
		params.bRight = bRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.IsLocationRightOfUs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::IsLocationRightOfUs(const struct FVector& InLocation, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84154);
		
		struct
		{
			struct FVector                        InLocation;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0002[0x3];
		} params;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.ShouldPerformAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UAIAction_Startle_C::ShouldPerformAction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84153);
		
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::BeginAction_Blueprint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84152);
		
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.InitAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::InitAction_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84151);
		
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84150);
		
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.ResetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::ResetData()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84149);
		
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
	 * 		Name   -> Function AIAction_Startle.AIAction_Startle_C.ExecuteUbergraph_AIAction_Startle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAIAction_Startle_C::ExecuteUbergraph_AIAction_Startle(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84148);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0003[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Startle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAIAction_Startle_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84147);
		return ptr;
	}

}


