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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40415);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40414);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct Fst_HotkeySettings                          Hotkey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::SetBinding(const struct Fst_HotkeySettings& Hotkey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40413);
		
		struct
		{
			struct Fst_HotkeySettings                          Hotkey;
		} params;
		params.Hotkey = Hotkey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40412);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40411);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40410);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40409);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40408);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::ExecuteUbergraph_W_HotkeyBar_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40407);
		
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
	 * 		Name   -> Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_HotkeyBar_Entry_C*                        TriggeringHotkeyEntry                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_Entry_C::OnHotkeyButtonClicked__DelegateSignature(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(40406);
		
		struct
		{
			class UW_HotkeyBar_Entry_C*                        TriggeringHotkeyEntry;
		} params;
		params.TriggeringHotkeyEntry = TriggeringHotkeyEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_HotkeyBar_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_HotkeyBar_Entry_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40405);
		return ptr;
	}

}


