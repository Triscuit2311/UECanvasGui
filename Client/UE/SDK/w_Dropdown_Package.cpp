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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.ClearSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::ClearSelection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57970);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.DisableInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::DisableInteraction(bool Disable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57969);
		
		struct
		{
			bool                                               Disable;
		} params;
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.CloseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::CloseMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57968);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetLabelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        LabelText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::SetLabelText(const class FText& LabelText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57967);
		
		struct
		{
			class FText                                        LabelText;
		} params;
		params.LabelText = LabelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.UpdateLabelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::UpdateLabelText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57966);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::SetSelection(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57965);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.SetOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FText>                   Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::SetOptions(TMap<class FString, class FText> Options)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57964);
		
		struct
		{
			TMap<class FString, class FText>                   Options;
		} params;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::AddOption(const class FString& OptionID, const class FText& OptionText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57963);
		
		struct
		{
			class FString                                      OptionID;
			class FText                                        OptionText;
		} params;
		params.OptionID = OptionID;
		params.OptionText = OptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* Uw_Dropdown_C::On_DropdownMenuAnchor_GetUserMenuContent_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57962);
		
		struct
		{
			class UUserWidget*                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57961);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57960);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OptionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OptionSelected(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57959);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::FooterOptionSelected(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57958);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::Reveal(float Delay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57957);
		
		struct
		{
			float                                              Delay;
		} params;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57956);
		
		struct
		{
			float                                              Delay;
			bool                                               Collapse;
		} params;
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Collapse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::Collapse()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57955);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OptionHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OptionHovered(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57954);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.Clickaway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::Clickaway()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57953);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::ExecuteUbergraph_w_Dropdown(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57952);
		
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
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class Uw_Dropdown_C*                               TriggeringDropdown                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OnMenuClosed__DelegateSignature(class Uw_Dropdown_C* TriggeringDropdown)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57951);
		
		struct
		{
			class Uw_Dropdown_C*                               TriggeringDropdown;
		} params;
		params.TriggeringDropdown = TriggeringDropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57950);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57949);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_Dropdown_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40262);
		
		struct
		{
			class FString                                      OptionID;
		} params;
		params.OptionID = OptionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uw_Dropdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* Uw_Dropdown_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40261);
		return ptr;
	}

}


