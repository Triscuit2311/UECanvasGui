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
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.SetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ModalDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::SetDescriptionText(const class FText& ModalDescription)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49020);
		
		struct
		{
			class FText                                        ModalDescription;
		} params;
		params.ModalDescription = ModalDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.DisplayWarningText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WarningText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::DisplayWarningText(const class FText& WarningText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49019);
		
		struct
		{
			class FText                                        WarningText;
		} params;
		params.WarningText = WarningText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.CancelConfirmTextEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::CancelConfirmTextEntry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49018);
		
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
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.ConfirmTextEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ConfirmTitleText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ConfirmDescriptionText                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::ConfirmTextEntry(const class FText& ConfirmTitleText, const class FText& ConfirmDescriptionText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49017);
		
		struct
		{
			class FText                                        ConfirmTitleText;
			class FText                                        ConfirmDescriptionText;
		} params;
		params.ConfirmTitleText = ConfirmTitleText;
		params.ConfirmDescriptionText = ConfirmDescriptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.Get_OkButton_bIsEnabled_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_StandardModal_C::Get_OkButton_bIsEnabled_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49016);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.OnUserScrolled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::OnUserScrolled_Event_1(float CurrentOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49015);
		
		struct
		{
			float                                              CurrentOffset;
		} params;
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49014);
		
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
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49013);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49012);
		
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
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::BndEvt__W_StandardModal_CancelButton2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49011);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::BndEvt__W_StandardModal_OkButton2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49010);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::BndEvt__W_StandardModal_ApplyButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49009);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::BndEvt__W_StandardModal_EditableTextBox_80_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49002);
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.ExecuteUbergraph_W_StandardModal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::ExecuteUbergraph_W_StandardModal(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49001);
		
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
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::OnTextCommitted__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49000);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.OnApplyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48999);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.OnCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::OnCancelClicked__DelegateSignature(class UW_StandardModal_C* CallingModal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48998);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
		} params;
		params.CallingModal = CallingModal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardModal.W_StandardModal_C.OnOkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardModal_C::OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48997);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StandardModal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_StandardModal_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48996);
		return ptr;
	}

}


