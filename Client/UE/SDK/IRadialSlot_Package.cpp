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
	 * 		Name   -> Function IRadialSlot.IRadialSlot_C.OnUnhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unselected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void IIRadialSlot_C::OnUnhighlight(bool Unselected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54205);
		
		struct
		{
			bool                                               Unselected;
		} params;
		params.Unselected = Unselected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IRadialSlot.IRadialSlot_C.OnHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void IIRadialSlot_C::OnHighlight(bool Selected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54204);
		
		struct
		{
			bool                                               Selected;
		} params;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IIRadialSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IIRadialSlot_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54203);
		return ptr;
	}

}


