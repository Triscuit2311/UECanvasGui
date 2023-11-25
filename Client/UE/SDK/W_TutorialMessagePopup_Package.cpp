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
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27096);
		
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
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstShowing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FText>                                Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::ShowMessagePrompt(bool IsFirstShowing, const class FText& Title, TArray<class FText> Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27095);
		
		struct
		{
			bool                                               IsFirstShowing;
			unsigned char                                      UnknownData_0000[0x7];
			class FText                                        Title;
			TArray<class FText>                                Content;
		} params;
		params.IsFirstShowing = IsFirstShowing;
		params.Title = Title;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.HideMessagePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::HideMessagePrompt()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27094);
		
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
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::UpdateMessageContent(TArray<class FText> Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27093);
		
		struct
		{
			TArray<class FText>                                Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ClearMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::ClearMessages()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27092);
		
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
	 * 		Name   -> Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialMessagePopup_C::ExecuteUbergraph_W_TutorialMessagePopup(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27091);
		
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
	 * 		Name   -> PredefinedFunction UW_TutorialMessagePopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_TutorialMessagePopup_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27090);
		return ptr;
	}

}


