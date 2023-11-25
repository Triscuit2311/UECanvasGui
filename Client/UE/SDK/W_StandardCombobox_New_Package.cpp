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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UW_StandardCombobox_New_C::Get_BackGroundImg_ColorAndOpacity_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51512);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionAsString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::GetCurrentOptionAsString(class FString* OptionAsString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51511);
		
		struct
		{
			class FString                                      OptionAsString;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionAsString != nullptr)
			*OptionAsString = params.OptionAsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ClearOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::ClearOptions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(51510);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::DeleteOptionString(const class FString& StringValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38206);
		
		struct
		{
			class FString                                      StringValue;
		} params;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::DeleteOptionIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38205);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OptionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OptionDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::InsertOption(int32_t Index, const class FString& OptionString, const class FText& OptionName, const class FText& OptionDescription)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38204);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      OptionString;
			class FText                                        OptionName;
			class FText                                        OptionDescription;
		} params;
		params.Index = Index;
		params.OptionString = OptionString;
		params.OptionName = OptionName;
		params.OptionDescription = OptionDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OptionDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::AddOption(const class FString& OptionString, const class FText& OptionName, const class FText& OptionDescription)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38203);
		
		struct
		{
			class FString                                      OptionString;
			class FText                                        OptionName;
			class FText                                        OptionDescription;
		} params;
		params.OptionString = OptionString;
		params.OptionName = OptionName;
		params.OptionDescription = OptionDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::SetStringOption(const class FString& Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38202);
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::SetOption(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38201);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::UpdateOptionText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38200);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionAsString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::ReceivedOptionClickedSignal(const class FString& OptionAsString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38199);
		
		struct
		{
			class FString                                      OptionAsString;
		} params;
		params.OptionAsString = OptionAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UW_StandardCombobox_New_C::GetAnchorMenuContent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38198);
		
		struct
		{
			class UWidget*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38197);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38196);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38195);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38194);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38193);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38192);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38191);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.Reconstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::Reconstruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38190);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::ExecuteUbergraph_W_StandardCombobox_New(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38189);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38188);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38187);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38186);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38185);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38184);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnOptionMenuClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38183);
		
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
	 * 		Name   -> Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_StandardCombobox_New_C::OnOptionMenuOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(38182);
		
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
	 * 		Name   -> PredefinedFunction UW_StandardCombobox_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_StandardCombobox_New_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(38181);
		return ptr;
	}

}


