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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetCenterCoordinates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      CenterCoordinates                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SetCenterCoordinates(const struct FVector2D& CenterCoordinates)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30815);
		
		struct
		{
			struct FVector2D                      CenterCoordinates;
		} params;
		params.CenterCoordinates = CenterCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                CursorColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TintColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateMaterialColors(const struct FLinearColor& CursorColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& TintColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30814);
		
		struct
		{
			struct FLinearColor                                CursorColor;
			struct FLinearColor                                HighlightColor;
			struct FLinearColor                                TintColor;
		} params;
		params.CursorColor = CursorColor;
		params.HighlightColor = HighlightColor;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateMaterialVisuals()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30813);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetCustomInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Input                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::GetCustomInput(struct FVector2D* Input, bool* Valid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30812);
		
		struct
		{
			struct FVector2D                      Input;
			bool                                               Valid;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetCustomInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      CustomInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SetCustomInput(const struct FVector2D& CustomInput)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30811);
		
		struct
		{
			struct FVector2D                      CustomInput;
		} params;
		params.CustomInput = CustomInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithCustomInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithCustomInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30810);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::RemoveChildIndexFromRadialMenu(int32_t IndexToRemove)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30809);
		
		struct
		{
			int32_t                                            IndexToRemove;
		} params;
		params.IndexToRemove = IndexToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::RemoveChildWidgetFromRadialMenu(class UUserWidget* ItemToFind)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30808);
		
		struct
		{
			class UUserWidget*                                 ItemToFind;
		} params;
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UUMG_RadialMenu_C::DebugIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30807);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D UUMG_RadialMenu_C::FixInputRotation(const struct FVector2D& Input)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30806);
		
		struct
		{
			struct FVector2D                      Input;
			struct FVector2D                      ReturnValue;
		} params;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::FixMainRotation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30805);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.AutoRegisterToInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::AutoRegisterToInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30804);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30803);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.RegisterPlayerInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::RegisterPlayerInput(class APlayerController* Controller, bool* Success)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30802);
		
		struct
		{
			class APlayerController*                           Controller;
			bool                                               Success;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithJoystick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30801);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::GetCurrentIndex(int32_t* Index, bool* Valid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30800);
		
		struct
		{
			int32_t                                            Index;
			bool                                               Valid;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::GetChild(int32_t Index, class UUserWidget** Output, bool* Success)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30799);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0002[0x4];
			class UUserWidget*                                 Output;
			bool                                               Success;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetRadialMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    RadialMaterial                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::GetRadialMaterial(class UMaterialInstanceDynamic** RadialMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30798);
		
		struct
		{
			class UMaterialInstanceDynamic*                    RadialMaterial;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadialMaterial != nullptr)
			*RadialMaterial = params.RadialMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SetIndex(int32_t Index, bool Force)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30797);
		
		struct
		{
			int32_t                                            Index;
			bool                                               Force;
			unsigned char                                      UnknownData_0003[0x3];
		} params;
		params.Index = Index;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateAllChildrenPositions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30796);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateChildPosition(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30795);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::ClearChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30794);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::GetSelectedWidget(class UUserWidget** Output)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30793);
		
		struct
		{
			class UUserWidget*                                 Output;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::AddChildToRadialMenu(class UUserWidget* Content, bool* Success)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30792);
		
		struct
		{
			class UUserWidget*                                 Content;
			bool                                               Success;
			unsigned char                                      UnknownData_0004[0x3];
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateDirectionWithMouseCursor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30791);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UUMG_RadialMenu_C::GetSectionDegreeSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30790);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SetInputDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30789);
		
		struct
		{
			struct FVector2D                      Direction;
		} params;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30788);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Segments                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateSegments(int32_t Segments)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30787);
		
		struct
		{
			int32_t                                            Segments;
		} params;
		params.Segments = Segments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.InDeadZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDeadZone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::InDeadZone(bool InDeadZone)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30786);
		
		struct
		{
			bool                                               InDeadZone;
		} params;
		params.InDeadZone = InDeadZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::UpdateMaterials()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30785);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30784);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::ExecuteUbergraph_UMG_RadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30783);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionSubmitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SelectionSubmitted__DelegateSignature(int32_t SelectionIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30782);
		
		struct
		{
			int32_t                                            SelectionIndex;
		} params;
		params.SelectionIndex = SelectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::ExitedDeadzone__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30781);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::EnteredDeadzone__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30780);
		
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
	 * 		Name   -> Function UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UUMG_RadialMenu_C::SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30779);
		
		struct
		{
			int32_t                                            NewSelection;
			int32_t                                            OldSelection;
		} params;
		params.NewSelection = NewSelection;
		params.OldSelection = OldSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_RadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUMG_RadialMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30778);
		return ptr;
	}

}


