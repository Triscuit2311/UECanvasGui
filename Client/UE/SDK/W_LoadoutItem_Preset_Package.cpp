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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ResetPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::ResetPreset(bool bResetName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57900);
		
		struct
		{
			bool                                               bResetName;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.bResetName = bResetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.LoadPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponPreset                               PresetData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::LoadPreset(const struct FWeaponPreset& PresetData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57899);
		
		struct
		{
			struct FWeaponPreset                               PresetData;
		} params;
		params.PresetData = PresetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::UpdatePreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57898);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset (Custom)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponPreset                               PresetData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::UpdatePresetCustom(const struct FWeaponPreset& PresetData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57897);
		
		struct
		{
			struct FWeaponPreset                               PresetData;
		} params;
		params.PresetData = PresetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanRename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::CanRename(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57896);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UnhoverResetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::UnhoverResetButton()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57895);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.HoverResetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::HoverResetButton()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57894);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::Escape()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57893);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutItem_Preset_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57892);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutItem_Preset_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57891);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.StopRenaming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::StopRenaming()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57890);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.IsRenaming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::IsRenaming(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57889);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanReset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsiderPresetName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::CanReset(bool bConsiderPresetName, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57888);
		
		struct
		{
			bool                                               bConsiderPresetName;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x6];
		} params;
		params.bConsiderPresetName = bConsiderPresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.AnyAttachmentEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::AnyAttachmentEquipped(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57887);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_ResetButton_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_LoadoutItem_Preset_C::Get_ResetButton_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57886);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Rename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::Rename()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57885);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_CannotEdit_Text_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_LoadoutItem_Preset_C::Get_CannotEdit_Text_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57884);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::SimulateUnhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57883);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::SimulateHover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57882);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::SimulateClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57881);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Deselect Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSavePreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::DeselectPreset(bool bSavePreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57880);
		
		struct
		{
			bool                                               bSavePreset;
		} params;
		params.bSavePreset = bSavePreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Select Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSavePreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::SelectPreset(bool bSavePreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57879);
		
		struct
		{
			bool                                               bSavePreset;
		} params;
		params.bSavePreset = bSavePreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57878);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57877);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57876);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::OnLoadoutLoaded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57875);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57874);
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57873);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.FocusOnEditableText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::FocusOnEditableText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57872);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57871);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57870);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57869);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57868);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57867);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ExecuteUbergraph_W_LoadoutItem_Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::ExecuteUbergraph_W_LoadoutItem_Preset(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57866);
		
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
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57865);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget;
		} params;
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::OnButtonHovered__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57864);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget;
		} params;
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Preset_C::OnButtonClicked__DelegateSignature(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39392);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget;
		} params;
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutItem_Preset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutItem_Preset_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39391);
		return ptr;
	}

}


