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
	 * 		Name   -> Function BP_Destructible_Light_Fluorescent_Ga.BP_Destructible_Light_Fluorescent_Ga_C.OnItemDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_Destructible_Light_Fluorescent_Ga_C::OnItemDestroyed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(99509);
		
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
	 * 		Name   -> Function BP_Destructible_Light_Fluorescent_Ga.BP_Destructible_Light_Fluorescent_Ga_C.ExecuteUbergraph_BP_Destructible_Light_Fluorescent_Ga
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_Destructible_Light_Fluorescent_Ga_C::ExecuteUbergraph_BP_Destructible_Light_Fluorescent_Ga(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(99510);
		
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
	 * 		Name   -> PredefinedFunction ABP_Destructible_Light_Fluorescent_Ga_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_Destructible_Light_Fluorescent_Ga_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(99511);
		return ptr;
	}

}


