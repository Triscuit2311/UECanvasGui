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
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ApplyEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ApplyEffect()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43422);
		
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
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ResetEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ResetEffect()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43421);
		
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
	 * 		Name   -> Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UGE_PlayerNerf_IncreaseRecoil_C::ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43420);
		
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
	 * 		Name   -> PredefinedFunction UGE_PlayerNerf_IncreaseRecoil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43419);
		return ptr;
	}

}


