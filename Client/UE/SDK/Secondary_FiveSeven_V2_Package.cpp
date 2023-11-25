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
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.DestroyPouches_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ASecondary_FiveSeven_V2_C::DestroyPouches_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(32220);
		
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
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.SpawnPouches_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ASecondary_FiveSeven_V2_C::SpawnPouches_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(32219);
		
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
	 * 		Name   -> Function Secondary_FiveSeven_V2.Secondary_FiveSeven_V2_C.ExecuteUbergraph_Secondary_FiveSeven_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ASecondary_FiveSeven_V2_C::ExecuteUbergraph_Secondary_FiveSeven_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(32218);
		
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
	 * 		Name   -> PredefinedFunction ASecondary_FiveSeven_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ASecondary_FiveSeven_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(32217);
		return ptr;
	}

}


