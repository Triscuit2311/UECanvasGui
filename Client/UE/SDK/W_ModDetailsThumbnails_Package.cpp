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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88451);
		
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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88450);
		
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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88449);
		
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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHighlighted                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::Highlight(bool IsHighlighted)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88448);
		
		struct
		{
			bool                                               IsHighlighted;
		} params;
		params.IsHighlighted = IsHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::BndEvt__W_ModDetailsThumbnails_btn_Thumb_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88447);
		
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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.ExecuteUbergraph_W_ModDetailsThumbnails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::ExecuteUbergraph_W_ModDetailsThumbnails(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88446);
		
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
	 * 		Name   -> Function W_ModDetailsThumbnails.W_ModDetailsThumbnails_C.OnThumbnailClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ModDetailsThumbnails_C*                   TriggeringThumbnail                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ThumbIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModDetailsThumbnails_C::OnThumbnailClicked__DelegateSignature(class UW_ModDetailsThumbnails_C* TriggeringThumbnail, int32_t ThumbIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88445);
		
		struct
		{
			class UW_ModDetailsThumbnails_C*                   TriggeringThumbnail;
			int32_t                                            ThumbIndex;
		} params;
		params.TriggeringThumbnail = TriggeringThumbnail;
		params.ThumbIndex = ThumbIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModDetailsThumbnails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ModDetailsThumbnails_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88444);
		return ptr;
	}

}


