#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutSlot_v2.W_LoadoutSlot_v2_C
// (None)

class UClass* UW_LoadoutSlot_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutSlot_v2_C");

	return Clss;
}


// W_LoadoutSlot_v2_C W_LoadoutSlot_v2.Default__W_LoadoutSlot_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutSlot_v2_C* UW_LoadoutSlot_v2_C::GetDefaultObj()
{
	static class UW_LoadoutSlot_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutSlot_v2_C*>(UW_LoadoutSlot_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BackPage");

	Params::UW_LoadoutSlot_v2_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "GetFocusTarget");

	Params::UW_LoadoutSlot_v2_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshMunitionButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MunitionsMaxed_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::RefreshMunitionButtons(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_MunitionsMaxed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "RefreshMunitionButtons");

	Params::UW_LoadoutSlot_v2_C_RefreshMunitionButtons_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MunitionsMaxed_ReturnValue = CallFunc_MunitionsMaxed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.MunitionsMaxed
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentSlotCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaximumSlotCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_LoadoutSlot_v2_C::MunitionsMaxed(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_GetCurrentSlotCount_ReturnValue, int32 CallFunc_GetMaximumSlotCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "MunitionsMaxed");

	Params::UW_LoadoutSlot_v2_C_MunitionsMaxed_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentSlotCount_ReturnValue = CallFunc_GetCurrentSlotCount_ReturnValue;
	Parms.CallFunc_GetMaximumSlotCount_ReturnValue = CallFunc_GetMaximumSlotCount_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.IsNewSubtext
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_LoadoutSlot_v2_C::IsNewSubtext(class FText Text, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "IsNewSubtext");

	Params::UW_LoadoutSlot_v2_C_IsNewSubtext_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EUINavigation           CallFunc_Key_GetNavigationDirectionFromKey_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_LoadoutSlot_v2_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, enum class EUINavigation CallFunc_Key_GetNavigationDirectionFromKey_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnKeyUp");

	Params::UW_LoadoutSlot_v2_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Key_GetNavigationDirectionFromKey_ReturnValue = CallFunc_Key_GetNavigationDirectionFromKey_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SmallIcon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::SetIconVisibility(bool SmallIcon, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetIconVisibility");

	Params::UW_LoadoutSlot_v2_C_SetIconVisibility_Params Parms{};

	Parms.SmallIcon = SmallIcon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshInfo
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetItemClassText_Category_Text                          (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)

void UW_LoadoutSlot_v2_C::RefreshInfo(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetItemClassText_Category_Text, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetAttachmentSlotText_SlotText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "RefreshInfo");

	Params::UW_LoadoutSlot_v2_C_RefreshInfo_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetItemClassText_Category_Text = CallFunc_GetItemClassText_Category_Text;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetVisualState
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetEquippedColorByState_ReturnValue                     (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetNormalColorByState_ReturnValue                       (None)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)

void UW_LoadoutSlot_v2_C::SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, const struct FSlateColor& CallFunc_GetEquippedColorByState_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FSlateColor& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetVisualState");

	Params::UW_LoadoutSlot_v2_C_SetVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Equipped = Equipped;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetEquippedColorByState_ReturnValue = CallFunc_GetEquippedColorByState_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetNormalColorByState_ReturnValue = CallFunc_GetNormalColorByState_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetGamepadFontStyles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class UCommonTextStyle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonTextStyle> UW_LoadoutSlot_v2_C::GetGamepadFontStyles(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "GetGamepadFontStyles");

	Params::UW_LoadoutSlot_v2_C_GetGamepadFontStyles_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetNormalFontSyles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class UCommonTextStyle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonTextStyle> UW_LoadoutSlot_v2_C::GetNormalFontSyles(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "GetNormalFontSyles");

	Params::UW_LoadoutSlot_v2_C_GetNormalFontSyles_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UnbindFromButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UW_LoadoutSlot_v2_C::UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UnbindFromButton");

	Params::UW_LoadoutSlot_v2_C_UnbindFromButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindDoubleClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BindDoubleClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindDoubleClick");

	Params::UW_LoadoutSlot_v2_C_BindDoubleClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BindClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindClick");

	Params::UW_LoadoutSlot_v2_C_BindClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::BindUnhovered(bool CallFunc_GetEquipped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindUnhovered");

	Params::UW_LoadoutSlot_v2_C_BindUnhovered_Params Parms{};

	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindPressedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::BindPressedState(bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_IsPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindPressedState");

	Params::UW_LoadoutSlot_v2_C_BindPressedState_Params Parms{};

	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::BindHovered(class UW_Button_C* ParentButton, bool CallFunc_GetEquipped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindHovered");

	Params::UW_LoadoutSlot_v2_C_BindHovered_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindSelectedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindSelectedState");

	Params::UW_LoadoutSlot_v2_C_BindSelectedState_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BindToButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BindClicks                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UW_LoadoutSlot_v2_C::BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BindToButton");

	Params::UW_LoadoutSlot_v2_C_BindToButton_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.BindClicks = BindClicks;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetEquippedColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

struct FSlateColor UW_LoadoutSlot_v2_C::GetEquippedColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "GetEquippedColorByState");

	Params::UW_LoadoutSlot_v2_C_GetEquippedColorByState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateDetailFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_AdjustFontSize_Font                                     (HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_AdjustFontSize_Font_1                                   (HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::UpdateDetailFontSize(int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateDetailFontSize");

	Params::UW_LoadoutSlot_v2_C_UpdateDetailFontSize_Params Parms{};

	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_AdjustFontSize_Font = CallFunc_AdjustFontSize_Font;
	Parms.CallFunc_AdjustFontSize_Font_1 = CallFunc_AdjustFontSize_Font_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateNameFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetNormalFontSyles_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetGamepadFontStyles_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::UpdateNameFont(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> CallFunc_GetNormalFontSyles_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetGamepadFontStyles_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateNameFont");

	Params::UW_LoadoutSlot_v2_C_UpdateNameFont_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetNormalFontSyles_ReturnValue = CallFunc_GetNormalFontSyles_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGamepadFontStyles_ReturnValue = CallFunc_GetGamepadFontStyles_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.AdjustFontSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              Font                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "AdjustFontSize");

	Params::UW_LoadoutSlot_v2_C_AdjustFontSize_Params Parms{};

	Parms.TextWidget = TextWidget;
	Parms.FontSize = FontSize;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = std::move(Parms.Font);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateStyle");

	Params::UW_LoadoutSlot_v2_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.GetNormalColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

struct FSlateColor UW_LoadoutSlot_v2_C::GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "GetNormalColorByState");

	Params::UW_LoadoutSlot_v2_C_GetNormalColorByState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutSlot_v2_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateCurrentItemMap");

	Params::UW_LoadoutSlot_v2_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetLoadoutWidget");

	Params::UW_LoadoutSlot_v2_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "HeaderSubpageNavigation");

	Params::UW_LoadoutSlot_v2_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "PreConstruct");

	Params::UW_LoadoutSlot_v2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_LoadoutSlot_v2_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnAddedToFocusPath");

	Params::UW_LoadoutSlot_v2_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateCurrentSlot");

	Params::UW_LoadoutSlot_v2_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutSlot_v2_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "UpdateActiveLoadout");

	Params::UW_LoadoutSlot_v2_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "ChangePage");

	Params::UW_LoadoutSlot_v2_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetInputMode");

	Params::UW_LoadoutSlot_v2_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "InputMethodChanged");

	Params::UW_LoadoutSlot_v2_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetArmorMaterial
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::SetArmorMaterial(class UArmourMaterial* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetArmorMaterial");

	Params::UW_LoadoutSlot_v2_C_SetArmorMaterial_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.SetManualDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Subtext                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  ItemImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::SetManualDetails(class FText ItemName, class FText SlotName, class FText Subtext, class UTexture2D* ItemImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "SetManualDetails");

	Params::UW_LoadoutSlot_v2_C_SetManualDetails_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.SlotName = SlotName;
	Parms.Subtext = Subtext;
	Parms.ItemImage = ItemImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshItemImage
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::RefreshItemImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "RefreshItemImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.RefreshAttachmentImage
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::RefreshAttachmentImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "RefreshAttachmentImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "Hide");

	Params::UW_LoadoutSlot_v2_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "Reveal");

	Params::UW_LoadoutSlot_v2_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnSlotsUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::OnSlotsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnSlotsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ShowSubtext
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_v2_C::ShowSubtext(class FText& Text, bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "ShowSubtext");

	Params::UW_LoadoutSlot_v2_C_ShowSubtext_Params Parms{};

	Parms.Text = Text;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.ExecuteUbergraph_W_LoadoutSlot_v2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetEquipped_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetEquipped_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetEquipped_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetEquipped_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmourMaterial*             K2Node_Event_Item                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ItemName                                      (None)
// class FText                        K2Node_CustomEvent_SlotName                                      (None)
// class FText                        K2Node_CustomEvent_Subtext                                       (None)
// class UTexture2D*                  K2Node_CustomEvent_ItemImage                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMunitionTypeText_MunitionText                        (None)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_IsNewSubtext_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_LoadoutSlot_v2_C::ExecuteUbergraph_W_LoadoutSlot_v2(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_GetEquipped_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_3, bool CallFunc_GetEquipped_ReturnValue_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FName K2Node_Event_PageName, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsGamepad, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_5, class UArmourMaterial* K2Node_Event_Item, class FText K2Node_CustomEvent_ItemName, class FText K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_Subtext, class UTexture2D* K2Node_CustomEvent_ItemImage, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, const struct FSlateColor& K2Node_Select_Default, float K2Node_Event_Delay, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetMunitionTypeText_MunitionText, class FText K2Node_Event_Text, bool K2Node_Event_Show, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsNewSubtext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "ExecuteUbergraph_W_LoadoutSlot_v2");

	Params::UW_LoadoutSlot_v2_C_ExecuteUbergraph_W_LoadoutSlot_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetEquipped_ReturnValue_1 = CallFunc_GetEquipped_ReturnValue_1;
	Parms.CallFunc_GetEquipped_ReturnValue_2 = CallFunc_GetEquipped_ReturnValue_2;
	Parms.CallFunc_GetEquipped_ReturnValue_3 = CallFunc_GetEquipped_ReturnValue_3;
	Parms.CallFunc_GetEquipped_ReturnValue_4 = CallFunc_GetEquipped_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEquipped_ReturnValue_5 = CallFunc_GetEquipped_ReturnValue_5;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_CustomEvent_ItemName = K2Node_CustomEvent_ItemName;
	Parms.K2Node_CustomEvent_SlotName = K2Node_CustomEvent_SlotName;
	Parms.K2Node_CustomEvent_Subtext = K2Node_CustomEvent_Subtext;
	Parms.K2Node_CustomEvent_ItemImage = K2Node_CustomEvent_ItemImage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetMunitionTypeText_MunitionText = CallFunc_GetMunitionTypeText_MunitionText;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsNewSubtext_ReturnValue = CallFunc_IsNewSubtext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::OnUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnDoubleClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::OnDoubleClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnDoubleClick__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_OnDoubleClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_v2_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnHover__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_v2.W_LoadoutSlot_v2_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_v2_C::OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_v2_C", "OnClick__DelegateSignature");

	Params::UW_LoadoutSlot_v2_C_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


