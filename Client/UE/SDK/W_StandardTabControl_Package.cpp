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
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.SelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::SelectTab(int32_t Tab)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88665);
		
		struct
		{
			int32_t                                            Tab;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.ShowButtonAtSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::ShowButtonAtSlot(int32_t SlotNum, bool Show)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88664);
		
		struct
		{
			int32_t                                            SlotNum;
			bool                                               Show;
			unsigned char                                      UnknownData_0001[0x3];
		} params;
		params.SlotNum = SlotNum;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.GetButtonAtSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_StandardRadioButton_C*                    Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::GetButtonAtSlot(int32_t Slot, class UW_StandardRadioButton_C** Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88663);
		
		struct
		{
			int32_t                                            Slot;
			unsigned char                                      UnknownData_0002[0x4];
			class UW_StandardRadioButton_C*                    Button;
		} params;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.GetSlotForNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNamedSlot*                                  Slot                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::GetSlotForNumber(int32_t SlotNum, class UNamedSlot** Slot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88662);
		
		struct
		{
			int32_t                                            SlotNum;
			unsigned char                                      UnknownData_0003[0x4];
			class UNamedSlot*                                  Slot;
		} params;
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.SetTabSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelSlot*                                  WidgetAsPanelSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::SetTabSlot(int32_t Tab, class UWidget* Widget, class UPanelSlot** WidgetAsPanelSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88661);
		
		struct
		{
			int32_t                                            Tab;
			unsigned char                                      UnknownData_0004[0x4];
			class UWidget*                                     Widget;
			class UPanelSlot*                                  WidgetAsPanelSlot;
		} params;
		params.Tab = Tab;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetAsPanelSlot != nullptr)
			*WidgetAsPanelSlot = params.WidgetAsPanelSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88660);
		
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
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.OnRadioButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::OnRadioButtonClicked(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88659);
		
		struct
		{
			class UW_StandardButton_C*                         CallingButton;
		} params;
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.ExecuteUbergraph_W_StandardTabControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::ExecuteUbergraph_W_StandardTabControl(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88658);
		
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
	 * 		Name   -> Function W_StandardTabControl.W_StandardTabControl_C.OnTabSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewTabIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_StandardTabControl_C::OnTabSelected__DelegateSignature(class UW_StandardButton_C* CallingButton, int32_t NewTabIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88657);
		
		struct
		{
			class UW_StandardButton_C*                         CallingButton;
			int32_t                                            NewTabIndex;
		} params;
		params.CallingButton = CallingButton;
		params.NewTabIndex = NewTabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StandardTabControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_StandardTabControl_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88656);
		return ptr;
	}

}


