#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Carousel.W_Carousel_C
// (None)

class UClass* UW_Carousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Carousel_C");

	return Clss;
}


// W_Carousel_C W_Carousel.Default__W_Carousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Carousel_C* UW_Carousel_C::GetDefaultObj()
{
	static class UW_Carousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Carousel_C*>(UW_Carousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Carousel.W_Carousel_C.HideIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHideIcons                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::HideIcons(bool bHideIcons, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "HideIcons");

	Params::UW_Carousel_C_HideIcons_Params Parms{};

	Parms.bHideIcons = bHideIcons;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.GetIconVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::GetIconVisibility(enum class ESlateVisibility* Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "GetIconVisibility");

	Params::UW_Carousel_C_GetIconVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function W_Carousel.W_Carousel_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Carousel_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "SetTextColor");

	Params::UW_Carousel_C_SetTextColor_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.SetBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::SetBorderColor(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "SetBorderColor");

	Params::UW_Carousel_C_SetBorderColor_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.SetIconSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::SetIconSize(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "SetIconSize");

	Params::UW_Carousel_C_SetIconSize_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.GetActionIconSizeRatio
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonActionWidget*         CommonActionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconRatio                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIcon_ReturnValue                                     (None)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::GetActionIconSizeRatio(class UCommonActionWidget* CommonActionWidget, float* IconRatio, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "GetActionIconSizeRatio");

	Params::UW_Carousel_C_GetActionIconSizeRatio_Params Parms{};

	Parms.CommonActionWidget = CommonActionWidget;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IconRatio != nullptr)
		*IconRatio = Parms.IconRatio;

}


// Function W_Carousel.W_Carousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Carousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "PreConstruct");

	Params::UW_Carousel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Carousel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Carousel.W_Carousel_C.OptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::OptionSelected(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "OptionSelected");

	Params::UW_Carousel_C_OptionSelected_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.NavigateNextTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Carousel_C::NavigateNextTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "NavigateNextTerminated");

	Params::UW_Carousel_C_NavigateNextTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.NavigatePrevTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Carousel_C::NavigatePrevTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "NavigatePrevTerminated");

	Params::UW_Carousel_C_NavigatePrevTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.NextNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::NextNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "NextNavigated");

	Params::UW_Carousel_C_NextNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.PrevNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::PrevNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "PrevNavigated");

	Params::UW_Carousel_C_PrevNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Carousel.W_Carousel_C.ExecuteUbergraph_W_Carousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Terminated_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Terminated                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_OptionID_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_OptionID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Carousel_C::ExecuteUbergraph_W_Carousel(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, float CallFunc_GetActionIconSizeRatio_IconRatio, float CallFunc_GetActionIconSizeRatio_IconRatio_1, class FName K2Node_Event_OptionNameID, bool K2Node_Event_Terminated_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool K2Node_Event_Terminated, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, class FName K2Node_CustomEvent_OptionID_1, class FName K2Node_CustomEvent_OptionID, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Carousel_C", "ExecuteUbergraph_W_Carousel");

	Params::UW_Carousel_C_ExecuteUbergraph_W_Carousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio = CallFunc_GetActionIconSizeRatio_IconRatio;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio_1 = CallFunc_GetActionIconSizeRatio_IconRatio_1;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_Terminated_1 = K2Node_Event_Terminated_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Event_Terminated = K2Node_Event_Terminated;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_OptionID_1 = K2Node_CustomEvent_OptionID_1;
	Parms.K2Node_CustomEvent_OptionID = K2Node_CustomEvent_OptionID;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


