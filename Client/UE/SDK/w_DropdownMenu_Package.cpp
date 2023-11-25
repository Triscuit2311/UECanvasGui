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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40252);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FText>                   Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::PopulateOptions(TMap<class FString, class FText> Options)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40251);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OptionClicked(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40250);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::FooterOptionClicked(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40249);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OptionHovered(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40248);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40247);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::ExecuteUbergraph_w_DropdownMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40246);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnClickaway__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OnClickaway__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40245);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OnOptionHovered__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40244);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40243);
		
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
	 * 		Name   -> Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void Uw_DropdownMenu_C::OnOptionSelected__DelegateSignature(const class FString& OptionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40242);
		
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
	 * 		Name   -> PredefinedFunction Uw_DropdownMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* Uw_DropdownMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40241);
		return ptr;
	}

}


