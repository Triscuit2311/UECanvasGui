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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Get_TimeDilationSlider_Value_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UW_ReplayControls_C::Get_TimeDilationSlider_Value_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29086);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Get_PauseButtonTxt_Text_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_ReplayControls_C::Get_PauseButtonTxt_Text_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29085);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Get_ReplayTimeSet_Value_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UW_ReplayControls_C::Get_ReplayTimeSet_Value_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29084);
		
		struct
		{
			float                                              ReturnValue;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Get_MaxTime_Text_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_ReplayControls_C::Get_MaxTime_Text_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29083);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Get_CurrentTime_Text_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_ReplayControls_C::Get_CurrentTime_Text_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29082);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ReplayControls_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29081);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29080);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_CloseMenuButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_CloseMenuButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29079);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SkipBackwardButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_SkipBackwardButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29078);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SkipAheadButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_SkipAheadButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29077);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_IncreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_IncreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29076);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_DecreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__W_ReplayControls_DecreasePlaybackSpeedButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29075);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29074);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__ReplayTimeSet_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__ReplayTimeSet_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29073);
		
		struct
		{
			float                                              Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29072);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29071);
		
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
	 * 		Name   -> Function W_ReplayControls.W_ReplayControls_C.ExecuteUbergraph_W_ReplayControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ReplayControls_C::ExecuteUbergraph_W_ReplayControls(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29070);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ReplayControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ReplayControls_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(29069);
		return ptr;
	}

}

