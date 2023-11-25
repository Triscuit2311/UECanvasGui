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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IIRadioWidget_C>            Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::Equals(const TScriptInterface<class IIRadioWidget_C>& Other, bool* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40146);
		
		struct
		{
			TScriptInterface<class IIRadioWidget_C>            Other;
			bool                                               Result;
			unsigned char                                      UnknownData_0000[0x7];
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UW_StandardRadioButton_C::GetTabControlIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(52122);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_RadioContainer_C*                         RadioContainer                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::GetParentContainerSlow(class UW_RadioContainer_C** RadioContainer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40145);
		
		struct
		{
			class UW_RadioContainer_C*                         RadioContainer;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadioContainer != nullptr)
			*RadioContainer = params.RadioContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnClicked_Derived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::OnClicked_Derived()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49464);
		
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40144);
		
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::OnRadioSelected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40143);
		
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::OnRadioDeselected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40142);
		
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.EventReconstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::EventReconstruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40141);
		
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
	 * 		Name   -> Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardRadioButton_C::ExecuteUbergraph_W_StandardRadioButton(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40140);
		
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
	 * 		Name   -> PredefinedFunction UW_StandardRadioButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_StandardRadioButton_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40139);
		return ptr;
	}

}


