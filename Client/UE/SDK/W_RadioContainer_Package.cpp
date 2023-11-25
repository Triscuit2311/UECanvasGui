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
	 * 		Name   -> Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IIRadioWidget_C>            NewSelectedChild                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadioContainer_C::OnNewChildSelected(const TScriptInterface<class IIRadioWidget_C>& NewSelectedChild)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28578);
		
		struct
		{
			TScriptInterface<class IIRadioWidget_C>            NewSelectedChild;
		} params;
		params.NewSelectedChild = NewSelectedChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IIRadioWidget_C>            NewChild                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadioContainer_C::RegisterRadioChild(const TScriptInterface<class IIRadioWidget_C>& NewChild)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28577);
		
		struct
		{
			TScriptInterface<class IIRadioWidget_C>            NewChild;
		} params;
		params.NewChild = NewChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_RadioContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_RadioContainer_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28576);
		return ptr;
	}

}


