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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetConflictingKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        RequiredKeybindName                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::GetConflictingKeybindText(const class FText& RequiredKeybindName, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28526);
		
		struct
		{
			class FText                                        RequiredKeybindName;
			class FText                                        Text;
		} params;
		params.RequiredKeybindName = RequiredKeybindName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.CheckConflictingKeybindsAreUnbindable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        BindFriendlyName                                           (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::CheckConflictingKeybindsAreUnbindable(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, class FText* BindFriendlyName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28525);
		
		struct
		{
			TArray<struct FAxisMappingStruct>                  Axes;
			TArray<struct FActionMappingStruct>                Actions;
			class FText                                        BindFriendlyName;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (BindFriendlyName != nullptr)
			*BindFriendlyName = params.BindFriendlyName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::RemoveConflictKeybinds(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28524);
		
		struct
		{
			TArray<struct FAxisMappingStruct>                  Axes;
			TArray<struct FActionMappingStruct>                Actions;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSKeybinding>                        Keybinds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        AxisMapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FAxisMappingStruct>                  AxesList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                ActionsList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::AddKeybindstoList(TArray<struct FSKeybinding>* Keybinds, const class FName& AxisMapping, float Scale, TArray<struct FAxisMappingStruct>* AxesList, TArray<struct FActionMappingStruct>* ActionsList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28523);
		
		struct
		{
			TArray<struct FSKeybinding>                        Keybinds;
			class FName                                        AxisMapping;
			float                                              Scale;
			unsigned char                                      UnknownData_0000[0x4];
			TArray<struct FAxisMappingStruct>                  AxesList;
			TArray<struct FActionMappingStruct>                ActionsList;
		} params;
		params.AxisMapping = AxisMapping;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keybinds != nullptr)
			*Keybinds = params.Keybinds;
		if (AxesList != nullptr)
			*AxesList = params.AxesList;
		if (ActionsList != nullptr)
			*ActionsList = params.ActionsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MappingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::AddConflictingKeybindstoList(const class FName& MappingName, float Scale, TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28522);
		
		struct
		{
			class FName                                        MappingName;
			float                                              Scale;
			unsigned char                                      UnknownData_0001[0x4];
			TArray<struct FAxisMappingStruct>                  Axes;
			TArray<struct FActionMappingStruct>                Actions;
		} params;
		params.MappingName = MappingName;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::HandleMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28521);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bHasConflict                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAxisMappingStruct>                  ConflictingAxes                                            (Parm, OutParm)
	 * 		TArray<struct FActionMappingStruct>                ConflictingActions                                         (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::GetConflictingKeybindswhenValid(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, bool* bHasConflict, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<struct FActionMappingStruct>* ConflictingActions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28520);
		
		struct
		{
			TArray<struct FAxisMappingStruct>                  Axes;
			TArray<struct FActionMappingStruct>                Actions;
			bool                                               bHasConflict;
			unsigned char                                      UnknownData_0002[0x7];
			TArray<struct FAxisMappingStruct>                  ConflictingAxes;
			TArray<struct FActionMappingStruct>                ConflictingActions;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (bHasConflict != nullptr)
			*bHasConflict = params.bHasConflict;
		if (ConflictingAxes != nullptr)
			*ConflictingAxes = params.ConflictingAxes;
		if (ConflictingActions != nullptr)
			*ConflictingActions = params.ConflictingActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::HandleKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28519);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28518);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::GetOtherBindingIndex(int32_t* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28517);
		
		struct
		{
			int32_t                                            Value;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::HandleMouseButtonDown(const struct FPointerEvent& PointerEvent, struct FEventReply* Reply)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28516);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			struct FEventReply                                 Reply;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28515);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28514);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.SetKeybindingText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::SetKeybindingText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28513);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.ResetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::ResetBinding()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28512);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BindingFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BindingFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28511);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.RebindKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               KeyRebound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::RebindKey(const struct FKey& NewKey, bool* KeyRebound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28510);
		
		struct
		{
			struct FKey                                        NewKey;
			bool                                               KeyRebound;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyRebound != nullptr)
			*KeyRebound = params.KeyRebound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28509);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28508);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetInputBindingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FActionMappingStruct                        ActionMapping                                              (Parm, OutParm)
	 * 		struct FAxisMappingStruct                          AxisMapping                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::GetInputBindingData(int32_t Index, struct FActionMappingStruct* ActionMapping, struct FAxisMappingStruct* AxisMapping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28507);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0004[0x4];
			struct FActionMappingStruct                        ActionMapping;
			struct FAxisMappingStruct                          AxisMapping;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMapping != nullptr)
			*ActionMapping = params.ActionMapping;
		if (AxisMapping != nullptr)
			*AxisMapping = params.AxisMapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28506);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Key Event Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        KeyIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::KeyEventReceived(const struct FKey& KeyIn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28505);
		
		struct
		{
			struct FKey                                        KeyIn;
		} params;
		params.KeyIn = KeyIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Binding Confirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BindingConfirmed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28504);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28503);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28502);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28501);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BindFriendlyName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnIllegalBindAttempted(const class FText& BindFriendlyName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28500);
		
		struct
		{
			class FText                                        BindFriendlyName;
		} params;
		params.BindFriendlyName = BindFriendlyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28499);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28498);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28497);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.UnbindAllEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::UnbindAllEvents()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28496);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28495);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::ExecuteUbergraph_W_ControlsBind(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28494);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BindFriendlyName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnUnbindableKeyReboundAttempted__DelegateSignature(const class FText& BindFriendlyName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28493);
		
		struct
		{
			class FText                                        BindFriendlyName;
		} params;
		params.BindFriendlyName = BindFriendlyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FActionMappingStruct>                ActionMappings                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAxisMappingStruct>                  AxisMappings                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FText>                                ConflictBindsText                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnConflictingBindDetected__DelegateSignature(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>* ActionMappings, TArray<struct FAxisMappingStruct>* AxisMappings, const struct FKey& Key, TArray<class FText>* ConflictBindsText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28492);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnBindingCommitted__DelegateSignature(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28491);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnBindingCanceled__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28490);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnBindingStarted__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28489);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnReleased__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28488);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnPressed__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28487);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnUnhovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28486);
		
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
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ControlsBind_C::OnHovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28485);
		
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
	 * 		Name   -> PredefinedFunction UW_ControlsBind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ControlsBind_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28484);
		return ptr;
	}

}


