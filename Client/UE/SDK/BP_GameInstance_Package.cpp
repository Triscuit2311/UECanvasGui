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
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::ReceiveInit()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95691);
		
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
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.AdjustVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::AdjustVolume()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95690);
		
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
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.AddPauseGameCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PauseCondition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::AddPauseGameCondition(const class FString& PauseCondition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95689);
		
		struct
		{
			class FString                                      PauseCondition;
		} params;
		params.PauseCondition = PauseCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.RemovePauseGameCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PauseCondition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::RemovePauseGameCondition(const class FString& PauseCondition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95688);
		
		struct
		{
			class FString                                      PauseCondition;
		} params;
		params.PauseCondition = PauseCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.PauseGameWithConditon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewCondition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::PauseGameWithConditon(const class FString& NewCondition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95687);
		
		struct
		{
			class FString                                      NewCondition;
		} params;
		params.NewCondition = NewCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95686);
		
		struct
		{
			int32_t                                            LocalPlayerNum;
			unsigned char                                      UnknownData_0000[0x4];
			struct FBPUniqueNetId                              PersonInvited;
			struct FBlueprintSessionResult                     SessionToJoin;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInvited = PersonInvited;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95685);
		
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
	 * 		Name   -> PredefinedFunction UBP_GameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBP_GameInstance_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(95684);
		return ptr;
	}

}


