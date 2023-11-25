﻿/**
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLooping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::SetLooping(bool IsLooping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57009);
		
		struct
		{
			bool                                               IsLooping;
		} params;
		params.IsLooping = IsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Briefing_Audio_PlayStates                        AudioPlayState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::SetState(E_Briefing_Audio_PlayStates AudioPlayState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57008);
		
		struct
		{
			E_Briefing_Audio_PlayStates                        AudioPlayState;
		} params;
		params.AudioPlayState = AudioPlayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57007);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57006);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57005);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57004);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57003);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57002);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57001);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57000);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56999);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56998);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56997);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56996);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_AudioControls_Button_C*          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::ButtonHover(class UW_Briefing_AudioControls_Button_C* Button, bool Hovered)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56995);
		
		struct
		{
			class UW_Briefing_AudioControls_Button_C*          Button;
			bool                                               Hovered;
		} params;
		params.Button = Button;
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ExecuteUbergraph_W_Briefing_AudioControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::ExecuteUbergraph_W_Briefing_AudioControls(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56994);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.FastForward__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::FastForward__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56993);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Loop__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Loop__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56992);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Restart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Restart__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56991);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Rewind__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Rewind__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(56990);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Stop__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Stop__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31433);
		
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Play__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_AudioControls_C::Play__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31432);
		
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
	 * 		Name   -> PredefinedFunction UW_Briefing_AudioControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_AudioControls_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31431);
		return ptr;
	}

}


