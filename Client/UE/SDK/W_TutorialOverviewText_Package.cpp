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
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialOverviewText_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27084);
		
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
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialOverviewText_C::BndEvt__Button_104_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27083);
		
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
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.UpdateMessageContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialOverviewText_C::UpdateMessageContent(TArray<class FText> MessageContent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27082);
		
		struct
		{
			TArray<class FText>                                MessageContent;
		} params;
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.ShowOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FText>                                TitleContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialOverviewText_C::ShowOverview(const class FText& Title_Text, TArray<class FText>* TitleContent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27081);
		
		struct
		{
			class FText                                        Title_Text;
			TArray<class FText>                                TitleContent;
		} params;
		params.Title_Text = Title_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TitleContent != nullptr)
			*TitleContent = params.TitleContent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialOverviewText.W_TutorialOverviewText_C.ExecuteUbergraph_W_TutorialOverviewText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_TutorialOverviewText_C::ExecuteUbergraph_W_TutorialOverviewText(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27080);
		
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
	 * 		Name   -> PredefinedFunction UW_TutorialOverviewText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_TutorialOverviewText_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27079);
		return ptr;
	}

}


