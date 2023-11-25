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
	 * 		Name   -> Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.GetIsSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelf                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_MessengerMessage_C::GetIsSelf(bool* IsSelf)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30909);
		
		struct
		{
			bool                                               IsSelf;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelf != nullptr)
			*IsSelf = params.IsSelf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_MessengerMessage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30908);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_MessengerMessage_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30907);
		
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
	 * 		Name   -> Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_MessengerMessage_C::ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30906);
		
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
	 * 		Name   -> PredefinedFunction UW_PreMission_Tablet_MessengerMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PreMission_Tablet_MessengerMessage_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30905);
		return ptr;
	}

}


