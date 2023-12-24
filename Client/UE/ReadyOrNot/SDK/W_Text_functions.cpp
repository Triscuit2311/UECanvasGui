#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Text.W_Text_C
// (None)

class UClass* UW_Text_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Text_C");

	return Clss;
}


// W_Text_C W_Text.Default__W_Text_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Text_C* UW_Text_C::GetDefaultObj()
{
	static class UW_Text_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Text_C*>(UW_Text_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Text.W_Text_C.SetTextJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextJustification(enum class ETextJustify Justification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetTextJustification");

	Params::UW_Text_C_SetTextJustification_Params Parms{};

	Parms.Justification = Justification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFontOutlineSettings        FontOutlineSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_Text_C::SetOutline(const struct FFontOutlineSettings& FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetOutline");

	Params::UW_Text_C_SetOutline_Params Parms{};

	Parms.FontOutlineSettings = FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_Style_Text              K2Node_MakeStruct_ST_Style_Text                                  (HasGetValueTypeHash)

void UW_Text_C::SetFont(const struct FSlateFontInfo& Font, const struct FST_Style_Text& K2Node_MakeStruct_ST_Style_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetFont");

	Params::UW_Text_C_SetFont_Params Parms{};

	Parms.Font = Font;
	Parms.K2Node_MakeStruct_ST_Style_Text = K2Node_MakeStruct_ST_Style_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_Text_C::SetFontSize(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetFontSize");

	Params::UW_Text_C_SetFontSize_Params Parms{};

	Parms.FontSize = FontSize;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetTextTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETextTransformPolicy    TextTransform                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextTransform(enum class ETextTransformPolicy TextTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetTextTransform");

	Params::UW_Text_C_SetTextTransform_Params Parms{};

	Parms.TextTransform = TextTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetTextShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ShadowOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShadowColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextShadow(const struct FVector2D& ShadowOffset, const struct FLinearColor& ShadowColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetTextShadow");

	Params::UW_Text_C_SetTextShadow_Params Parms{};

	Parms.ShadowOffset = ShadowOffset;
	Parms.ShadowColor = ShadowColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetTextLetterSpacing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LetterSpacing                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_Text_C::SetTextLetterSpacing(int32 LetterSpacing, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetTextLetterSpacing");

	Params::UW_Text_C_SetTextLetterSpacing_Params Parms{};

	Parms.LetterSpacing = LetterSpacing;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_Text_C::SetTextColor(const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetTextColor");

	Params::UW_Text_C_SetTextColor_Params Parms{};

	Parms.Color = Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentText                                                      (Parm, OutParm)

void UW_Text_C::GetText(class FText* CurrentText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "GetText");

	Params::UW_Text_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentText != nullptr)
		*CurrentText = Parms.CurrentText;

}


// Function W_Text.W_Text_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Text_C::UpdateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "UpdateText");

	Params::UW_Text_C_UpdateText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.TruncateText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Truncate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CharacterLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TruncationCharacters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        TruncatedText                                                    (Parm, OutParm)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue_1                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_Text_C::TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText* TruncatedText, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "TruncateText");

	Params::UW_Text_C_TruncateText_Params Parms{};

	Parms.Truncate = Truncate;
	Parms.CharacterLimit = CharacterLimit;
	Parms.TruncationCharacters = TruncationCharacters;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Left_ReturnValue_1 = CallFunc_Left_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (TruncatedText != nullptr)
		*TruncatedText = Parms.TruncatedText;

}


// Function W_Text.W_Text_C.UpdateFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Text_C::UpdateFont(const struct FSlateFontInfo& Font)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "UpdateFont");

	Params::UW_Text_C_UpdateFont_Params Parms{};

	Parms.Font = Font;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Style_Text              TextStyle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Text_C::SetStyle(const struct FST_Style_Text& TextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetStyle");

	Params::UW_Text_C_SetStyle_Params Parms{};

	Parms.TextStyle = TextStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TruncateText_TruncatedText                              (None)

void UW_Text_C::SetText(class FText Text, class FText CallFunc_TruncateText_TruncatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "SetText");

	Params::UW_Text_C_SetText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_TruncateText_TruncatedText = CallFunc_TruncateText_TruncatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Text_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "PreConstruct");

	Params::UW_Text_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Text.W_Text_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Text_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Text.W_Text_C.ExecuteUbergraph_W_Text
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_RemoveSpacesFromString_ReturnString                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_RemoveSpacesFromString_ReturnText                       (None)
// class FName                        CallFunc_RemoveSpacesFromString_ReturnName                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Style_Text              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Text_C::ExecuteUbergraph_W_Text(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_RemoveSpacesFromString_ReturnString, class FText CallFunc_RemoveSpacesFromString_ReturnText, class FName CallFunc_RemoveSpacesFromString_ReturnName, const struct FST_Style_Text& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Text_C", "ExecuteUbergraph_W_Text");

	Params::UW_Text_C_ExecuteUbergraph_W_Text_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RemoveSpacesFromString_ReturnString = CallFunc_RemoveSpacesFromString_ReturnString;
	Parms.CallFunc_RemoveSpacesFromString_ReturnText = CallFunc_RemoveSpacesFromString_ReturnText;
	Parms.CallFunc_RemoveSpacesFromString_ReturnName = CallFunc_RemoveSpacesFromString_ReturnName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


