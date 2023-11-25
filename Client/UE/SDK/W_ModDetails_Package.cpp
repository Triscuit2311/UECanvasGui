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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.FormatUpdateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        FormattedTime                                              (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::FormatUpdateTime(class FText* FormattedTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95228);
		
		struct
		{
			class FText                                        FormattedTime;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedTime != nullptr)
			*FormattedTime = params.FormattedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.CreateGalleryThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::CreateGalleryThumbnail(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95227);
		
		struct
		{
			class UTexture2DDynamic*                           Image;
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::SetStats()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95226);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetRating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::SetRating()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95225);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.SetButtonSubcribedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::SetButtonSubcribedState(bool Subscribed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95224);
		
		struct
		{
			bool                                               Subscribed;
		} params;
		params.Subscribed = Subscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnGalleryImageLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnGalleryImageLoaded(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95223);
		
		struct
		{
			class UTexture2DDynamic*                           Image;
			int32_t                                            Index;
		} params;
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.LoadImageFromThumb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ModDetailsThumbnails_C*                   TriggeringThumbnail                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::LoadImageFromThumb(class UW_ModDetailsThumbnails_C* TriggeringThumbnail, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95222);
		
		struct
		{
			class UW_ModDetailsThumbnails_C*                   TriggeringThumbnail;
			int32_t                                            Index;
		} params;
		params.TriggeringThumbnail = TriggeringThumbnail;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnFullSizeGalleryImageLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnFullSizeGalleryImageLoaded(class UTexture2DDynamic* Image, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95221);
		
		struct
		{
			class UTexture2DDynamic*                           Image;
			int32_t                                            Index;
		} params;
		params.Image = Image;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95220);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnModSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnModSet()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95219);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95218);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_Subscribe_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95217);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnLoadingFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSubscribed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnLoadingFinished(bool bSubscribed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95216);
		
		struct
		{
			bool                                               bSubscribed;
		} params;
		params.bSubscribed = bSubscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_VoteUp_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95215);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnRatingSubmitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnRatingSubmitted()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95214);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_VoteDown_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95213);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::BndEvt__W_ModDetails_btn_ViewInBrowser_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95212);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.CloseDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::CloseDetails()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(95211);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.ExecuteUbergraph_W_ModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::ExecuteUbergraph_W_ModDetails(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88725);
		
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
	 * 		Name   -> Function W_ModDetails.W_ModDetails_C.OnClickaway__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetails_C::OnClickaway__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88724);
		
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
	 * 		Name   -> PredefinedFunction UW_ModDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ModDetails_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88723);
		return ptr;
	}

}


