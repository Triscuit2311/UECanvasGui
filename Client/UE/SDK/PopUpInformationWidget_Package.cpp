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
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.Get_RoundCount_Visibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UPopUpInformationWidget_C::Get_RoundCount_Visibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114372);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UPopUpInformationWidget_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114373);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.DisplayText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UPopUpInformationWidget_C::DisplayText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114374);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.Get_RoundCount_Text_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UPopUpInformationWidget_C::Get_RoundCount_Text_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114375);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.OnGameStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPopUpInformationWidget_C::OnGameStarted()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114376);
		
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
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPopUpInformationWidget_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(114377);
		
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
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPopUpInformationWidget_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112279);
		
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
	 * 		Name   -> Function PopUpInformationWidget.PopUpInformationWidget_C.ExecuteUbergraph_PopUpInformationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UPopUpInformationWidget_C::ExecuteUbergraph_PopUpInformationWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112280);
		
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
	 * 		Name   -> PredefinedFunction UPopUpInformationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPopUpInformationWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(112281);
		return ptr;
	}

}


