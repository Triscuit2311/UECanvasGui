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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Get_btn_Lobby_Visibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_PauseMenu_C::Get_btn_Lobby_Visibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49250);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Get_btn_Invite_Visibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_PauseMenu_C::Get_btn_Invite_Visibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49249);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_PauseMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49248);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.GetCallVoteEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_PauseMenu_C::GetCallVoteEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49247);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.GetMissionBoxVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_PauseMenu_C::GetMissionBoxVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49246);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Get_HorizontalBox_25_Visibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_PauseMenu_C::Get_HorizontalBox_25_Visibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49245);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Get_Version_Text_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_PauseMenu_C::Get_Version_Text_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49244);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49243);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49242);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Destroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::Destroy()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49241);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Resume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::Resume()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49240);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49239);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49238);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49237);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49236);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49235);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49234);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49233);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49232);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49231);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49230);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49229);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49228);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49227);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49226);
		
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
	 * 		Name   -> Function W_PauseMenu.W_PauseMenu_C.ExecuteUbergraph_W_PauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PauseMenu_C::ExecuteUbergraph_W_PauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49225);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0005[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PauseMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49224);
		return ptr;
	}

}


