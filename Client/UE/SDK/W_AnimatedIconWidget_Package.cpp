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
	 * 		Name   -> Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.SetInteractState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_AnimatedIconWidget_C::SetInteractState(bool bValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24788);
		
		struct
		{
			bool                                               bValid;
		} params;
		params.bValid = bValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.ExecuteUbergraph_W_AnimatedIconWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_AnimatedIconWidget_C::ExecuteUbergraph_W_AnimatedIconWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24787);
		
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
	 * 		Name   -> PredefinedFunction UW_AnimatedIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_AnimatedIconWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(24786);
		return ptr;
	}

}


