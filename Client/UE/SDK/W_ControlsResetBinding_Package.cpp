﻿/**
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           ControlBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::RemoveKeyBind(class UW_ControlsBind_C* ControlBind)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28313);
		
		struct
		{
			class UW_ControlsBind_C*                           ControlBind;
		} params;
		params.ControlBind = ControlBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::UpdateInputMappings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28312);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Clear Temp Input Mappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::ClearTempInputMappings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28311);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNoneKeyAssigned                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::CheckifNoneKeyIsAssignedAction(bool* IsNoneKeyAssigned)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28310);
		
		struct
		{
			bool                                               IsNoneKeyAssigned;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNoneKeyAssigned != nullptr)
			*IsNoneKeyAssigned = params.IsNoneKeyAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNoneKeyAssigned                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::CheckifNoneKeyIsAssignedAxis(bool* IsNoneKeyAssigned)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28309);
		
		struct
		{
			bool                                               IsNoneKeyAssigned;
			unsigned char                                      UnknownData_0001[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNoneKeyAssigned != nullptr)
			*IsNoneKeyAssigned = params.IsNoneKeyAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28308);
		
		struct
		{
			bool                                               Disabled;
		} params;
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28307);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28306);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28305);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28304);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28303);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::ExecuteUbergraph_W_ControlsResetBinding(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28302);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::OnResetReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28301);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::OnResetPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28300);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::OnResetUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28299);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::OnResetHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28298);
		
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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsResetBinding_C*                   CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsResetBinding_C::OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28297);
		
		struct
		{
			class UW_ControlsResetBinding_C*                   CallingWidget;
		} params;
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ControlsResetBinding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ControlsResetBinding_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28296);
		return ptr;
	}

}

