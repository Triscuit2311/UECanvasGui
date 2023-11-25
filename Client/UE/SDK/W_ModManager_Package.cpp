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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ModManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94276);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94275);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89146);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OnLoadingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::OnLoadingStarted()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89145);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OnLoadingFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::OnLoadingFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89144);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_3_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_Button_3_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89143);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89142);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.AddMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModData*                                    ModData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::AddMod(class UModData* ModData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89141);
		
		struct
		{
			class UModData*                                    ModData;
		} params;
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_Button_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89140);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.ClearMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::ClearMods()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89139);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OnProfilePictureLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::OnProfilePictureLoaded(class UTexture2DDynamic* Image)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89138);
		
		struct
		{
			class UTexture2DDynamic*                           Image;
		} params;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModManager.W_ModManager_C.ShowUserAuthenticator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::ShowUserAuthenticator()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89137);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OnUserAuthenticated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::OnUserAuthenticated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89136);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_EditableTextBox_95_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_EditableTextBox_95_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89135);
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89134);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.ShowErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::ShowErrorDialog(const class FString& ErrorMessage)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89133);
		
		struct
		{
			class FString                                      ErrorMessage;
		} params;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_W_ModErrorDialog_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_W_ModErrorDialog_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89132);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89131);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.OpenModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModData*                                    ModData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::OpenModDetails(class UModData* ModData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89130);
		
		struct
		{
			class UModData*                                    ModData;
		} params;
		params.ModData = ModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModManager.W_ModManager_C.CloseModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::CloseModDetails()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89129);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.BndEvt__W_ModManager_btn_Login_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::BndEvt__W_ModManager_btn_Login_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89128);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.CloseModManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::CloseModManager()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89127);
		
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
	 * 		Name   -> Function W_ModManager.W_ModManager_C.ExecuteUbergraph_W_ModManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModManager_C::ExecuteUbergraph_W_ModManager(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89126);
		
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
	 * 		Name   -> PredefinedFunction UW_ModManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ModManager_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89125);
		return ptr;
	}

}

