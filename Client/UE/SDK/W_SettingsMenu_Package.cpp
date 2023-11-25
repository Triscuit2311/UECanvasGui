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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.GetSupporterCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SettingsMenu_C::GetSupporterCode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28821);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Get_SupporterSubCategory_Visibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SettingsMenu_C::Get_SupporterSubCategory_Visibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28820);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.IsFSREnabledVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SettingsMenu_C::IsFSREnabledVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28819);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Get_FOVWarning_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SettingsMenu_C::Get_FOVWarning_Visibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28818);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UW_SettingsMenu_C::Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28817);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_Resolution_bIsEnabled_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_SettingsMenu_C::Get_SimpleGraphics_Slider_Resolution_bIsEnabled_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28816);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Try Assign Unbindable Control
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSKeybinding                                Keybinding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::TryAssignUnbindableControl(const struct FSKeybinding& Keybinding, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28815);
		
		struct
		{
			struct FSKeybinding                                Keybinding;
			bool                                               bSuccess;
		} params;
		params.Keybinding = Keybinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Get Apply Button Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_SettingsMenu_C::GetApplyButtonEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28814);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.SetDefaultControlsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::SetDefaultControlsTab()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28813);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.SwitchControlsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     MenuWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::SwitchControlsTab(class UW_Button_C* Button, class UWidget* MenuWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28812);
		
		struct
		{
			class UW_Button_C*                                 Button;
			class UWidget*                                     MenuWidget;
		} params;
		params.Button = Button;
		params.MenuWidget = MenuWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.SwitchTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     MenuWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TabName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bShowResetButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::SwitchTab(class UW_Button_C* Button, class UWidget* MenuWidget, const class FText& TabName, bool bShowResetButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28811);
		
		struct
		{
			class UW_Button_C*                                 Button;
			class UWidget*                                     MenuWidget;
			class FText                                        TabName;
			bool                                               bShowResetButton;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		params.Button = Button;
		params.MenuWidget = MenuWidget;
		params.TabName = TabName;
		params.bShowResetButton = bShowResetButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Initialise Or Get Pop Up
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          PopUpType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSStandardModalDetails                      StandardModalDetails                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UW_StandardModal_C*                          OutputPopUp                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::InitialiseOrGetPopUp(class UW_StandardModal_C* PopUpType, const struct FSStandardModalDetails& StandardModalDetails, class UW_StandardModal_C** OutputPopUp)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28810);
		
		struct
		{
			class UW_StandardModal_C*                          PopUpType;
			struct FSStandardModalDetails                      StandardModalDetails;
			class UW_StandardModal_C*                          OutputPopUp;
		} params;
		params.PopUpType = PopUpType;
		params.StandardModalDetails = StandardModalDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPopUp != nullptr)
			*OutputPopUp = params.OutputPopUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.ClearControlBindsLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ClearControlBindsLists()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28809);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.AddToControlBindsLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           ControlBInd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAxisMappingStruct                          InputAxis                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FActionMappingStruct                        InputAction                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::AddToControlBindsLists(class UW_ControlsBind_C* ControlBInd, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28808);
		
		struct
		{
			class UW_ControlsBind_C*                           ControlBInd;
			struct FAxisMappingStruct                          InputAxis;
			struct FActionMappingStruct                        InputAction;
		} params;
		params.ControlBInd = ControlBInd;
		params.InputAxis = InputAxis;
		params.InputAction = InputAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Setup Category Controls 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::SetupCategoryControls()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28807);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_SettingsMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28806);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.IsRaytracingSupportedVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SettingsMenu_C::IsRaytracingSupportedVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28805);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.AddAllKeybindsInList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSKeybinding>                        Keybinds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        MatchingName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                KeyList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::AddAllKeybindsInList(TArray<struct FSKeybinding>* Keybinds, const class FName& MatchingName, TArray<class FText>* KeyList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28804);
		
		struct
		{
			TArray<struct FSKeybinding>                        Keybinds;
			class FName                                        MatchingName;
			TArray<class FText>                                KeyList;
		} params;
		params.MatchingName = MatchingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keybinds != nullptr)
			*Keybinds = params.Keybinds;
		if (KeyList != nullptr)
			*KeyList = params.KeyList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindListText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                ConflictBinds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, TArray<class FText>* ConflictBinds, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28803);
		
		struct
		{
			TArray<struct FAxisMappingStruct>                  Axes;
			TArray<struct FActionMappingStruct>                Actions;
			TArray<class FText>                                ConflictBinds;
			class FText                                        Text;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (ConflictBinds != nullptr)
			*ConflictBinds = params.ConflictBinds;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<struct FActionMappingStruct>                ConflictingActions                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAxisMappingStruct>                  ConflictingAxes                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                ConflictBindNames                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::GetConflictingKeybindText(const struct FKey& Key, TArray<struct FActionMappingStruct>* ConflictingActions, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<class FText>* ConflictBindNames, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28802);
		
		struct
		{
			struct FKey                                        Key;
			TArray<struct FActionMappingStruct>                ConflictingActions;
			TArray<struct FAxisMappingStruct>                  ConflictingAxes;
			TArray<class FText>                                ConflictBindNames;
			class FText                                        Text;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConflictingActions != nullptr)
			*ConflictingActions = params.ConflictingActions;
		if (ConflictingAxes != nullptr)
			*ConflictingAxes = params.ConflictingAxes;
		if (ConflictBindNames != nullptr)
			*ConflictBindNames = params.ConflictBindNames;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_SettingsMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28801);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.InitGraphicsPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::InitGraphicsPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28800);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.StageGraphicsPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSGraphicPreset                             Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::StageGraphicsPreset(const struct FSGraphicPreset& Preset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28799);
		
		struct
		{
			struct FSGraphicPreset                             Preset;
		} params;
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.PopulateGameOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::PopulateGameOptions(bool bIsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28798);
		
		struct
		{
			bool                                               bIsDesignTime;
		} params;
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.PopulateAudioOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::PopulateAudioOptions(bool bIsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28797);
		
		struct
		{
			bool                                               bIsDesignTime;
		} params;
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.PopulateVideoOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDesignTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::PopulateVideoOptions(bool bIsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28796);
		
		struct
		{
			bool                                               bIsDesignTime;
		} params;
		params.bIsDesignTime = bIsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.ConstructControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ConstructControls()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28795);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28794);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28793);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.AddControlsToGridPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSKeybinding>                        Bindings                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::AddControlsToGridPanel(TArray<struct FSKeybinding> Bindings, class UGridPanel* GridPanel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28792);
		
		struct
		{
			TArray<struct FSKeybinding>                        Bindings;
			class UGridPanel*                                  GridPanel;
		} params;
		params.Bindings = Bindings;
		params.GridPanel = GridPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28791);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28790);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28789);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28788);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28787);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28786);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowSpeed_K2Node_ComponentBoundEvent_6_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowSpeed_K2Node_ComponentBoundEvent_6_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28785);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28784);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28783);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28782);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28781);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28780);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28779);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28778);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28777);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewResolutionValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28776);
		
		struct
		{
			class FString                                      NewResolutionValue;
			float                                              NewSliderValue;
		} params;
		params.NewResolutionValue = NewResolutionValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28775);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28774);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28773);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28772);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28771);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28770);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewQualityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28769);
		
		struct
		{
			int32_t                                            NewQualityValue;
			float                                              NewSliderValue;
		} params;
		params.NewQualityValue = NewQualityValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28768);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28767);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28766);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature(class UW_StandardModal_C* CallingModal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28765);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
		} params;
		params.CallingModal = CallingModal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28764);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Exit Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ExitMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28763);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Apply Video Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ApplyVideoSettings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28762);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28761);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28760);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28759);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28758);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28757);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.On Binding Started
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::OnBindingStarted(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28756);
		
		struct
		{
			class UW_ControlsBind_C*                           CallingWidget;
		} params;
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.On Binding Canceled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::OnBindingCanceled(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28755);
		
		struct
		{
			class UW_ControlsBind_C*                           CallingWidget;
		} params;
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.On Binding Committed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::OnBindingCommitted(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28754);
		
		struct
		{
			class UW_ControlsBind_C*                           CallingWidget;
			struct FKey                                        NewKey;
		} params;
		params.CallingWidget = CallingWidget;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.End Buttons Disabled For Binding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::EndButtonsDisabledForBinding()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28753);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28752);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28751);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28750);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28749);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Detected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FActionMappingStruct>                ActionMappings                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAxisMappingStruct>                  AxisMappings                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FText>                                ConflictBindsText                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ConflictingBindDetected(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>* ActionMappings, TArray<struct FAxisMappingStruct>* AxisMappings, const struct FKey& Key, TArray<class FText>* ConflictBindsText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28748);
		
		struct
		{
			class UW_ControlsBind_C*                           CallingBind;
			TArray<struct FActionMappingStruct>                ActionMappings;
			TArray<struct FAxisMappingStruct>                  AxisMappings;
			struct FKey                                        Key;
			TArray<class FText>                                ConflictBindsText;
		} params;
		params.CallingBind = CallingBind;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMappings != nullptr)
			*ActionMappings = params.ActionMappings;
		if (AxisMappings != nullptr)
			*AxisMappings = params.AxisMappings;
		if (ConflictBindsText != nullptr)
			*ConflictBindsText = params.ConflictBindsText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28747);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28746);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28745);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28744);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28743);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28742);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28741);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28740);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28739);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28738);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28737);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28736);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28735);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28734);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28733);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28732);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28731);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28730);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28729);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28728);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28727);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28726);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28725);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28724);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28723);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28722);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28721);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28720);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.DisplayNoKeysBoundWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::DisplayNoKeysBoundWarning()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28719);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Ok Clicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ConflictingBindOkClicked(class UW_StandardModal_C* CallingModal, const class FText& TextEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28718);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
			class FText                                        TextEntry;
		} params;
		params.CallingModal = CallingModal;
		params.TextEntry = TextEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Cancel Clicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ConflictingBindCancelClicked(class UW_StandardModal_C* CallingModal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28717);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
		} params;
		params.CallingModal = CallingModal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.InitialisePopUps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::InitialisePopUps()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28716);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.OnCancelIllegalBindClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardModal_C*                          CallingModal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::OnCancelIllegalBindClicked(class UW_StandardModal_C* CallingModal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28715);
		
		struct
		{
			class UW_StandardModal_C*                          CallingModal;
		} params;
		params.CallingModal = CallingModal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28714);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28713);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28712);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28711);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28710);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28709);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28708);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28707);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28706);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28705);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28704);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28703);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28702);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28701);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28700);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28699);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28698);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28697);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28696);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28695);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28694);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28693);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28692);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28691);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28690);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28689);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28688);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28687);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28686);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28685);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28684);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28683);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIntegerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28682);
		
		struct
		{
			int32_t                                            NewIntegerValue;
			float                                              NewSliderValue;
		} params;
		params.NewIntegerValue = NewIntegerValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28681);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28680);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28679);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28678);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28677);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28676);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28675);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28674);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28673);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28672);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28671);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28670);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28669);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28668);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28667);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28666);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28665);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28664);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28663);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28662);
		
		struct
		{
			int32_t                                            NewOption;
		} params;
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28661);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFloatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSliderValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28660);
		
		struct
		{
			float                                              NewFloatValue;
			float                                              NewSliderValue;
		} params;
		params.NewFloatValue = NewFloatValue;
		params.NewSliderValue = NewSliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28659);
		
		struct
		{
			bool                                               bNewCheckState;
		} params;
		params.bNewCheckState = bNewCheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.ExecuteUbergraph_W_SettingsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::ExecuteUbergraph_W_SettingsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28658);
		
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
	 * 		Name   -> Function W_SettingsMenu.W_SettingsMenu_C.OnMenuExited__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SettingsMenu_C::OnMenuExited__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28657);
		
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
	 * 		Name   -> PredefinedFunction UW_SettingsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SettingsMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28656);
		return ptr;
	}

}


