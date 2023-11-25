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
	 * 		Name   -> PredefinedFunction UVisual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVisual::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(175);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8177);
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetUserFocus(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8176);
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InToolTipText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetToolTipText(const class FText& InToolTipText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8175);
		
		struct
		{
			class FText                                        InToolTipText;
		} params;
		params.InToolTipText = InToolTipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetToolTip(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8174);
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8173);
		
		struct
		{
			struct FVector2D                      Translation;
		} params;
		params.Translation = Translation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransformPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Pivot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8172);
		
		struct
		{
			struct FVector2D                      Pivot;
		} params;
		params.Pivot = Pivot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransformAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderTransformAngle(float Angle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8171);
		
		struct
		{
			float                                              Angle;
		} params;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWidgetTransform                            InTransform                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8169);
		
		struct
		{
			struct FWidgetTransform                            InTransform;
		} params;
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderShear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Shear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderShear(const struct FVector2D& Shear)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8168);
		
		struct
		{
			struct FVector2D                      Shear;
		} params;
		params.Shear = Shear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderScale(const struct FVector2D& Scale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8167);
		
		struct
		{
			struct FVector2D                      Scale;
		} params;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetRenderOpacity(float InOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8166);
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleExplicit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8165);
		
		struct
		{
			EUINavigation                                      Direction;
			unsigned char                                      UnknownData_0000[0x7];
			class UWidget*                                     InWidget;
		} params;
		params.Direction = Direction;
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleCustomBoundary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8164);
		
		struct
		{
			EUINavigation                                      Direction;
			unsigned char                                      UnknownData_0001[0x3];
			class FScriptDelegate                              InCustomDelegate;
		} params;
		params.Direction = Direction;
		params.InCustomDelegate = InCustomDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetNavigationRuleCustom(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8163);
		
		struct
		{
			EUINavigation                                      Direction;
			unsigned char                                      UnknownData_0002[0x3];
			class FScriptDelegate                              InCustomDelegate;
		} params;
		params.Direction = Direction;
		params.InCustomDelegate = InCustomDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8162);
		
		struct
		{
			EUINavigation                                      Direction;
			EUINavigationRule                                  Rule;
		} params;
		params.Direction = Direction;
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const class FName& WidgetToFocus)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8161);
		
		struct
		{
			EUINavigation                                      Direction;
			EUINavigationRule                                  Rule;
			unsigned char                                      UnknownData_0003[0x2];
			class FName                                        WidgetToFocus;
		} params;
		params.Direction = Direction;
		params.Rule = Rule;
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetKeyboardFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetKeyboardFocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8160);
		
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
	 * 		Name   -> Function UMG.Widget.SetIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetIsEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8159);
		
		struct
		{
			bool                                               bInIsEnabled;
		} params;
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetFocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8158);
		
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
	 * 		Name   -> Function UMG.Widget.SetCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMouseCursor                                       InCursor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetCursor(EMouseCursor InCursor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8157);
		
		struct
		{
			EMouseCursor                                       InCursor;
		} params;
		params.InCursor = InCursor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetClipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetClipping                                    InClipping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetClipping(EWidgetClipping InClipping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8156);
		
		struct
		{
			EWidgetClipping                                    InClipping;
		} params;
		params.InClipping = InClipping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetAllNavigationRules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::SetAllNavigationRules(EUINavigationRule Rule, const class FName& WidgetToFocus)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8154);
		
		struct
		{
			EUINavigationRule                                  Rule;
			unsigned char                                      UnknownData_0004[0x3];
			class FName                                        WidgetToFocus;
		} params;
		params.Rule = Rule;
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ResetCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::ResetCursor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8153);
		
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
	 * 		Name   -> Function UMG.Widget.RemoveFromParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::RemoveFromParent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8152);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.OnReply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidget::OnReply__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8151);
		
		struct
		{
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8147);
		
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
	 * 		Name   -> Function UMG.Widget.IsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::IsVisible()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8146);
		
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
	 * 		Name   -> Function UMG.Widget.IsHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::IsHovered()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8145);
		
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
	 * 		Name   -> Function UMG.Widget.InvalidateLayoutAndVolatility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::InvalidateLayoutAndVolatility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8144);
		
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
	 * 		Name   -> Function UMG.Widget.HasUserFocusedDescendants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8143);
		
		struct
		{
			class APlayerController*                           PlayerController;
			bool                                               ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasUserFocus(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8142);
		
		struct
		{
			class APlayerController*                           PlayerController;
			bool                                               ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasMouseCaptureByUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointerIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8141);
		
		struct
		{
			int32_t                                            UserIndex;
			int32_t                                            PointerIndex;
			bool                                               ReturnValue;
		} params;
		params.UserIndex = UserIndex;
		params.PointerIndex = PointerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasMouseCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasMouseCapture()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8140);
		
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
	 * 		Name   -> Function UMG.Widget.HasKeyboardFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasKeyboardFocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8139);
		
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
	 * 		Name   -> Function UMG.Widget.HasFocusedDescendants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasFocusedDescendants()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8138);
		
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
	 * 		Name   -> Function UMG.Widget.HasAnyUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasAnyUserFocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8137);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidget::GetWidget__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8136);
		
		struct
		{
			class UWidget*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESlateVisibility UWidget::GetVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8135);
		
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
	 * 		Name   -> Function UMG.Widget.GetTickSpaceGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidget::GetTickSpaceGeometry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8134);
		
		struct
		{
			struct FGeometry                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetText__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UWidget::GetText__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8133);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8131);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8130);
		
		struct
		{
			struct FSlateColor                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8129);
		
		struct
		{
			struct FSlateBrush                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetRenderTransformAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidget::GetRenderTransformAngle()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8128);
		
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
	 * 		Name   -> Function UMG.Widget.GetRenderOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidget::GetRenderOpacity()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8127);
		
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
	 * 		Name   -> Function UMG.Widget.GetParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelWidget* UWidget::GetParent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8126);
		
		struct
		{
			class UPanelWidget*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetPaintSpaceGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidget::GetPaintSpaceGeometry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8125);
		
		struct
		{
			struct FGeometry                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetOwningPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerController* UWidget::GetOwningPlayer()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8124);
		
		struct
		{
			class APlayerController*                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetOwningLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalPlayer* UWidget::GetOwningLocalPlayer()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8123);
		
		struct
		{
			class ULocalPlayer*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMouseCursor                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8122);
		
		struct
		{
			EMouseCursor                                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8121);
		
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
	 * 		Name   -> Function UMG.Widget.GetIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::GetIsEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8120);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWidget::GetInt32__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8119);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameInstance*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameInstance* UWidget::GetGameInstance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8118);
		
		struct
		{
			class UGameInstance*                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidget::GetFloat__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8117);
		
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
	 * 		Name   -> Function UMG.Widget.GetDesiredSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidget::GetDesiredSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8116);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetClipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetClipping                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWidgetClipping UWidget::GetClipping()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8114);
		
		struct
		{
			EWidgetClipping                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8112);
		
		struct
		{
			ECheckBoxState                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetCachedGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidget::GetCachedGeometry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8110);
		
		struct
		{
			struct FGeometry                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetBool__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::GetBool__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8109);
		
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
	 * 		Name   -> Function UMG.Widget.GetAccessibleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UWidget::GetAccessibleText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8108);
		
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
	 * 		Name   -> Function UMG.Widget.GetAccessibleSummaryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UWidget::GetAccessibleSummaryText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8107);
		
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
	 * 		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Item                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const class FString& Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8106);
		
		struct
		{
			class FString                                      Item;
			class UWidget*                                     ReturnValue;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8105);
		
		struct
		{
			class UObject*                                     Item;
			class UWidget*                                     ReturnValue;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ForceVolatile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidget::ForceVolatile(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8104);
		
		struct
		{
			bool                                               bForce;
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ForceLayoutPrepass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidget::ForceLayoutPrepass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8103);
		
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
	 * 		Name   -> PredefinedFunction UWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(176);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnregisterInputComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::UnregisterInputComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8508);
		
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
	 * 		Name   -> Function UMG.UserWidget.UnbindFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8507);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8506);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8505);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8504);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8503);
		
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
	 * 		Name   -> Function UMG.UserWidget.StopListeningForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8502);
		
		struct
		{
			class FName                                        ActionName;
			EInputEvent                                        EventType;
		} params;
		params.ActionName = ActionName;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopListeningForAllInputActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::StopListeningForAllInputActions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8501);
		
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
	 * 		Name   -> Function UMG.UserWidget.StopAnimationsAndLatentActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::StopAnimationsAndLatentActions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8500);
		
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
	 * 		Name   -> Function UMG.UserWidget.StopAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8499);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopAllAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::StopAllAnimations()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8498);
		
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
	 * 		Name   -> Function UMG.UserWidget.SetPositionInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveDPIScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8497);
		
		struct
		{
			struct FVector2D                      Position;
			bool                                               bRemoveDPIScale;
		} params;
		params.Position = Position;
		params.bRemoveDPIScale = bRemoveDPIScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetPlaybackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8496);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8495);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetOwningPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           LocalPlayerController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8494);
		
		struct
		{
			class APlayerController*                           LocalPlayerController;
		} params;
		params.LocalPlayerController = LocalPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetNumLoopsToPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8493);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			int32_t                                            NumLoopsToPlay;
		} params;
		params.InAnimation = InAnimation;
		params.NumLoopsToPlay = NumLoopsToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetInputActionPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetInputActionPriority(int32_t NewPriority)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8492);
		
		struct
		{
			int32_t                                            NewPriority;
		} params;
		params.NewPriority = NewPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetInputActionBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldBlock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8491);
		
		struct
		{
			bool                                               bShouldBlock;
		} params;
		params.bShouldBlock = bShouldBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetForegroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8490);
		
		struct
		{
			struct FSlateColor                                 InForegroundColor;
		} params;
		params.InForegroundColor = InForegroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetDesiredSizeInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8489);
		
		struct
		{
			struct FVector2D                      Size;
		} params;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8488);
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAnimationCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8487);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              InTime;
		} params;
		params.InAnimation = InAnimation;
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAnchorsInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    Anchors                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8486);
		
		struct
		{
			struct FAnchors                                    Anchors;
		} params;
		params.Anchors = Anchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAlignmentInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8485);
		
		struct
		{
			struct FVector2D                      Alignment;
		} params;
		params.Alignment = Alignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.ReverseAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8484);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.RemoveFromViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::RemoveFromViewport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8483);
		
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
	 * 		Name   -> Function UMG.UserWidget.RegisterInputComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::RegisterInputComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8482);
		
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
	 * 		Name   -> Function UMG.UserWidget.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8481);
		
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
	 * 		Name   -> Function UMG.UserWidget.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8480);
		
		struct
		{
			class USoundBase*                                  SoundToPlay;
		} params;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationTimeRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8479);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			float                                              EndAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
			unsigned char                                      UnknownData_0001[0x3];
			class UUMGSequencePlayer*                          ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.EndAtTime = EndAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationReverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8478);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
			unsigned char                                      UnknownData_0002[0x3];
			class UUMGSequencePlayer*                          ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8477);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
			unsigned char                                      UnknownData_0003[0x3];
			class UUMGSequencePlayer*                          ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8475);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			unsigned char                                      UnknownData_0004[0x3];
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
			unsigned char                                      UnknownData_0005[0x7];
			class UUMGSequencePlayer*                          ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PauseAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8474);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8473);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchMoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8472);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               GestureEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8471);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               GestureEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.GestureEvent = GestureEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchForceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8470);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8469);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8468);
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8467);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8466);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnPaint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8465);
		
		struct
		{
			struct FPaintContext                               Context;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8464);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8463);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8462);
		
		struct
		{
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8461);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseCaptureLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnMouseCaptureLost()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8460);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8459);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8458);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8457);
		
		struct
		{
			struct FGeometry                                   InMyGeometry;
			struct FPointerEvent                               InMouseEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMotionDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMotionEvent                                InMotionEvent                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8455);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FMotionEvent                                InMotionEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InMotionEvent = InMotionEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8454);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8453);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnKeyChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCharacterEvent                             InCharacterEvent                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8452);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FCharacterEvent                             InCharacterEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InCharacterEvent = InCharacterEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8451);
		
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
	 * 		Name   -> Function UMG.UserWidget.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8450);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FFocusEvent                                 InFocusEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8449);
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8448);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
			bool                                               ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8447);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
			bool                                               ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8446);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8445);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8444);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8443);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8442);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8441);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8440);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FAnalogInputEvent                           InAnalogInputEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8438);
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.ListenForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConsume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8436);
		
		struct
		{
			class FName                                        ActionName;
			EInputEvent                                        EventType;
			bool                                               bConsume;
			unsigned char                                      UnknownData_0006[0x2];
			class FScriptDelegate                              Callback;
		} params;
		params.ActionName = ActionName;
		params.EventType = EventType;
		params.bConsume = bConsume;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsPlayingAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsPlayingAnimation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8435);
		
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
	 * 		Name   -> Function UMG.UserWidget.IsListeningForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsListeningForInputAction(const class FName& ActionName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8434);
		
		struct
		{
			class FName                                        ActionName;
			bool                                               ReturnValue;
		} params;
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsInViewport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8433);
		
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
	 * 		Name   -> Function UMG.UserWidget.IsInteractable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsInteractable()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8432);
		
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
	 * 		Name   -> Function UMG.UserWidget.IsAnyAnimationPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsAnyAnimationPlaying()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8431);
		
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
	 * 		Name   -> Function UMG.UserWidget.IsAnimationPlayingForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8430);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			bool                                               ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsAnimationPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8429);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			bool                                               ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetOwningPlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UUserWidget::GetOwningPlayerPawn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8428);
		
		struct
		{
			class APawn*                                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetOwningPlayerCameraManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8427);
		
		struct
		{
			class APlayerCameraManager*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetIsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::GetIsVisible()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8426);
		
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
	 * 		Name   -> Function UMG.UserWidget.GetAnimationCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8425);
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              ReturnValue;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetAnchorsInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FAnchors UUserWidget::GetAnchorsInViewport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8423);
		
		struct
		{
			struct FAnchors                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetAlignmentInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UUserWidget::GetAlignmentInViewport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8422);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.FlushAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::FlushAnimations()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8421);
		
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
	 * 		Name   -> Function UMG.UserWidget.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8420);
		
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
	 * 		Name   -> Function UMG.UserWidget.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8419);
		
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
	 * 		Name   -> Function UMG.UserWidget.CancelLatentActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::CancelLatentActions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8418);
		
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
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8417);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8416);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EWidgetAnimationEvent                              AnimationEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UserTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const class FName& UserTag)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8414);
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
			EWidgetAnimationEvent                              AnimationEvent;
			unsigned char                                      UnknownData_0007[0x3];
			class FName                                        UserTag;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		params.AnimationEvent = AnimationEvent;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.AddToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserWidget::AddToViewport(int32_t ZOrder)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8413);
		
		struct
		{
			int32_t                                            ZOrder;
		} params;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.AddToPlayerScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::AddToPlayerScreen(int32_t ZOrder)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8412);
		
		struct
		{
			int32_t                                            ZOrder;
			bool                                               ReturnValue;
		} params;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUserWidget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(453);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWindowVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowVisibility                                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15480);
		
		struct
		{
			EWindowVisibility                                  InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWindowFocusable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInWindowFocusable                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15479);
		
		struct
		{
			bool                                               bInWindowFocusable;
		} params;
		params.bInWindowFocusable = bInWindowFocusable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWidgetSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetSpace                                       NewSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15478);
		
		struct
		{
			EWidgetSpace                                       NewSpace;
		} params;
		params.NewSpace = NewSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetWidget(class UUserWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15477);
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTwoSided
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantTwoSided                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15476);
		
		struct
		{
			bool                                               bWantTwoSided;
		} params;
		params.bWantTwoSided = bWantTwoSided;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTintColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewTintColorAndOpacity                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15475);
		
		struct
		{
			struct FLinearColor                                NewTintColorAndOpacity;
		} params;
		params.NewTintColorAndOpacity = NewTintColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTickWhenOffscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantTickWhenOffscreen                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15474);
		
		struct
		{
			bool                                               bWantTickWhenOffscreen;
		} params;
		params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTickMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETickMode                                          InTickMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetTickMode(ETickMode InTickMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15473);
		
		struct
		{
			ETickMode                                          InTickMode;
		} params;
		params.InTickMode = InTickMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetRedrawTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRedrawTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetRedrawTime(float InRedrawTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15472);
		
		struct
		{
			float                                              InRedrawTime;
		} params;
		params.InRedrawTime = InRedrawTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InPivot                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15471);
		
		struct
		{
			struct FVector2D                      InPivot;
		} params;
		params.InPivot = InPivot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetOwnerPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15470);
		
		struct
		{
			class ULocalPlayer*                                LocalPlayer;
		} params;
		params.LocalPlayer = LocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetManuallyRedraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseManualRedraw                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15469);
		
		struct
		{
			bool                                               bUseManualRedraw;
		} params;
		params.bUseManualRedraw = bUseManualRedraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetGeometryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetGeometryMode                                InGeometryMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15468);
		
		struct
		{
			EWidgetGeometryMode                                InGeometryMode;
		} params;
		params.InGeometryMode = InGeometryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetDrawSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15467);
		
		struct
		{
			struct FVector2D                      Size;
		} params;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetDrawAtDesiredSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInDrawAtDesiredSize                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15466);
		
		struct
		{
			bool                                               bInDrawAtDesiredSize;
		} params;
		params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetCylinderArcAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InCylinderArcAngle                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15465);
		
		struct
		{
			float                                              InCylinderArcAngle;
		} params;
		params.InCylinderArcAngle = InCylinderArcAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewBackgroundColor                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15464);
		
		struct
		{
			struct FLinearColor                                NewBackgroundColor;
		} params;
		params.NewBackgroundColor = NewBackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.RequestRenderUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::RequestRenderUpdate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15463);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.RequestRedraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetComponent::RequestRedraw()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15462);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.IsWidgetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::IsWidgetVisible()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15461);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetWindowVisiblility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowVisibility                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWindowVisibility UWidgetComponent::GetWindowVisiblility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15460);
		
		struct
		{
			EWindowVisibility                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWindowFocusable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::GetWindowFocusable()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15459);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetWidgetSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetSpace                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWidgetSpace UWidgetComponent::GetWidgetSpace()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15458);
		
		struct
		{
			EWidgetSpace                                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UWidgetComponent::GetWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15457);
		
		struct
		{
			class UUserWidget*                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetUserWidgetObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UWidgetComponent::GetUserWidgetObject()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15456);
		
		struct
		{
			class UUserWidget*                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetTwoSided
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::GetTwoSided()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15455);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetTickWhenOffscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::GetTickWhenOffscreen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15454);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15453);
		
		struct
		{
			class UTextureRenderTarget2D*                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetRedrawTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetComponent::GetRedrawTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15452);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetComponent::GetPivot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15451);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetOwnerPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15450);
		
		struct
		{
			class ULocalPlayer*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetMaterialInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15449);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetManuallyRedraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::GetManuallyRedraw()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15448);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetGeometryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetGeometryMode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15447);
		
		struct
		{
			EWidgetGeometryMode                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetDrawSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetComponent::GetDrawSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15446);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetDrawAtDesiredSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetComponent::GetDrawAtDesiredSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15445);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetCylinderArcAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetComponent::GetCylinderArcAngle()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15444);
		
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
	 * 		Name   -> Function UMG.WidgetComponent.GetCurrentDrawSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetComponent::GetCurrentDrawSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15443);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1158);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.RemoveChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::RemoveChildAt(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8342);
		
		struct
		{
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.RemoveChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::RemoveChild(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8341);
		
		struct
		{
			class UWidget*                                     Content;
			bool                                               ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.HasChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::HasChild(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8340);
		
		struct
		{
			class UWidget*                                     Content;
			bool                                               ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.HasAnyChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::HasAnyChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8339);
		
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
	 * 		Name   -> Function UMG.PanelWidget.GetChildrenCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPanelWidget::GetChildrenCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8338);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetChildIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPanelWidget::GetChildIndex(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8337);
		
		struct
		{
			class UWidget*                                     Content;
			int32_t                                            ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UPanelWidget::GetChildAt(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8336);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class UWidget*                                     ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetAllChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<class UWidget*> UPanelWidget::GetAllChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8335);
		
		struct
		{
			TArray<class UWidget*>                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.ClearChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPanelWidget::ClearChildren()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8334);
		
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
	 * 		Name   -> Function UMG.PanelWidget.AddChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8333);
		
		struct
		{
			class UWidget*                                     Content;
			class UPanelSlot*                                  ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPanelWidget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1163);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetWheelScrollMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15531);
		
		struct
		{
			float                                              NewWheelScrollMultiplier;
		} params;
		params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollWhenFocusChanges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EScrollWhenFocusChanges                            NewScrollWhenFocusChanges                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15530);
		
		struct
		{
			EScrollWhenFocusChanges                            NewScrollWhenFocusChanges;
		} params;
		params.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetScrollOffset(float NewScrollOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15529);
		
		struct
		{
			float                                              NewScrollOffset;
		} params;
		params.NewScrollOffset = NewScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollBarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   NewScrollBarVisibility                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15528);
		
		struct
		{
			ESlateVisibility                                   NewScrollBarVisibility;
		} params;
		params.NewScrollBarVisibility = NewScrollBarVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollbarThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      NewScrollbarThickness                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15527);
		
		struct
		{
			struct FVector2D                      NewScrollbarThickness;
		} params;
		params.NewScrollbarThickness = NewScrollbarThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollbarPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     NewScrollbarPadding                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15526);
		
		struct
		{
			struct FMargin                                     NewScrollbarPadding;
		} params;
		params.NewScrollbarPadding = NewScrollbarPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOrientation                                       NewOrientation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetOrientation(EOrientation NewOrientation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15525);
		
		struct
		{
			EOrientation                                       NewOrientation;
		} params;
		params.NewOrientation = NewOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetConsumeMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConsumeMouseWheel                                 NewConsumeMouseWheel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15524);
		
		struct
		{
			EConsumeMouseWheel                                 NewConsumeMouseWheel;
		} params;
		params.NewConsumeMouseWheel = NewConsumeMouseWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAnimateWheelScrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldAnimateWheelScrolling                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15523);
		
		struct
		{
			bool                                               bShouldAnimateWheelScrolling;
		} params;
		params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAlwaysShowScrollbar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewAlwaysShowScrollbar                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15522);
		
		struct
		{
			bool                                               NewAlwaysShowScrollbar;
		} params;
		params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAllowOverscroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewAllowOverscroll                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15521);
		
		struct
		{
			bool                                               NewAllowOverscroll;
		} params;
		params.NewAllowOverscroll = NewAllowOverscroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.ScrollWidgetIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AnimateScroll                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDescendantScrollDestination                       ScrollDestination                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Padding                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15520);
		
		struct
		{
			class UWidget*                                     WidgetToFind;
			bool                                               AnimateScroll;
			EDescendantScrollDestination                       ScrollDestination;
			unsigned char                                      UnknownData_0000[0x2];
			float                                              Padding;
		} params;
		params.WidgetToFind = WidgetToFind;
		params.AnimateScroll = AnimateScroll;
		params.ScrollDestination = ScrollDestination;
		params.Padding = Padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.ScrollToStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::ScrollToStart()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15519);
		
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
	 * 		Name   -> Function UMG.ScrollBox.ScrollToEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::ScrollToEnd()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15518);
		
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
	 * 		Name   -> Function UMG.ScrollBox.GetViewOffsetFraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UScrollBox::GetViewOffsetFraction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15517);
		
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
	 * 		Name   -> Function UMG.ScrollBox.GetScrollOffsetOfEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UScrollBox::GetScrollOffsetOfEnd()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15516);
		
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
	 * 		Name   -> Function UMG.ScrollBox.GetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UScrollBox::GetScrollOffset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15515);
		
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
	 * 		Name   -> Function UMG.ScrollBox.EndInertialScrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UScrollBox::EndInertialScrolling()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15514);
		
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
	 * 		Name   -> PredefinedFunction UScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScrollBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1164);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.SetContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8345);
		
		struct
		{
			class UWidget*                                     Content;
			class UPanelSlot*                                  ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.GetContentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UContentWidget::GetContentSlot()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8344);
		
		struct
		{
			class UPanelSlot*                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.GetContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UContentWidget::GetContent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8343);
		
		struct
		{
			class UWidget*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContentWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UContentWidget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1964);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17381);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17380);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17379);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetDesiredSizeScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17378);
		
		struct
		{
			struct FVector2D                      InScale;
		} params;
		params.InScale = InScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetContentColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InContentColorAndOpacity                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17377);
		
		struct
		{
			struct FLinearColor                                InContentColorAndOpacity;
		} params;
		params.InContentColorAndOpacity = InContentColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17376);
		
		struct
		{
			class UTexture2D*                                  Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17375);
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17374);
		
		struct
		{
			class USlateBrushAsset*                            Asset;
		} params;
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InBrushColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17373);
		
		struct
		{
			struct FLinearColor                                InBrushColor;
		} params;
		params.InBrushColor = InBrushColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorder::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17372);
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.GetDynamicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17371);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBorder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1970);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPropertyBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1968);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BoolBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBoolBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17370);
		
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
	 * 		Name   -> PredefinedFunction UBoolBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBoolBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1969);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPanelSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPanelSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1966);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17384);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorderSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17383);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17382);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBorderSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBorderSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1971);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BrushBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UBrushBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17385);
		
		struct
		{
			struct FSlateBrush                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBrushBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1972);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.SetIsExpanded_Animated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17442);
		
		struct
		{
			bool                                               IsExpanded;
		} params;
		params.IsExpanded = IsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.SetIsExpanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UExpandableArea::SetIsExpanded(bool IsExpanded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17441);
		
		struct
		{
			bool                                               IsExpanded;
		} params;
		params.IsExpanded = IsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.GetIsExpanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UExpandableArea::GetIsExpanded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17440);
		
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
	 * 		Name   -> PredefinedFunction UExpandableArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UExpandableArea::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1988);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.FloatBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFloatBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17443);
		
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
	 * 		Name   -> PredefinedFunction UFloatBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFloatBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1989);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetTouchMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonTouchMethod                                 InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetTouchMethod(EButtonTouchMethod InTouchMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17392);
		
		struct
		{
			EButtonTouchMethod                                 InTouchMethod;
		} params;
		params.InTouchMethod = InTouchMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FButtonStyle                                InStyle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetStyle(const struct FButtonStyle& InStyle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17391);
		
		struct
		{
			struct FButtonStyle                                InStyle;
		} params;
		params.InStyle = InStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetPressMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonPressMethod                                 InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetPressMethod(EButtonPressMethod InPressMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17390);
		
		struct
		{
			EButtonPressMethod                                 InPressMethod;
		} params;
		params.InPressMethod = InPressMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17389);
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetClickMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonClickMethod                                 InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetClickMethod(EButtonClickMethod InClickMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17388);
		
		struct
		{
			EButtonClickMethod                                 InClickMethod;
		} params;
		params.InClickMethod = InClickMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InBackgroundColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17387);
		
		struct
		{
			struct FLinearColor                                InBackgroundColor;
		} params;
		params.InBackgroundColor = InBackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.IsPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UButton::IsPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17386);
		
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
	 * 		Name   -> PredefinedFunction UButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UButton::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1973);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17455);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetRowSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRowSpan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetRowSpan(int32_t InRowSpan)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17454);
		
		struct
		{
			int32_t                                            InRowSpan;
		} params;
		params.InRowSpan = InRowSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetRow(int32_t InRow)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17453);
		
		struct
		{
			int32_t                                            InRow;
		} params;
		params.InRow = InRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17452);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetNudge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InNudge                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetNudge(const struct FVector2D& InNudge)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17451);
		
		struct
		{
			struct FVector2D                      InNudge;
		} params;
		params.InNudge = InNudge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetLayer(int32_t InLayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17450);
		
		struct
		{
			int32_t                                            InLayer;
		} params;
		params.InLayer = InLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17449);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetColumnSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumnSpan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetColumnSpan(int32_t InColumnSpan)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17448);
		
		struct
		{
			int32_t                                            InColumnSpan;
		} params;
		params.InColumnSpan = InColumnSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridSlot::SetColumn(int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17447);
		
		struct
		{
			int32_t                                            InColumn;
		} params;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGridSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1991);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.SetRowFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17446);
		
		struct
		{
			int32_t                                            ColumnIndex;
			float                                              Coefficient;
		} params;
		params.ColumnIndex = ColumnIndex;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.SetColumnFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17445);
		
		struct
		{
			int32_t                                            ColumnIndex;
			float                                              Coefficient;
		} params;
		params.ColumnIndex = ColumnIndex;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.AddChildToGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGridSlot*                                   ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17444);
		
		struct
		{
			class UWidget*                                     Content;
			int32_t                                            InRow;
			int32_t                                            InColumn;
			class UGridSlot*                                   ReturnValue;
		} params;
		params.Content = Content;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGridPanel::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1990);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.AsyncTaskDownloadImage.DownloadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAsyncTaskDownloadImage*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const class FString& URL)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17359);
		
		struct
		{
			class FString                                      URL;
			class UAsyncTaskDownloadImage*                     ReturnValue;
		} params;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncTaskDownloadImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAsyncTaskDownloadImage::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1963);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBox.AddChildToHorizontalBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHorizontalBoxSlot*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17456);
		
		struct
		{
			class UWidget*                                     Content;
			class UHorizontalBoxSlot*                          ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHorizontalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UHorizontalBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1992);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17460);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17459);
		
		struct
		{
			struct FSlateChildSize                             InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17458);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17457);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHorizontalBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UHorizontalBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1993);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene2DTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieScene2DTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2007);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetOpacity(float InOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17474);
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17473);
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 TintColor                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17472);
		
		struct
		{
			struct FSlateColor                                 TintColor;
		} params;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      DesiredSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushSize(const struct FVector2D& DesiredSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17471);
		
		struct
		{
			struct FVector2D                      DesiredSize;
		} params;
		params.DesiredSize = DesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushResourceObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ResourceObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushResourceObject(class UObject* ResourceObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17470);
		
		struct
		{
			class UObject*                                     ResourceObject;
		} params;
		params.ResourceObject = ResourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromTextureDynamic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17469);
		
		struct
		{
			class UTexture2DDynamic*                           Texture;
			bool                                               bMatchSize;
		} params;
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17468);
		
		struct
		{
			class UTexture2D*                                  Texture;
			bool                                               bMatchSize;
		} params;
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromSoftTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TSoftObjectPtr<class UTexture2D>                   SoftTexture                                                (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17467);
		
		struct
		{
			TSoftObjectPtr<class UTexture2D>                   SoftTexture;
			bool                                               bMatchSize;
		} params;
		params.SoftTexture = SoftTexture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromSoftMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TSoftObjectPtr<class UMaterialInterface>           SoftMaterial                                               (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17466);
		
		struct
		{
			TSoftObjectPtr<class UMaterialInterface>           SoftMaterial;
		} params;
		params.SoftMaterial = SoftMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17465);
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromAtlasInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromAtlasInterface(const TScriptInterface<class ISlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17464);
		
		struct
		{
			TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion;
			bool                                               bMatchSize;
		} params;
		params.AtlasRegion = AtlasRegion;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17463);
		
		struct
		{
			class USlateBrushAsset*                            Asset;
		} params;
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UImage::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17462);
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.GetDynamicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17461);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImage::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1994);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene2DTransformSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieScene2DTransformSection::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2008);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButtonSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17395);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButtonSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17394);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UButtonSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17393);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButtonSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UButtonSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1974);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene2DTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieScene2DTransformTrack::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2009);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextLayoutWidget.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLayoutWidget::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8357);
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextLayoutWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextLayoutWidget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2014);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetTextTransformPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextTransformPolicy                               InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17545);
		
		struct
		{
			ETextTransformPolicy                               InTransformPolicy;
		} params;
		params.InTransformPolicy = InTransformPolicy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetTextStyleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  NewTextStyleSet                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17544);
		
		struct
		{
			class UDataTable*                                  NewTextStyleSet;
		} params;
		params.NewTextStyleSet = NewTextStyleSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17543);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17542);
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InDefaultTextStyle                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17541);
		
		struct
		{
			struct FTextBlockStyle                             InDefaultTextStyle;
		} params;
		params.InDefaultTextStyle = InDefaultTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultStrikeBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InStrikeBrush                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17540);
		
		struct
		{
			struct FSlateBrush                                 InStrikeBrush;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStrikeBrush != nullptr)
			*InStrikeBrush = params.InStrikeBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultShadowOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17539);
		
		struct
		{
			struct FVector2D                      InShadowOffset;
		} params;
		params.InShadowOffset = InShadowOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17538);
		
		struct
		{
			struct FLinearColor                                InShadowColorAndOpacity;
		} params;
		params.InShadowColorAndOpacity = InShadowColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17537);
		
		struct
		{
			struct FSlateFontInfo                              InFontInfo;
		} params;
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17536);
		
		struct
		{
			struct FSlateColor                                 InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17535);
		
		struct
		{
			bool                                               InAutoTextWrap;
		} params;
		params.InAutoTextWrap = InAutoTextWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText URichTextBlock::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17534);
		
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
	 * 		Name   -> Function UMG.RichTextBlock.GetDecoratorByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URichTextBlockDecorator*                     DecoratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URichTextBlockDecorator*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17533);
		
		struct
		{
			class URichTextBlockDecorator*                     DecoratorClass;
			class URichTextBlockDecorator*                     ReturnValue;
		} params;
		params.DecoratorClass = DecoratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void URichTextBlock::ClearAllDefaultStyleOverrides()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17532);
		
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
	 * 		Name   -> PredefinedFunction URichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URichTextBlock::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2024);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetTextureParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextureParameter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URetainerBox::SetTextureParameter(const class FName& TextureParameter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17531);
		
		struct
		{
			class FName                                        TextureParameter;
		} params;
		params.TextureParameter = TextureParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetRetainRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInRetainRendering                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URetainerBox::SetRetainRendering(bool bInRetainRendering)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17530);
		
		struct
		{
			bool                                               bInRetainRendering;
		} params;
		params.bInRetainRendering = bInRetainRendering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetRenderingPhase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RenderPhase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalPhases                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17529);
		
		struct
		{
			int32_t                                            RenderPhase;
			int32_t                                            TotalPhases;
		} params;
		params.RenderPhase = RenderPhase;
		params.TotalPhases = TotalPhases;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetEffectMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          EffectMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17528);
		
		struct
		{
			class UMaterialInterface*                          EffectMaterial;
		} params;
		params.EffectMaterial = EffectMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.RequestRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void URetainerBox::RequestRender()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17527);
		
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
	 * 		Name   -> Function UMG.RetainerBox.GetEffectMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17526);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetainerBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URetainerBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2023);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMarginPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneMarginPropertySystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2010);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URichTextBlockDecorator::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2025);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetTextBlockVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8323);
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetSelectedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InSelectedKey                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8322);
		
		struct
		{
			struct FInputChord                                 InSelectedKey;
		} params;
		params.InSelectedKey = InSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetNoKeySpecifiedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNoKeySpecifiedText                                       (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8321);
		
		struct
		{
			class FText                                        InNoKeySpecifiedText;
		} params;
		params.InNoKeySpecifiedText = InNoKeySpecifiedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetKeySelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InKeySelectionText                                         (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetKeySelectionText(const class FText& InKeySelectionText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8320);
		
		struct
		{
			class FText                                        InKeySelectionText;
		} params;
		params.InKeySelectionText = InKeySelectionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetEscapeKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetEscapeKeys(TArray<struct FKey> InKeys)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8319);
		
		struct
		{
			TArray<struct FKey>                                InKeys;
		} params;
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetAllowModifierKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowModifierKeys                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8318);
		
		struct
		{
			bool                                               bInAllowModifierKeys;
		} params;
		params.bInAllowModifierKeys = bInAllowModifierKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetAllowGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowGamepadKeys                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8317);
		
		struct
		{
			bool                                               bInAllowGamepadKeys;
		} params;
		params.bInAllowGamepadKeys = bInAllowGamepadKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8315);
		
		struct
		{
			struct FInputChord                                 SelectedKey;
		} params;
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8314);
		
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
	 * 		Name   -> Function UMG.InputKeySelector.GetIsSelectingKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputKeySelector::GetIsSelectingKey()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8313);
		
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
	 * 		Name   -> PredefinedFunction UInputKeySelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInputKeySelector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1995);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMarginSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneMarginSection::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2011);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URichTextBlockImageDecorator::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2026);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Int32Binding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInt32Binding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17475);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt32Binding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInt32Binding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1996);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanel.AddChildToCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCanvasPanelSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17396);
		
		struct
		{
			class UWidget*                                     Content;
			class UCanvasPanelSlot*                            ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCanvasPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCanvasPanel::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1975);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SafeZone.SetSidesToPad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPadLeft                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadRight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadTop                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadBottom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17546);
		
		struct
		{
			bool                                               InPadLeft;
			bool                                               InPadRight;
			bool                                               InPadTop;
			bool                                               InPadBottom;
		} params;
		params.InPadLeft = InPadLeft;
		params.InPadRight = InPadRight;
		params.InPadTop = InPadTop;
		params.InPadBottom = InPadBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USafeZone::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2027);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InvalidationBox.SetCanCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanCache                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInvalidationBox::SetCanCache(bool CanCache)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17478);
		
		struct
		{
			bool                                               CanCache;
		} params;
		params.CanCache = CanCache;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InvalidationBox.InvalidateCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UInvalidationBox::InvalidateCache()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17477);
		
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
	 * 		Name   -> Function UMG.InvalidationBox.GetCanCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInvalidationBox::GetCanCache()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17476);
		
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
	 * 		Name   -> PredefinedFunction UInvalidationBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInvalidationBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1997);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17366);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17365);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17364);
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17363);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetBlurStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStrength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetBlurStrength(float InStrength)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17362);
		
		struct
		{
			float                                              InStrength;
		} params;
		params.InStrength = InStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetBlurRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBlurRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17361);
		
		struct
		{
			int32_t                                            InBlurRadius;
		} params;
		params.InBlurRadius = InBlurRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInApplyAlphaToBlur                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17360);
		
		struct
		{
			bool                                               bInApplyAlphaToBlur;
		} params;
		params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackgroundBlur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBackgroundBlur::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1965);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17481);
		
		struct
		{
			bool                                               bIsSelected;
		} params;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17480);
		
		struct
		{
			bool                                               bIsExpanded;
		} params;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnEntryReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IUserListEntry::BP_OnEntryReleased()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17479);
		
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
	 * 		Name   -> PredefinedFunction IUserListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IUserListEntry::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1998);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimationPlayCallbackProxy*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17661);
		
		struct
		{
			class UUMGSequencePlayer*                          Result;
			class UUserWidget*                                 Widget;
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			float                                              EndAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              PlaybackSpeed;
			unsigned char                                      UnknownData_0001[0x4];
			class UWidgetAnimationPlayCallbackProxy*           ReturnValue;
		} params;
		params.Widget = Widget;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.EndAtTime = EndAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimationPlayCallbackProxy*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17660);
		
		struct
		{
			class UUMGSequencePlayer*                          Result;
			class UUserWidget*                                 Widget;
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			unsigned char                                      UnknownData_0002[0x3];
			float                                              PlaybackSpeed;
			class UWidgetAnimationPlayCallbackProxy*           ReturnValue;
		} params;
		params.Widget = Widget;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetAnimationPlayCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetAnimationPlayCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2057);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeZoneSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USafeZoneSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2028);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetZOrder(int32_t InZOrder)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17414);
		
		struct
		{
			int32_t                                            InZOrder;
		} params;
		params.InZOrder = InZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17413);
		
		struct
		{
			struct FVector2D                      InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17412);
		
		struct
		{
			struct FVector2D                      InPosition;
		} params;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17411);
		
		struct
		{
			struct FMargin                                     InOffset;
		} params;
		params.InOffset = InOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetMinimum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InMinimumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17410);
		
		struct
		{
			struct FVector2D                      InMinimumAnchors;
		} params;
		params.InMinimumAnchors = InMinimumAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetMaximum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InMaximumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17409);
		
		struct
		{
			struct FVector2D                      InMaximumAnchors;
		} params;
		params.InMaximumAnchors = InMaximumAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchorData                                 InLayoutData                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17408);
		
		struct
		{
			struct FAnchorData                                 InLayoutData;
		} params;
		params.InLayoutData = InLayoutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAutoSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbAutoSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17407);
		
		struct
		{
			bool                                               InbAutoSize;
		} params;
		params.InbAutoSize = InbAutoSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAnchors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    InAnchors                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17406);
		
		struct
		{
			struct FAnchors                                    InAnchors;
		} params;
		params.InAnchors = InAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InAlignment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17405);
		
		struct
		{
			struct FVector2D                      InAlignment;
		} params;
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCanvasPanelSlot::GetZOrder()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17404);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UCanvasPanelSlot::GetSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17403);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UCanvasPanelSlot::GetPosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17402);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FMargin UCanvasPanelSlot::GetOffsets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17401);
		
		struct
		{
			struct FMargin                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchorData                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FAnchorData UCanvasPanelSlot::GetLayout()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17400);
		
		struct
		{
			struct FAnchorData                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAutoSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCanvasPanelSlot::GetAutoSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17399);
		
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
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAnchors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FAnchors UCanvasPanelSlot::GetAnchors()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17398);
		
		struct
		{
			struct FAnchors                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UCanvasPanelSlot::GetAlignment()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17397);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCanvasPanelSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCanvasPanelSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1976);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMarginTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneMarginTrack::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2012);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17705);
		
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
	 * 		Name   -> Function UMG.WidgetSwitcher.SetActiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17704);
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetWidgetAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17703);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class UWidget*                                     ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetNumWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWidgetSwitcher::GetNumWidgets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17702);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWidgetSwitcher::GetActiveWidgetIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17701);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetActiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidgetSwitcher::GetActiveWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17700);
		
		struct
		{
			class UWidget*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2065);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWrapBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17699);
		
		struct
		{
			class UWidget*                                     Widget;
			class UWrapBoxSlot*                                ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetSwitcherSlot*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17698);
		
		struct
		{
			class UWidget*                                     Widget;
			class UWidgetSwitcherSlot*                         ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVerticalBoxSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17697);
		
		struct
		{
			class UWidget*                                     Widget;
			class UVerticalBoxSlot*                            ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUniformGridSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17696);
		
		struct
		{
			class UWidget*                                     Widget;
			class UUniformGridSlot*                            ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USizeBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17695);
		
		struct
		{
			class UWidget*                                     Widget;
			class USizeBoxSlot*                                ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScrollBoxSlot*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17694);
		
		struct
		{
			class UWidget*                                     Widget;
			class UScrollBoxSlot*                              ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScaleBoxSlot*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17693);
		
		struct
		{
			class UWidget*                                     Widget;
			class UScaleBoxSlot*                               ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USafeZoneSlot*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17692);
		
		struct
		{
			class UWidget*                                     Widget;
			class USafeZoneSlot*                               ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOverlaySlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17691);
		
		struct
		{
			class UWidget*                                     Widget;
			class UOverlaySlot*                                ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHorizontalBoxSlot*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17690);
		
		struct
		{
			class UWidget*                                     Widget;
			class UHorizontalBoxSlot*                          ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGridSlot*                                   ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17689);
		
		struct
		{
			class UWidget*                                     Widget;
			class UGridSlot*                                   ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCanvasPanelSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17688);
		
		struct
		{
			class UWidget*                                     Widget;
			class UCanvasPanelSlot*                            ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBorderSlot*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17687);
		
		struct
		{
			class UWidget*                                     Widget;
			class UBorderSlot*                                 ReturnValue;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17686);
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayerViewportRelative                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17685);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FVector                        WorldLocation;
			struct FVector2D                      ScreenPosition;
			bool                                               bPlayerViewportRelative;
			bool                                               ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.WorldLocation = WorldLocation;
		params.bPlayerViewportRelative = bPlayerViewportRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenPosition != nullptr)
			*ScreenPosition = params.ScreenPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17684);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FGeometry                                   ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17683);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17682);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17681);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FGeometry                                   ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17680);
		
		struct
		{
			class APlayerController*                           Player;
			float                                              LocationX;
			float                                              LocationY;
			bool                                               ReturnValue;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationX != nullptr)
			*LocationX = params.LocationX;
		if (LocationY != nullptr)
			*LocationY = params.LocationY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17679);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17678);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetLayoutLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetLayoutLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2063);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetSwitcherSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17708);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17707);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetSwitcherSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17706);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetSwitcherSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetSwitcherSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2066);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetUserSpecifiedScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InUserSpecifiedScale                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17550);
		
		struct
		{
			float                                              InUserSpecifiedScale;
		} params;
		params.InUserSpecifiedScale = InUserSpecifiedScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetStretchDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStretchDirection                                  InStretchDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBox::SetStretchDirection(EStretchDirection InStretchDirection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17549);
		
		struct
		{
			EStretchDirection                                  InStretchDirection;
		} params;
		params.InStretchDirection = InStretchDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetStretch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStretch                                           InStretch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBox::SetStretch(EStretch InStretch)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17548);
		
		struct
		{
			EStretch                                           InStretch;
		} params;
		params.InStretch = InStretch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetIgnoreInheritedScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIgnoreInheritedScale                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17547);
		
		struct
		{
			bool                                               bInIgnoreInheritedScale;
		} params;
		params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScaleBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2029);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetNavigation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetNavigation::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2064);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetTouchMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonTouchMethod                                 InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCheckBox::SetTouchMethod(EButtonTouchMethod InTouchMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17422);
		
		struct
		{
			EButtonTouchMethod                                 InTouchMethod;
		} params;
		params.InTouchMethod = InTouchMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetPressMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonPressMethod                                 InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCheckBox::SetPressMethod(EButtonPressMethod InPressMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17421);
		
		struct
		{
			EButtonPressMethod                                 InPressMethod;
		} params;
		params.InPressMethod = InPressMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCheckBox::SetIsChecked(bool InIsChecked)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17420);
		
		struct
		{
			bool                                               InIsChecked;
		} params;
		params.InIsChecked = InIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetClickMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonClickMethod                                 InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCheckBox::SetClickMethod(EButtonClickMethod InClickMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17419);
		
		struct
		{
			EButtonClickMethod                                 InClickMethod;
		} params;
		params.InClickMethod = InClickMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17418);
		
		struct
		{
			ECheckBoxState                                     InCheckedState;
		} params;
		params.InCheckedState = InCheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.IsPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCheckBox::IsPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17417);
		
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
	 * 		Name   -> Function UMG.CheckBox.IsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCheckBox::IsChecked()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17416);
		
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
	 * 		Name   -> Function UMG.CheckBox.GetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECheckBoxState UCheckBox::GetCheckedState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17415);
		
		struct
		{
			ECheckBoxState                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCheckBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1977);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17553);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17552);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17551);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScaleBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2030);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2060);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.IsListItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IUserListEntry>             UserListEntry                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserListEntryLibrary::IsListItemSelected(const TScriptInterface<class IUserListEntry>& UserListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17484);
		
		struct
		{
			TScriptInterface<class IUserListEntry>             UserListEntry;
			bool                                               ReturnValue;
		} params;
		params.UserListEntry = UserListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.IsListItemExpanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IUserListEntry>             UserListEntry                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserListEntryLibrary::IsListItemExpanded(const TScriptInterface<class IUserListEntry>& UserListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17483);
		
		struct
		{
			TScriptInterface<class IUserListEntry>             UserListEntry;
			bool                                               ReturnValue;
		} params;
		params.UserListEntry = UserListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.GetOwningListView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IUserListEntry>             UserListEntry                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		class UListViewBase*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UListViewBase* UUserListEntryLibrary::GetOwningListView(const TScriptInterface<class IUserListEntry>& UserListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17482);
		
		struct
		{
			TScriptInterface<class IUserListEntry>             UserListEntry;
			class UListViewBase*                               ReturnValue;
		} params;
		params.UserListEntry = UserListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserListEntryLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUserListEntryLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1999);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarAreaSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17714);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17713);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarAreaSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17712);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindowTitleBarAreaSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWindowTitleBarAreaSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2069);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBar.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOffsetFraction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InThumbSizeFraction                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17554);
		
		struct
		{
			float                                              InOffsetFraction;
			float                                              InThumbSizeFraction;
		} params;
		params.InOffsetFraction = InOffsetFraction;
		params.InThumbSizeFraction = InThumbSizeFraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScrollBar::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2031);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlurSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17369);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17368);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBackgroundBlurSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17367);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackgroundBlurSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBackgroundBlurSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1967);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetTree::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2067);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckedStateBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECheckBoxState UCheckedStateBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17423);
		
		struct
		{
			ECheckBoxState                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckedStateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCheckedStateBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1978);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBox.SetInnerSlotPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17716);
		
		struct
		{
			struct FVector2D                      InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBox.AddChildToWrapBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWrapBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17715);
		
		struct
		{
			class UWidget*                                     Content;
			class UWrapBoxSlot*                                ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWrapBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWrapBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2070);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidgetBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17662);
		
		struct
		{
			class UWidget*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2058);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.UnlockMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8251);
		
		struct
		{
			struct FEventReply                                 Reply;
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Unhandled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::Unhandled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8250);
		
		struct
		{
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     TitleBarContent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWindowTitleBarMode                                Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTitleBarDragEnabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWindowButtonsVisible                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTitleBarVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8248);
		
		struct
		{
			class UWidget*                                     TitleBarContent;
			EWindowTitleBarMode                                Mode;
			bool                                               bTitleBarDragEnabled;
			bool                                               bWindowButtonsVisible;
			bool                                               bTitleBarVisible;
		} params;
		params.TitleBarContent = TitleBarContent;
		params.Mode = Mode;
		params.bTitleBarDragEnabled = bTitleBarDragEnabled;
		params.bWindowButtonsVisible = bWindowButtonsVisible;
		params.bTitleBarVisible = bTitleBarVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8247);
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8246);
		
		struct
		{
			bool                                               bActive;
		} params;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8245);
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     FocusWidget;
			bool                                               bInAllUsers;
			unsigned char                                      UnknownData_0000[0x7];
			struct FEventReply                                 ReturnValue;
		} params;
		params.FocusWidget = FocusWidget;
		params.bInAllUsers = bInAllUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      NewMousePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8244);
		
		struct
		{
			struct FEventReply                                 Reply;
			struct FVector2D                      NewMousePosition;
			struct FEventReply                                 ReturnValue;
		} params;
		params.NewMousePosition = NewMousePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8243);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UWidget*                                     InWidgetToFocus;
			EMouseLockMode                                     InMouseLockMode;
		} params;
		params.PlayerController = PlayerController;
		params.InWidgetToFocus = InWidgetToFocus;
		params.InMouseLockMode = InMouseLockMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8242);
		
		struct
		{
			class APlayerController*                           Target;
			class UWidget*                                     InWidgetToFocus;
			bool                                               bLockMouseToViewport;
		} params;
		params.Target = Target;
		params.InWidgetToFocus = InWidgetToFocus;
		params.bLockMouseToViewport = bLockMouseToViewport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8241);
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8239);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UWidget*                                     InWidgetToFocus;
			EMouseLockMode                                     InMouseLockMode;
			bool                                               bHideCursorDuringCapture;
		} params;
		params.PlayerController = PlayerController;
		params.InWidgetToFocus = InWidgetToFocus;
		params.InMouseLockMode = InMouseLockMode;
		params.bHideCursorDuringCapture = bHideCursorDuringCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8238);
		
		struct
		{
			class APlayerController*                           Target;
			class UWidget*                                     InWidgetToFocus;
			bool                                               bLockMouseToViewport;
			bool                                               bHideCursorDuringCapture;
		} params;
		params.Target = Target;
		params.InWidgetToFocus = InWidgetToFocus;
		params.bLockMouseToViewport = bLockMouseToViewport;
		params.bHideCursorDuringCapture = bHideCursorDuringCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseCursor                                       CursorShape                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        CursorName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      HotSpot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, const class FName& CursorName, const struct FVector2D& HotSpot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8237);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EMouseCursor                                       CursorShape;
			unsigned char                                      UnknownData_0001[0x3];
			class FName                                        CursorName;
			struct FVector2D                      HotSpot;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CursorShape = CursorShape;
		params.CursorName = CursorName;
		params.HotSpot = HotSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetFocusToGameViewport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8236);
		
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
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EColorVisionDeficiency                             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CorrectDeficiency                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowCorrectionWithDeficiency                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8234);
		
		struct
		{
			EColorVisionDeficiency                             Type;
			unsigned char                                      UnknownData_0002[0x3];
			float                                              Severity;
			bool                                               CorrectDeficiency;
			bool                                               ShowCorrectionWithDeficiency;
		} params;
		params.Type = Type;
		params.Severity = Severity;
		params.CorrectDeficiency = CorrectDeficiency;
		params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8233);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UTexture2D*                                  Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8232);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8231);
		
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
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8230);
		
		struct
		{
			struct FEventReply                                 Reply;
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8229);
		
		struct
		{
			struct FEventReply                                 Reply;
			bool                                               bInAllJoysticks;
			unsigned char                                      UnknownData_0003[0x7];
			struct FEventReply                                 ReturnValue;
		} params;
		params.bInAllJoysticks = bInAllJoysticks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8228);
		
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
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8227);
		
		struct
		{
			struct FSlateBrush                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8226);
		
		struct
		{
			class UTexture2D*                                  Texture;
			int32_t                                            Width;
			int32_t                                            Height;
			struct FSlateBrush                                 ReturnValue;
		} params;
		params.Texture = Texture;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8225);
		
		struct
		{
			class UMaterialInterface*                          Material;
			int32_t                                            Width;
			int32_t                                            Height;
			struct FSlateBrush                                 ReturnValue;
		} params;
		params.Material = Material;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            BrushAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8224);
		
		struct
		{
			class USlateBrushAsset*                            BrushAsset;
			struct FSlateBrush                                 ReturnValue;
		} params;
		params.BrushAsset = BrushAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.LockMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8223);
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
			struct FEventReply                                 ReturnValue;
		} params;
		params.CapturingWidget = CapturingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.IsDragDropping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetBlueprintLibrary::IsDragDropping()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8222);
		
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
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Handled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::Handled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8221);
		
		struct
		{
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    SafePadding                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      SafePaddingScale                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    SpillOverPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8220);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			unsigned char                                      UnknownData_0004[0x8];
			struct FVector4                                    SafePadding;
			struct FVector2D                      SafePaddingScale;
			unsigned char                                      UnknownData_0005[0x8];
			struct FVector4                                    SpillOverPadding;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SafePadding != nullptr)
			*SafePadding = params.SafePadding;
		if (SafePaddingScale != nullptr)
			*SafePaddingScale = params.SafePaddingScale;
		if (SpillOverPadding != nullptr)
			*SpillOverPadding = params.SpillOverPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalogInputEvent                           Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8218);
		
		struct
		{
			struct FAnalogInputEvent                           Event;
			struct FKeyEvent                                   ReturnValue;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8217);
		
		struct
		{
			struct FPointerEvent                               Event;
			struct FInputEvent                                 ReturnValue;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavigationEvent                            Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8215);
		
		struct
		{
			struct FNavigationEvent                            Event;
			struct FInputEvent                                 ReturnValue;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8213);
		
		struct
		{
			struct FKeyEvent                                   Event;
			struct FInputEvent                                 ReturnValue;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterEvent                             Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8211);
		
		struct
		{
			struct FCharacterEvent                             Event;
			struct FInputEvent                                 ReturnValue;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8210);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8209);
		
		struct
		{
			class UDragDropOperation*                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8208);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UTexture2D*                                  ReturnValue;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8207);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UMaterialInterface*                          ReturnValue;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8206);
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UObject*                                     ReturnValue;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class IInterface*                                  Interface                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class IInterface* Interface, bool TopLevelOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8205);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class UUserWidget*>                         FoundWidgets;
			class IInterface*                                  Interface;
			bool                                               TopLevelOnly;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Interface = Interface;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundWidgets != nullptr)
			*FoundWidgets = params.FoundWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UUserWidget* WidgetClass, bool TopLevelOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8204);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class UUserWidget*>                         FoundWidgets;
			class UUserWidget*                                 WidgetClass;
			bool                                               TopLevelOnly;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundWidgets != nullptr)
			*FoundWidgets = params.FoundWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.EndDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8203);
		
		struct
		{
			struct FEventReply                                 Reply;
			struct FEventReply                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFont*                                       Font                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FontSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FontTypeFace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8202);
		
		struct
		{
			struct FPaintContext                               Context;
			class FText                                        Text;
			struct FVector2D                      Position;
			class UFont*                                       Font;
			int32_t                                            FontSize;
			class FName                                        FontTypeFace;
			struct FLinearColor                                Tint;
		} params;
		params.Text = Text;
		params.Position = Position;
		params.Font = Font;
		params.FontSize = FontSize;
		params.FontTypeFace = FontTypeFace;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8201);
		
		struct
		{
			struct FPaintContext                               Context;
			class FString                                      inString;
			struct FVector2D                      Position;
			struct FLinearColor                                Tint;
		} params;
		params.inString = inString;
		params.Position = Position;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8200);
		
		struct
		{
			struct FPaintContext                               Context;
			TArray<struct FVector2D>              Points;
			struct FLinearColor                                Tint;
			bool                                               bAntiAlias;
			unsigned char                                      UnknownData_0006[0x3];
			float                                              Thickness;
		} params;
		params.Points = Points;
		params.Tint = Tint;
		params.bAntiAlias = bAntiAlias;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      PositionA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      PositionB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8199);
		
		struct
		{
			struct FPaintContext                               Context;
			struct FVector2D                      PositionA;
			struct FVector2D                      PositionB;
			struct FLinearColor                                Tint;
			bool                                               bAntiAlias;
			unsigned char                                      UnknownData_0007[0x3];
			float                                              Thickness;
		} params;
		params.PositionA = PositionA;
		params.PositionB = PositionB;
		params.Tint = Tint;
		params.bAntiAlias = bAntiAlias;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USlateBrushAsset*                            Brush                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8197);
		
		struct
		{
			struct FPaintContext                               Context;
			struct FVector2D                      Position;
			struct FVector2D                      Size;
			class USlateBrushAsset*                            Brush;
			struct FLinearColor                                Tint;
		} params;
		params.Position = Position;
		params.Size = Size;
		params.Brush = Brush;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::DismissAllMenus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8196);
		
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
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8195);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UWidget*                                     WidgetDetectingDrag;
			struct FKey                                        DragKey;
			struct FEventReply                                 ReturnValue;
		} params;
		params.PointerEvent = PointerEvent;
		params.WidgetDetectingDrag = WidgetDetectingDrag;
		params.DragKey = DragKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8194);
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     WidgetDetectingDrag;
			struct FKey                                        DragKey;
			struct FEventReply                                 ReturnValue;
		} params;
		params.WidgetDetectingDrag = WidgetDetectingDrag;
		params.DragKey = DragKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDragDropOperation*                          OperationClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UDragDropOperation* OperationClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8193);
		
		struct
		{
			class UDragDropOperation*                          OperationClass;
			class UDragDropOperation*                          ReturnValue;
		} params;
		params.OperationClass = OperationClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Create
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UUserWidget* WidgetType, class APlayerController* OwningPlayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8192);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UUserWidget*                                 WidgetType;
			class APlayerController*                           OwningPlayer;
			class UUserWidget*                                 ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetType = WidgetType;
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8191);
		
		struct
		{
			struct FEventReply                                 Reply;
			bool                                               bInAllUsers;
			unsigned char                                      UnknownData_0008[0x7];
			struct FEventReply                                 ReturnValue;
		} params;
		params.bInAllUsers = bInAllUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8190);
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
			struct FEventReply                                 ReturnValue;
		} params;
		params.CapturingWidget = CapturingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8189);
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
			bool                                               bInAllJoysticks;
			unsigned char                                      UnknownData_0009[0x7];
			struct FEventReply                                 ReturnValue;
		} params;
		params.CapturingWidget = CapturingWidget;
		params.bInAllJoysticks = bInAllJoysticks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UWidgetBlueprintLibrary::CancelDragDrop()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8188);
		
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
	 * 		Name   -> PredefinedFunction UWidgetBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2061);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserObjectListEntry.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17485);
		
		struct
		{
			class UObject*                                     ListItemObject;
		} params;
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IUserObjectListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IUserObjectListEntry::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2000);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarArea::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17711);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17710);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWindowTitleBarArea::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17709);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindowTitleBarArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWindowTitleBarArea::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2068);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17721);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17720);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17719);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17718);
		
		struct
		{
			float                                              InFillSpanWhenLessThan;
		} params;
		params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetFillEmptySpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17717);
		
		struct
		{
			bool                                               InbFillEmptySpace;
		} params;
		params.InbFillEmptySpace = InbFillEmptySpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWrapBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWrapBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2071);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCircularThrobber::SetRadius(float InRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17426);
		
		struct
		{
			float                                              InRadius;
		} params;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetPeriod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPeriod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCircularThrobber::SetPeriod(float InPeriod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17425);
		
		struct
		{
			float                                              InPeriod;
		} params;
		params.InPeriod = InPeriod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetNumberOfPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17424);
		
		struct
		{
			int32_t                                            InNumberOfPieces;
		} params;
		params.InNumberOfPieces = InNumberOfPieces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircularThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCircularThrobber::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1979);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17677);
		
		struct
		{
			class UWidget*                                     FocusWidget;
		} params;
		params.FocusWidget = FocusWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SetCustomHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17676);
		
		struct
		{
			struct FHitResult                                  HitResult;
		} params;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SendKeyChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Characters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17675);
		
		struct
		{
			class FString                                      Characters;
			bool                                               bRepeat;
			bool                                               ReturnValue;
		} params;
		params.Characters = Characters;
		params.bRepeat = bRepeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ScrollWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScrollDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17674);
		
		struct
		{
			float                                              ScrollDelta;
		} params;
		params.ScrollDelta = ScrollDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ReleasePointerKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17673);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ReleaseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17672);
		
		struct
		{
			struct FKey                                        Key;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressPointerKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17671);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17670);
		
		struct
		{
			struct FKey                                        Key;
			bool                                               bRepeat;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.bRepeat = bRepeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17669);
		
		struct
		{
			struct FKey                                        Key;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::IsOverInteractableWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17668);
		
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
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17667);
		
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
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::IsOverFocusableWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17666);
		
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
	 * 		Name   -> Function UMG.WidgetInteractionComponent.GetLastHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17665);
		
		struct
		{
			struct FHitResult                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17664);
		
		struct
		{
			class UWidgetComponent*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.Get2DHitLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17663);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetInteractionComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2062);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneWidgetMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneWidgetMaterialTrack::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2013);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ColorBinding.GetSlateValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateColor UColorBinding::GetSlateValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17428);
		
		struct
		{
			struct FSlateColor                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ColorBinding.GetLinearValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UColorBinding::GetLinearValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17427);
		
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
	 * 		Name   -> PredefinedFunction UColorBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UColorBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1980);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17557);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17556);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UScrollBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17555);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScrollBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2032);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserObjectListEntryLibrary.GetListItemObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TScriptInterface<class IUserObjectListEntry>       UserObjectListEntry                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UUserObjectListEntryLibrary::GetListItemObject(const TScriptInterface<class IUserObjectListEntry>& UserObjectListEntry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17486);
		
		struct
		{
			TScriptInterface<class IUserObjectListEntry>       UserObjectListEntry;
			class UObject*                                     ReturnValue;
		} params;
		params.UserObjectListEntry = UserObjectListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserObjectListEntryLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUserObjectListEntryLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2001);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetWidthOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetWidthOverride(float InWidthOverride)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17573);
		
		struct
		{
			float                                              InWidthOverride;
		} params;
		params.InWidthOverride = InWidthOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17572);
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17571);
		
		struct
		{
			float                                              InMinDesiredHeight;
		} params;
		params.InMinDesiredHeight = InMinDesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17570);
		
		struct
		{
			float                                              InMinAspectRatio;
		} params;
		params.InMinAspectRatio = InMinAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17569);
		
		struct
		{
			float                                              InMaxDesiredWidth;
		} params;
		params.InMaxDesiredWidth = InMaxDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17568);
		
		struct
		{
			float                                              InMaxDesiredHeight;
		} params;
		params.InMaxDesiredHeight = InMaxDesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17567);
		
		struct
		{
			float                                              InMaxAspectRatio;
		} params;
		params.InMaxAspectRatio = InMaxAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetHeightOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InHeightOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBox::SetHeightOverride(float InHeightOverride)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17566);
		
		struct
		{
			float                                              InHeightOverride;
		} params;
		params.InHeightOverride = InHeightOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearWidthOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearWidthOverride()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17565);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMinDesiredWidth()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17564);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMinDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMinDesiredHeight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17563);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMinAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMinAspectRatio()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17562);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMaxDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMaxDesiredWidth()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17561);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMaxDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMaxDesiredHeight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17560);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearMaxAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearMaxAspectRatio()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17559);
		
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
	 * 		Name   -> Function UMG.SizeBox.ClearHeightOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USizeBox::ClearHeightOverride()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17558);
		
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
	 * 		Name   -> PredefinedFunction USizeBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USizeBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2033);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetWidgetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InWidgetStyle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8366);
		
		struct
		{
			struct FTextBlockStyle                             InWidgetStyle;
		} params;
		params.InWidgetStyle = InWidgetStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8365);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8364);
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8363);
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8362);
		
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
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8361);
		
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
	 * 		Name   -> Function UMG.MultiLineEditableText.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UMultiLineEditableText::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8360);
		
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
	 * 		Name   -> Function UMG.MultiLineEditableText.GetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UMultiLineEditableText::GetHintText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8359);
		
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
	 * 		Name   -> PredefinedFunction UMultiLineEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMultiLineEditableText::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2015);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetWheelScrollMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17494);
		
		struct
		{
			float                                              NewWheelScrollMultiplier;
		} params;
		params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScrollOffset                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::SetScrollOffset(float InScrollOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17493);
		
		struct
		{
			float                                              InScrollOffset;
		} params;
		params.InScrollOffset = InScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetScrollBarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::SetScrollBarVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17492);
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.ScrollToTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::ScrollToTop()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17491);
		
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
	 * 		Name   -> Function UMG.ListViewBase.ScrollToBottom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::ScrollToBottom()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17490);
		
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
	 * 		Name   -> Function UMG.ListViewBase.RequestRefresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::RequestRefresh()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17489);
		
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
	 * 		Name   -> Function UMG.ListViewBase.RegenerateAllEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListViewBase::RegenerateAllEntries()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17488);
		
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
	 * 		Name   -> Function UMG.ListViewBase.GetDisplayedEntryWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         ReturnValue                                                (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17487);
		
		struct
		{
			TArray<class UUserWidget*>                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UListViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UListViewBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2002);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UComboBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1981);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17576);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17575);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USizeBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17574);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USizeBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USizeBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2034);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.SetSelectionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESelectionMode                                     SelectionMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::SetSelectionMode(ESelectionMode SelectionMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17517);
		
		struct
		{
			ESelectionMode                                     SelectionMode;
		} params;
		params.SelectionMode = SelectionMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17516);
		
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
	 * 		Name   -> Function UMG.ListView.ScrollIndexIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::ScrollIndexIntoView(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17515);
		
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
	 * 		Name   -> Function UMG.ListView.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::RemoveItem(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17514);
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.NavigateToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::NavigateToIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17513);
		
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
	 * 		Name   -> Function UMG.ListView.IsRefreshPending
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UListView::IsRefreshPending()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17512);
		
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
	 * 		Name   -> Function UMG.ListView.GetNumItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UListView::GetNumItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17511);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UListView::GetListItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17510);
		
		struct
		{
			TArray<class UObject*>                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetItemAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UListView::GetItemAt(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17509);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class UObject*                                     ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetIndexForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UListView::GetIndexForItem(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17508);
		
		struct
		{
			class UObject*                                     Item;
			int32_t                                            ReturnValue;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.ClearListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListView::ClearListItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17507);
		
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
	 * 		Name   -> Function UMG.ListView.BP_SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_SetSelectedItem(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17506);
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_SetListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             InListItems                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_SetListItems(TArray<class UObject*> InListItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17505);
		
		struct
		{
			TArray<class UObject*>                             InListItems;
		} params;
		params.InListItems = InListItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_SetItemSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17504);
		
		struct
		{
			class UObject*                                     Item;
			bool                                               bSelected;
		} params;
		params.Item = Item;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_ScrollItemIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_ScrollItemIntoView(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17503);
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_NavigateToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_NavigateToItem(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17502);
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_IsItemVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UListView::BP_IsItemVisible(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17501);
		
		struct
		{
			class UObject*                                     Item;
			bool                                               ReturnValue;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetSelectedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17500);
		
		struct
		{
			TArray<class UObject*>                             Items;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UListView::BP_GetSelectedItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17499);
		
		struct
		{
			class UObject*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetNumItemsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UListView::BP_GetNumItemsSelected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17498);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_ClearSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_ClearSelection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17497);
		
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
	 * 		Name   -> Function UMG.ListView.BP_CancelScrollIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UListView::BP_CancelScrollIntoView()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17496);
		
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
	 * 		Name   -> Function UMG.ListView.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UListView::AddItem(class UObject* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17495);
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UListView::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2003);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InTextStyle                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8375);
		
		struct
		{
			struct FTextBlockStyle                             InTextStyle;
		} params;
		params.InTextStyle = InTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8374);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8373);
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8372);
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8371);
		
		struct
		{
			class FText                                        InError;
		} params;
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8370);
		
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
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8369);
		
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
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UMultiLineEditableTextBox::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8368);
		
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
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.GetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UMultiLineEditableTextBox::GetHintText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8367);
		
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
	 * 		Name   -> PredefinedFunction UMultiLineEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMultiLineEditableTextBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2016);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      LocalVector                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17592);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      LocalVector;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.LocalVector = LocalVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AbsoluteVector                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17591);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      AbsoluteVector;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteVector = AbsoluteVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              LocalScalar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17590);
		
		struct
		{
			struct FGeometry                                   Geometry;
			float                                              LocalScalar;
			float                                              ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.LocalScalar = LocalScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              AbsoluteScalar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17589);
		
		struct
		{
			struct FGeometry                                   Geometry;
			float                                              AbsoluteScalar;
			float                                              ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteScalar = AbsoluteScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      LocalCoordinate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17588);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FGeometry                                   Geometry;
			struct FVector2D                      ScreenPosition;
			struct FVector2D                      LocalCoordinate;
			bool                                               bIncludeWindowPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Geometry = Geometry;
		params.ScreenPosition = ScreenPosition;
		params.bIncludeWindowPosition = bIncludeWindowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalCoordinate != nullptr)
			*LocalCoordinate = params.LocalCoordinate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AbsoluteCoordinate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17587);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ScreenPosition;
			struct FVector2D                      AbsoluteCoordinate;
			bool                                               bIncludeWindowPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		params.bIncludeWindowPosition = bIncludeWindowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbsoluteCoordinate != nullptr)
			*AbsoluteCoordinate = params.AbsoluteCoordinate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17586);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ScreenPosition;
			struct FVector2D                      ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.LocalToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17585);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FGeometry                                   Geometry;
			struct FVector2D                      LocalCoordinate;
			struct FVector2D                      PixelPosition;
			struct FVector2D                      ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Geometry = Geometry;
		params.LocalCoordinate = LocalCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelPosition != nullptr)
			*PixelPosition = params.PixelPosition;
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17584);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      LocalCoordinate;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.LocalCoordinate = LocalCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.IsUnderLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AbsoluteCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17583);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      AbsoluteCoordinate;
			bool                                               ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteCoordinate = AbsoluteCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17582);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17581);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17580);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17579);
		
		struct
		{
			struct FSlateBrush                                 A;
			struct FSlateBrush                                 B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AbsoluteDesktopCoordinate                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17578);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      AbsoluteDesktopCoordinate;
			struct FVector2D                      PixelPosition;
			struct FVector2D                      ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelPosition != nullptr)
			*PixelPosition = params.PixelPosition;
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AbsoluteCoordinate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17577);
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                      AbsoluteCoordinate;
			struct FVector2D                      ReturnValue;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteCoordinate = AbsoluteCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USlateBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2035);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UListViewDesignerPreviewItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UListViewDesignerPreviewItem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2004);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNamedSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNamedSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2017);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateVectorArtData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USlateVectorArtData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2036);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.ToggleOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusOnOpen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8356);
		
		struct
		{
			bool                                               bFocusOnOpen;
		} params;
		params.bFocusOnOpen = bFocusOnOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.ShouldOpenDueToClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMenuAnchor::ShouldOpenDueToClick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8355);
		
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
	 * 		Name   -> Function UMG.MenuAnchor.SetPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuPlacement                                     InPlacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMenuAnchor::SetPlacement(EMenuPlacement InPlacement)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8353);
		
		struct
		{
			EMenuPlacement                                     InPlacement;
		} params;
		params.InPlacement = InPlacement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusMenu                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMenuAnchor::Open(bool bFocusMenu)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8352);
		
		struct
		{
			bool                                               bFocusMenu;
		} params;
		params.bFocusMenu = bFocusMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.IsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMenuAnchor::IsOpen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8351);
		
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
	 * 		Name   -> Function UMG.MenuAnchor.HasOpenSubMenus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMenuAnchor::HasOpenSubMenus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8350);
		
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
	 * 		Name   -> DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8349);
		
		struct
		{
			class UUserWidget*                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.GetMenuPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UMenuAnchor::GetMenuPosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8348);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.FitInWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMenuAnchor::FitInWindow(bool bFit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8347);
		
		struct
		{
			bool                                               bFit;
		} params;
		params.bFit = bFit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.Close
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMenuAnchor::Close()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8346);
		
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
	 * 		Name   -> PredefinedFunction UMenuAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMenuAnchor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2005);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction INamedSlotInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* INamedSlotInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2018);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateAccessibleWidgetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USlateAccessibleWidgetData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2037);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNativeWidgetHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNativeWidgetHost::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2019);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.SetSelectedOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::SetSelectedOption(const class FString& Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8272);
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8271);
		
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
	 * 		Name   -> Function UMG.ComboBoxString.RemoveOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComboBoxString::RemoveOption(const class FString& Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8270);
		
		struct
		{
			class FString                                      Option;
			bool                                               ReturnValue;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.RefreshOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::RefreshOptions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8269);
		
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
	 * 		Name   -> DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8267);
		
		struct
		{
			class FString                                      SelectedItem;
			ESelectInfo                                        SelectionType;
		} params;
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8266);
		
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
	 * 		Name   -> Function UMG.ComboBoxString.IsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComboBoxString::IsOpen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8265);
		
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
	 * 		Name   -> Function UMG.ComboBoxString.GetSelectedOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UComboBoxString::GetSelectedOption()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8264);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UComboBoxString::GetSelectedIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8263);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetOptionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UComboBoxString::GetOptionCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8262);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetOptionAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UComboBoxString::GetOptionAtIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8261);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.FindOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UComboBoxString::FindOptionIndex(const class FString& Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8260);
		
		struct
		{
			class FString                                      Option;
			int32_t                                            ReturnValue;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.ClearSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::ClearSelection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8259);
		
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
	 * 		Name   -> Function UMG.ComboBoxString.ClearOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::ClearOptions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8258);
		
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
	 * 		Name   -> Function UMG.ComboBoxString.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UComboBoxString::AddOption(const class FString& Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8257);
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboBoxString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UComboBoxString::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1982);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MouseCursorBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMouseCursor                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMouseCursor UMouseCursorBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17518);
		
		struct
		{
			EMouseCursor                                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouseCursorBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMouseCursorBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2006);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Overlay.AddChildToOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOverlaySlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17519);
		
		struct
		{
			class UWidget*                                     Content;
			class UOverlaySlot*                                ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOverlay::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2020);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetValue(float InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17602);
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetStepSize(float InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17601);
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetSliderHandleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17600);
		
		struct
		{
			struct FLinearColor                                InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetSliderBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17599);
		
		struct
		{
			struct FLinearColor                                InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetMinValue(float InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17598);
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetMaxValue(float InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17597);
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetLocked(bool InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17596);
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetIndentHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17595);
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlider::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17594);
		
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
	 * 		Name   -> Function UMG.Slider.GetNormalizedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlider::GetNormalizedValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17593);
		
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
	 * 		Name   -> PredefinedFunction USlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USlider::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2038);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Spacer.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpacer::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17603);
		
		struct
		{
			struct FVector2D                      InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpacer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USpacer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2039);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17522);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17521);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17520);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverlaySlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOverlaySlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2021);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8407);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMinValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8406);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMinSliderValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8405);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMinFractionalDigits(int32_t NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8404);
		
		struct
		{
			int32_t                                            NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMaxValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8403);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMaxSliderValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8402);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetMaxFractionalDigits(int32_t NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8401);
		
		struct
		{
			int32_t                                            NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetForegroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8400);
		
		struct
		{
			struct FSlateColor                                 InForegroundColor;
		} params;
		params.InForegroundColor = InForegroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetDelta(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8399);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8398);
		
		struct
		{
			bool                                               bNewValue;
		} params;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8397);
		
		struct
		{
			float                                              InValue;
			ETextCommit                                        CommitMethod;
		} params;
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8396);
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8395);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8394);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetMinValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8393);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetMinSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetMinSliderValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8392);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetMinFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpinBox::GetMinFractionalDigits()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8391);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetMaxValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8390);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetMaxSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetMaxSliderValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8389);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetMaxFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USpinBox::GetMaxFractionalDigits()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8388);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpinBox::GetDelta()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8387);
		
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
	 * 		Name   -> Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpinBox::GetAlwaysUsesDeltaSnap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8386);
		
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
	 * 		Name   -> Function UMG.SpinBox.ClearMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USpinBox::ClearMinValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8385);
		
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
	 * 		Name   -> Function UMG.SpinBox.ClearMinSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USpinBox::ClearMinSliderValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8384);
		
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
	 * 		Name   -> Function UMG.SpinBox.ClearMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USpinBox::ClearMaxValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8383);
		
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
	 * 		Name   -> Function UMG.SpinBox.ClearMaxSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USpinBox::ClearMaxSliderValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8382);
		
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
	 * 		Name   -> PredefinedFunction USpinBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USpinBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2040);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.Drop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17431);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.Dragged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17430);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.DragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17429);
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragDropOperation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDragDropOperation::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1983);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBinding.GetTextValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UTextBinding::GetTextValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17605);
		
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
	 * 		Name   -> Function UMG.TextBinding.GetStringValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTextBinding::GetStringValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17604);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2041);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProgressBar::SetPercent(float InPercent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17525);
		
		struct
		{
			float                                              InPercent;
		} params;
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetIsMarquee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsMarquee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProgressBar::SetIsMarquee(bool InbIsMarquee)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17524);
		
		struct
		{
			bool                                               InbIsMarquee;
		} params;
		params.InbIsMarquee = InbIsMarquee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17523);
		
		struct
		{
			struct FLinearColor                                InColor;
		} params;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UProgressBar::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2022);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetTextTransformPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextTransformPolicy                               InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17618);
		
		struct
		{
			ETextTransformPolicy                               InTransformPolicy;
		} params;
		params.InTransformPolicy = InTransformPolicy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17617);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetStrikeBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InStrikeBrush                                              (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17616);
		
		struct
		{
			struct FSlateBrush                                 InStrikeBrush;
		} params;
		params.InStrikeBrush = InStrikeBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetShadowOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17615);
		
		struct
		{
			struct FVector2D                      InShadowOffset;
		} params;
		params.InShadowOffset = InShadowOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetShadowColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17614);
		
		struct
		{
			struct FLinearColor                                InShadowColorAndOpacity;
		} params;
		params.InShadowColorAndOpacity = InShadowColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetOpacity(float InOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17613);
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17612);
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17611);
		
		struct
		{
			struct FSlateFontInfo                              InFontInfo;
		} params;
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17610);
		
		struct
		{
			struct FSlateColor                                 InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17609);
		
		struct
		{
			bool                                               InAutoTextWrap;
		} params;
		params.InAutoTextWrap = InAutoTextWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UTextBlock::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17608);
		
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
	 * 		Name   -> Function UMG.TextBlock.GetDynamicOutlineMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17607);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.GetDynamicFontMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17606);
		
		struct
		{
			class UMaterialInstanceDynamic*                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextBlock::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2042);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetNumberOfPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17622);
		
		struct
		{
			int32_t                                            InNumberOfPieces;
		} params;
		params.InNumberOfPieces = InNumberOfPieces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateVertically
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateVertically                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17621);
		
		struct
		{
			bool                                               bInAnimateVertically;
		} params;
		params.bInAnimateVertically = bInAnimateVertically;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17620);
		
		struct
		{
			bool                                               bInAnimateOpacity;
		} params;
		params.bInAnimateOpacity = bInAnimateOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateHorizontally
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateHorizontally                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17619);
		
		struct
		{
			bool                                               bInAnimateHorizontally;
		} params;
		params.bInAnimateHorizontally = bInAnimateHorizontally;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UThrobber::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2043);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.SetEntryWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTileView::SetEntryWidth(float NewWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17626);
		
		struct
		{
			float                                              NewWidth;
		} params;
		params.NewWidth = NewWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.SetEntryHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTileView::SetEntryHeight(float NewHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17625);
		
		struct
		{
			float                                              NewHeight;
		} params;
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.GetEntryWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTileView::GetEntryWidth()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17624);
		
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
	 * 		Name   -> Function UMG.TileView.GetEntryHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTileView::GetEntryHeight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17623);
		
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
	 * 		Name   -> PredefinedFunction UTileView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTileView::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2044);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.SetRadialSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadialBoxSettings                          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17435);
		
		struct
		{
			struct FRadialBoxSettings                          InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InEntrySpacing                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17434);
		
		struct
		{
			struct FVector2D                      InEntrySpacing;
		} params;
		params.InEntrySpacing = InEntrySpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.GetNumEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDynamicEntryBoxBase::GetNumEntries()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17433);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.GetAllEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         ReturnValue                                                (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17432);
		
		struct
		{
			TArray<class UUserWidget*>                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicEntryBoxBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDynamicEntryBoxBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1984);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TreeView.SetItemExpansion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExpandItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17629);
		
		struct
		{
			class UObject*                                     Item;
			bool                                               bExpandItem;
		} params;
		params.Item = Item;
		params.bExpandItem = bExpandItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TreeView.ExpandAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UTreeView::ExpandAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17628);
		
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
	 * 		Name   -> Function UMG.TreeView.CollapseAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UTreeView::CollapseAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17627);
		
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
	 * 		Name   -> PredefinedFunction UTreeView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTreeView::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2045);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UMGSequencePlayer.SetUserTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InUserTag                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUMGSequencePlayer::SetUserTag(const class FName& InUserTag)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17631);
		
		struct
		{
			class FName                                        InUserTag;
		} params;
		params.InUserTag = InUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UMGSequencePlayer.GetUserTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UUMGSequencePlayer::GetUserTag()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17630);
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUMGSequencePlayer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2046);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGSequenceTickManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUMGSequenceTickManager::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2047);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDeleteWidgets                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDynamicEntryBox::Reset(bool bDeleteWidgets)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17439);
		
		struct
		{
			bool                                               bDeleteWidgets;
		} params;
		params.bDeleteWidgets = bDeleteWidgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.RemoveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 EntryWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17438);
		
		struct
		{
			class UUserWidget*                                 EntryWidget;
		} params;
		params.EntryWidget = EntryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 EntryClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(class UUserWidget* EntryClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17437);
		
		struct
		{
			class UUserWidget*                                 EntryClass;
			class UUserWidget*                                 ReturnValue;
		} params;
		params.EntryClass = EntryClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17436);
		
		struct
		{
			class UUserWidget*                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicEntryBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDynamicEntryBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1985);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetSlotPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InSlotPadding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17635);
		
		struct
		{
			struct FMargin                                     InSlotPadding;
		} params;
		params.InSlotPadding = InSlotPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotWidth                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17634);
		
		struct
		{
			float                                              InMinDesiredSlotWidth;
		} params;
		params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotHeight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17633);
		
		struct
		{
			float                                              InMinDesiredSlotHeight;
		} params;
		params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.AddChildToUniformGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUniformGridSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17632);
		
		struct
		{
			class UWidget*                                     Content;
			int32_t                                            InRow;
			int32_t                                            InColumn;
			class UUniformGridSlot*                            ReturnValue;
		} params;
		params.Content = Content;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUniformGridPanel::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2048);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17639);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridSlot::SetRow(int32_t InRow)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17638);
		
		struct
		{
			int32_t                                            InRow;
		} params;
		params.InRow = InRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17637);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUniformGridSlot::SetColumn(int32_t InColumn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17636);
		
		struct
		{
			int32_t                                            InColumn;
		} params;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformGridSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUniformGridSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2049);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBox.AddChildToVerticalBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVerticalBoxSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17640);
		
		struct
		{
			class UWidget*                                     Content;
			class UVerticalBoxSlot*                            ReturnValue;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVerticalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVerticalBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2050);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17644);
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17643);
		
		struct
		{
			struct FSlateChildSize                             InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17642);
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17641);
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVerticalBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVerticalBoxSlot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2051);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8290);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8288);
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsReadyOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8287);
		
		struct
		{
			bool                                               InbIsReadyOnly;
		} params;
		params.InbIsReadyOnly = InbIsReadyOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetIsPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsPassword                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::SetIsPassword(bool InbIsPassword)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8286);
		
		struct
		{
			bool                                               InbIsPassword;
		} params;
		params.InbIsPassword = InbIsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8285);
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8283);
		
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
	 * 		Name   -> DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8282);
		
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
	 * 		Name   -> Function UMG.EditableText.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UEditableText::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8281);
		
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
	 * 		Name   -> PredefinedFunction UEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableText::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1986);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.Spawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UViewport::Spawn(class AActor* ActorClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17650);
		
		struct
		{
			class AActor*                                      ActorClass;
			class AActor*                                      ReturnValue;
		} params;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.SetViewRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UViewport::SetViewRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17649);
		
		struct
		{
			struct FRotator                       Rotation;
		} params;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.SetViewLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UViewport::SetViewLocation(const struct FVector& Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17648);
		
		struct
		{
			struct FVector                        Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UViewport::GetViewRotation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17647);
		
		struct
		{
			struct FRotator                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewportWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorld* UViewport::GetViewportWorld()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17646);
		
		struct
		{
			class UWorld*                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UViewport::GetViewLocation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17645);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UViewport::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2052);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VisibilityBinding.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESlateVisibility UVisibilityBinding::GetValue()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17651);
		
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
	 * 		Name   -> PredefinedFunction UVisibilityBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVisibilityBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2053);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17659);
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17658);
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17657);
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17656);
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.GetStartTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetAnimation::GetStartTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17655);
		
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
	 * 		Name   -> Function UMG.WidgetAnimation.GetEndTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetAnimation::GetEndTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17654);
		
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
	 * 		Name   -> Function UMG.WidgetAnimation.BindToAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17653);
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.BindToAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17652);
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetAnimation::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2054);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8309);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8308);
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8307);
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetIsPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPassword                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetIsPassword(bool bIsPassword)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8306);
		
		struct
		{
			bool                                               bIsPassword;
		} params;
		params.bIsPassword = bIsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetHintText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8305);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8304);
		
		struct
		{
			class FText                                        InError;
		} params;
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8303);
		
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
	 * 		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8302);
		
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
	 * 		Name   -> Function UMG.EditableTextBox.HasError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBox::HasError()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8301);
		
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
	 * 		Name   -> Function UMG.EditableTextBox.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UEditableTextBox::GetText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8300);
		
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
	 * 		Name   -> Function UMG.EditableTextBox.ClearError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableTextBox::ClearError()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8299);
		
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
	 * 		Name   -> PredefinedFunction UEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableTextBox::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1987);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetAnimationDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWidgetAnimationDelegateBinding::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2056);
		return ptr;
	}

}


