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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::GetIconImageFromClass(class ABaseItem* InItemClass, class UTexture2D** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43471);
		
		struct
		{
			class ABaseItem*                                   InItemClass;
			class UTexture2D*                                  ReturnValue;
		} params;
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      InItemCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::GetIconImageFromCategory(EItemCategory InItemCategory, class UTexture2D** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43470);
		
		struct
		{
			EItemCategory                                      InItemCategory;
			unsigned char                                      UnknownData_0000[0x7];
			class UTexture2D*                                  ReturnValue;
		} params;
		params.InItemCategory = InItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HasAnyItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::HasAnyItems(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43469);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::ShowKeybindText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43468);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::HideKeybindText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43467);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.SetKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::SetKeybindText(const class FName& ActionName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43466);
		
		struct
		{
			class FName                                        ActionName;
		} params;
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ResetFadeOutAnimationState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::ResetFadeOutAnimationState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43465);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFadeOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::PlayFadeOutAnim(bool bSelected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43464);
		
		struct
		{
			bool                                               bSelected;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowDivider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::ShowDivider()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43463);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideDivider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::HideDivider()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43462);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Set Icon Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::SetIconImage(class UTexture2D* Icon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43461);
		
		struct
		{
			class UTexture2D*                                  Icon;
		} params;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlaySelectFailedAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::PlaySelectFailedAnim(bool bPlaySound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43460);
		
		struct
		{
			bool                                               bPlaySound;
		} params;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideScrollHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::HideScrollHint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43459);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowScrollHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::ShowScrollHint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43458);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayUnfocusAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::PlayUnfocusAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43457);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFocusAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::PlayFocusAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43456);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemSelectionGroup                         ItemGroupSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bLastGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::Initialize(struct FItemSelectionGroup* ItemGroupSetting, bool bLastGroup)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43455);
		
		struct
		{
			struct FItemSelectionGroup                         ItemGroupSetting;
			bool                                               bLastGroup;
		} params;
		params.bLastGroup = bLastGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemGroupSetting != nullptr)
			*ItemGroupSetting = params.ItemGroupSetting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::OnFocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43454);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnUnfocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::OnUnfocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43453);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43452);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43451);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ExecuteUbergraph_W_ItemSelection_ItemGroup_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroup_V2_C::ExecuteUbergraph_W_ItemSelection_ItemGroup_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43450);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroup_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelection_ItemGroup_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43449);
		return ptr;
	}

}


