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
	 * 		Name   -> Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Toggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_Legend_C::Toggle(bool* IsOpen)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30962);
		
		struct
		{
			bool                                               IsOpen;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_Legend_C::Open()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30961);
		
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
	 * 		Name   -> Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Close
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_Legend_C::Close()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30960);
		
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
	 * 		Name   -> Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.ExecuteUbergraph_W_PreMission_Tablet_Legend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_Tablet_Legend_C::ExecuteUbergraph_W_PreMission_Tablet_Legend(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30959);
		
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
	 * 		Name   -> PredefinedFunction UW_PreMission_Tablet_Legend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PreMission_Tablet_Legend_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30958);
		return ptr;
	}

}


