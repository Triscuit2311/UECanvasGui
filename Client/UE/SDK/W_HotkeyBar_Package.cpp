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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48830);
		
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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48829);
		
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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct Fst_HotkeySettings>                  Hotkeys                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::UpdateHints(TArray<struct Fst_HotkeySettings> Hotkeys)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48828);
		
		struct
		{
			TArray<struct Fst_HotkeySettings>                  Hotkeys;
		} params;
		params.Hotkeys = Hotkeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_HotkeyBar_Entry_C*                        TriggeringHotkeyEntry                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::HotkeyButtonClicked(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48827);
		
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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::ExecuteUbergraph_W_HotkeyBar(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48826);
		
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
	 * 		Name   -> Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HotkeyID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HotkeyBar_C::OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(48825);
		
		struct
		{
			class FString                                      HotkeyID;
		} params;
		params.HotkeyID = HotkeyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_HotkeyBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_HotkeyBar_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48824);
		return ptr;
	}

}


