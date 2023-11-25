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
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IIRadioWidget_C>            Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void IIRadioWidget_C::Equals(const TScriptInterface<class IIRadioWidget_C>& Other, bool* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30500);
		
		struct
		{
			TScriptInterface<class IIRadioWidget_C>            Other;
			bool                                               Result;
		} params;
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.OnRadioDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IIRadioWidget_C::OnRadioDeselected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30499);
		
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
	 * 		Name   -> Function IRadioWidget.IRadioWidget_C.OnRadioSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IIRadioWidget_C::OnRadioSelected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30498);
		
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
	 * 		Name   -> PredefinedFunction IIRadioWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IIRadioWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30497);
		return ptr;
	}

}


