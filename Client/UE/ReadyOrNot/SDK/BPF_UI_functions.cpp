#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPF_UI.BPF_UI_C
// (None)

class UClass* UBPF_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPF_UI_C");

	return Clss;
}


// BPF_UI_C BPF_UI.Default__BPF_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPF_UI_C* UBPF_UI_C::GetDefaultObj()
{
	static class UBPF_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPF_UI_C*>(UBPF_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPF_UI.BPF_UI_C.IsCurrentPresetDirty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDirty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetPreset_ReturnValue                                   (None)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// TArray<struct FSavedLoadout>       K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_UI_C::IsCurrentPresetDirty(class UObject* __WorldContext, bool* IsDirty, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, TArray<struct FSavedLoadout>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "IsCurrentPresetDirty");

	Params::UBPF_UI_C_IsCurrentPresetDirty_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPreset_ReturnValue = CallFunc_GetPreset_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDirty != nullptr)
		*IsDirty = Parms.IsDirty;

}


// Function BPF_UI.BPF_UI_C.GetCustomizationGroupText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_CustomizationGroups   Group                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// enum class E_CustomizationGroups   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetCustomizationGroupText(enum class E_CustomizationGroups Group, class UObject* __WorldContext, class FText* Text, enum class E_CustomizationGroups Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetCustomizationGroupText");

	Params::UBPF_UI_C_GetCustomizationGroupText_Params Parms{};

	Parms.Group = Group;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPF_UI.BPF_UI_C.GetCustomizationGroupByCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Group                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_UI_C::GetCustomizationGroupByCategory(enum class ECustomizationType Category, class UObject* __WorldContext, enum class E_CustomizationGroups* Group, enum class ECustomizationType Temp_byte_Variable, enum class E_CustomizationGroups Temp_byte_Variable_1, enum class E_CustomizationGroups Temp_byte_Variable_2, enum class E_CustomizationGroups Temp_byte_Variable_3, enum class E_CustomizationGroups Temp_byte_Variable_4, enum class E_CustomizationGroups Temp_byte_Variable_5, enum class E_CustomizationGroups Temp_byte_Variable_6, enum class E_CustomizationGroups Temp_byte_Variable_7, enum class E_CustomizationGroups Temp_byte_Variable_8, enum class E_CustomizationGroups Temp_byte_Variable_9, enum class E_CustomizationGroups Temp_byte_Variable_10, enum class E_CustomizationGroups Temp_byte_Variable_11, enum class E_CustomizationGroups Temp_byte_Variable_12, enum class E_CustomizationGroups Temp_byte_Variable_13, enum class E_CustomizationGroups Temp_byte_Variable_14, enum class E_CustomizationGroups Temp_byte_Variable_15, enum class E_CustomizationGroups Temp_byte_Variable_16, enum class E_CustomizationGroups K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetCustomizationGroupByCategory");

	Params::UBPF_UI_C_GetCustomizationGroupByCategory_Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Group != nullptr)
		*Group = Parms.Group;

}


// Function BPF_UI.BPF_UI_C.TextToName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_UI_C::TextToName(class FText InText, class UObject* __WorldContext, class FName* OutName, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName Temp_name_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "TextToName");

	Params::UBPF_UI_C_TextToName_Params Parms{};

	Parms.InText = InText;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = Parms.OutName;

}


// Function BPF_UI.BPF_UI_C.TextIsNotEmpty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NotEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_UI_C::TextIsNotEmpty(class FText InText, class UObject* __WorldContext, bool* NotEmpty, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "TextIsNotEmpty");

	Params::UBPF_UI_C_TextIsNotEmpty_Params Parms{};

	Parms.InText = InText;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotEmpty != nullptr)
		*NotEmpty = Parms.NotEmpty;

}


// Function BPF_UI.BPF_UI_C.GetColorByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ColorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)

void UBPF_UI_C::GetColorByName(class FName ColorName, float Opacity, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor, class UPDA_UI_Styleguide_C* StyleGuide, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetColorByName");

	Params::UBPF_UI_C_GetColorByName_Params Parms{};

	Parms.ColorName = ColorName;
	Parms.Opacity = Opacity;
	Parms.__WorldContext = __WorldContext;
	Parms.StyleGuide = StyleGuide;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function BPF_UI.BPF_UI_C.GetSyleGuide
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_UI_C::GetSyleGuide(class UObject* __WorldContext, class UPDA_UI_Styleguide_C** StyleGuide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetSyleGuide");

	Params::UBPF_UI_C_GetSyleGuide_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StyleGuide != nullptr)
		*StyleGuide = Parms.StyleGuide;

}


// Function BPF_UI.BPF_UI_C.GetTeamColorByEquippingSwatEnum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEquippingSwat          EquippingSwat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_White                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Dark                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Red                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Yellow                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Blue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Green                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRedTeamColor_RedTeam                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBlueTeamColor_BlueTeam                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UBPF_UI_C::GetTeamColorByEquippingSwatEnum(enum class EEquippingSwat EquippingSwat, float Opacity, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor, class UPDA_UI_Styleguide_C* StyleGuide, enum class EEquippingSwat Temp_byte_Variable, const struct FLinearColor& CallFunc_GetAllColors_White, const struct FLinearColor& CallFunc_GetAllColors_Dark, const struct FLinearColor& CallFunc_GetAllColors_Red, const struct FLinearColor& CallFunc_GetAllColors_Yellow, const struct FLinearColor& CallFunc_GetAllColors_Blue, const struct FLinearColor& CallFunc_GetAllColors_Green, const struct FLinearColor& CallFunc_GetRedTeamColor_RedTeam, const struct FLinearColor& CallFunc_GetBlueTeamColor_BlueTeam, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetTeamColorByEquippingSwatEnum");

	Params::UBPF_UI_C_GetTeamColorByEquippingSwatEnum_Params Parms{};

	Parms.EquippingSwat = EquippingSwat;
	Parms.Opacity = Opacity;
	Parms.__WorldContext = __WorldContext;
	Parms.StyleGuide = StyleGuide;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAllColors_White = CallFunc_GetAllColors_White;
	Parms.CallFunc_GetAllColors_Dark = CallFunc_GetAllColors_Dark;
	Parms.CallFunc_GetAllColors_Red = CallFunc_GetAllColors_Red;
	Parms.CallFunc_GetAllColors_Yellow = CallFunc_GetAllColors_Yellow;
	Parms.CallFunc_GetAllColors_Blue = CallFunc_GetAllColors_Blue;
	Parms.CallFunc_GetAllColors_Green = CallFunc_GetAllColors_Green;
	Parms.CallFunc_GetRedTeamColor_RedTeam = CallFunc_GetRedTeamColor_RedTeam;
	Parms.CallFunc_GetBlueTeamColor_BlueTeam = CallFunc_GetBlueTeamColor_BlueTeam;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function BPF_UI.BPF_UI_C.GetMunitionTypeText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ELoadoutMunitionSlotTypeMunitionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MunitionText                                                     (Parm, OutParm)
// enum class ELoadoutMunitionSlotTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetMunitionTypeText(enum class ELoadoutMunitionSlotType MunitionType, class UObject* __WorldContext, class FText* MunitionText, enum class ELoadoutMunitionSlotType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetMunitionTypeText");

	Params::UBPF_UI_C_GetMunitionTypeText_Params Parms{};

	Parms.MunitionType = MunitionType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (MunitionText != nullptr)
		*MunitionText = Parms.MunitionText;

}


// Function BPF_UI.BPF_UI_C.GetLoadoutWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             AsW_Loadout_V2                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             K2Node_DynamicCast_AsW_Loadout_V2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_UI_C::GetLoadoutWidget(class UObject* __WorldContext, class UW_Loadout_V2_C** AsW_Loadout_V2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UW_Loadout_V2_C* K2Node_DynamicCast_AsW_Loadout_V2, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetLoadoutWidget");

	Params::UBPF_UI_C_GetLoadoutWidget_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_V2 = K2Node_DynamicCast_AsW_Loadout_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsW_Loadout_V2 != nullptr)
		*AsW_Loadout_V2 = Parms.AsW_Loadout_V2;

}


// Function BPF_UI.BPF_UI_C.GetArmorCoverageText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmourCoverage         Coverage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CoverageText                                                     (Parm, OutParm)
// enum class EArmourCoverage         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetArmorCoverageText(enum class EArmourCoverage Coverage, class UObject* __WorldContext, class FText* CoverageText, enum class EArmourCoverage Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetArmorCoverageText");

	Params::UBPF_UI_C_GetArmorCoverageText_Params Parms{};

	Parms.Coverage = Coverage;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CoverageText != nullptr)
		*CoverageText = Parms.CoverageText;

}


// Function BPF_UI.BPF_UI_C.GetPlayerTeamColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETeamType               Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBlueTeamColor_BlueTeam                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_White                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Dark                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Red                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Yellow                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Blue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Green                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGoldTeamColor_RedTeam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRedTeamColor_RedTeam                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UBPF_UI_C::GetPlayerTeamColor(enum class ETeamType Team, float Opacity, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor, class UPDA_UI_Styleguide_C* StyleGuide, enum class ETeamType Temp_byte_Variable, const struct FLinearColor& CallFunc_GetBlueTeamColor_BlueTeam, const struct FLinearColor& CallFunc_GetAllColors_White, const struct FLinearColor& CallFunc_GetAllColors_Dark, const struct FLinearColor& CallFunc_GetAllColors_Red, const struct FLinearColor& CallFunc_GetAllColors_Yellow, const struct FLinearColor& CallFunc_GetAllColors_Blue, const struct FLinearColor& CallFunc_GetAllColors_Green, const struct FLinearColor& CallFunc_GetGoldTeamColor_RedTeam, const struct FLinearColor& CallFunc_GetRedTeamColor_RedTeam, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetPlayerTeamColor");

	Params::UBPF_UI_C_GetPlayerTeamColor_Params Parms{};

	Parms.Team = Team;
	Parms.Opacity = Opacity;
	Parms.__WorldContext = __WorldContext;
	Parms.StyleGuide = StyleGuide;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetBlueTeamColor_BlueTeam = CallFunc_GetBlueTeamColor_BlueTeam;
	Parms.CallFunc_GetAllColors_White = CallFunc_GetAllColors_White;
	Parms.CallFunc_GetAllColors_Dark = CallFunc_GetAllColors_Dark;
	Parms.CallFunc_GetAllColors_Red = CallFunc_GetAllColors_Red;
	Parms.CallFunc_GetAllColors_Yellow = CallFunc_GetAllColors_Yellow;
	Parms.CallFunc_GetAllColors_Blue = CallFunc_GetAllColors_Blue;
	Parms.CallFunc_GetAllColors_Green = CallFunc_GetAllColors_Green;
	Parms.CallFunc_GetGoldTeamColor_RedTeam = CallFunc_GetGoldTeamColor_RedTeam;
	Parms.CallFunc_GetRedTeamColor_RedTeam = CallFunc_GetRedTeamColor_RedTeam;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function BPF_UI.BPF_UI_C.GetSlateColorScheme
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 White                                                            (Parm, OutParm)
// struct FSlateColor                 Dark                                                             (Parm, OutParm)
// struct FSlateColor                 Red                                                              (Parm, OutParm)
// struct FSlateColor                 Yellow                                                           (Parm, OutParm)
// struct FSlateColor                 Blue                                                             (Parm, OutParm)
// struct FSlateColor                 Green                                                            (Parm, OutParm)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_White                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Dark                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Red                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Yellow                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Blue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Green                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)

void UBPF_UI_C::GetSlateColorScheme(float Opacity, class UObject* __WorldContext, struct FSlateColor* White, struct FSlateColor* Dark, struct FSlateColor* Red, struct FSlateColor* Yellow, struct FSlateColor* Blue, struct FSlateColor* Green, class UPDA_UI_Styleguide_C* StyleGuide, const struct FLinearColor& CallFunc_GetAllColors_White, const struct FLinearColor& CallFunc_GetAllColors_Dark, const struct FLinearColor& CallFunc_GetAllColors_Red, const struct FLinearColor& CallFunc_GetAllColors_Yellow, const struct FLinearColor& CallFunc_GetAllColors_Blue, const struct FLinearColor& CallFunc_GetAllColors_Green, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetSlateColorScheme");

	Params::UBPF_UI_C_GetSlateColorScheme_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.__WorldContext = __WorldContext;
	Parms.StyleGuide = StyleGuide;
	Parms.CallFunc_GetAllColors_White = CallFunc_GetAllColors_White;
	Parms.CallFunc_GetAllColors_Dark = CallFunc_GetAllColors_Dark;
	Parms.CallFunc_GetAllColors_Red = CallFunc_GetAllColors_Red;
	Parms.CallFunc_GetAllColors_Yellow = CallFunc_GetAllColors_Yellow;
	Parms.CallFunc_GetAllColors_Blue = CallFunc_GetAllColors_Blue;
	Parms.CallFunc_GetAllColors_Green = CallFunc_GetAllColors_Green;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;

	UObject::ProcessEvent(Func, &Parms);

	if (White != nullptr)
		*White = std::move(Parms.White);

	if (Dark != nullptr)
		*Dark = std::move(Parms.Dark);

	if (Red != nullptr)
		*Red = std::move(Parms.Red);

	if (Yellow != nullptr)
		*Yellow = std::move(Parms.Yellow);

	if (Blue != nullptr)
		*Blue = std::move(Parms.Blue);

	if (Green != nullptr)
		*Green = std::move(Parms.Green);

}


// Function BPF_UI.BPF_UI_C.GetLinearColorScheme
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                White                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Dark                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Red                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Yellow                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Blue                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Green                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPDA_UI_Styleguide_C*        StyleGuide                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_White                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Dark                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Red                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Yellow                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Blue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAllColors_Green                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_UI_C::GetLinearColorScheme(float Opacity, class UObject* __WorldContext, struct FLinearColor* White, struct FLinearColor* Dark, struct FLinearColor* Red, struct FLinearColor* Yellow, struct FLinearColor* Blue, struct FLinearColor* Green, class UPDA_UI_Styleguide_C* StyleGuide, const struct FLinearColor& CallFunc_GetAllColors_White, const struct FLinearColor& CallFunc_GetAllColors_Dark, const struct FLinearColor& CallFunc_GetAllColors_Red, const struct FLinearColor& CallFunc_GetAllColors_Yellow, const struct FLinearColor& CallFunc_GetAllColors_Blue, const struct FLinearColor& CallFunc_GetAllColors_Green)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetLinearColorScheme");

	Params::UBPF_UI_C_GetLinearColorScheme_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.__WorldContext = __WorldContext;
	Parms.StyleGuide = StyleGuide;
	Parms.CallFunc_GetAllColors_White = CallFunc_GetAllColors_White;
	Parms.CallFunc_GetAllColors_Dark = CallFunc_GetAllColors_Dark;
	Parms.CallFunc_GetAllColors_Red = CallFunc_GetAllColors_Red;
	Parms.CallFunc_GetAllColors_Yellow = CallFunc_GetAllColors_Yellow;
	Parms.CallFunc_GetAllColors_Blue = CallFunc_GetAllColors_Blue;
	Parms.CallFunc_GetAllColors_Green = CallFunc_GetAllColors_Green;

	UObject::ProcessEvent(Func, &Parms);

	if (White != nullptr)
		*White = std::move(Parms.White);

	if (Dark != nullptr)
		*Dark = std::move(Parms.Dark);

	if (Red != nullptr)
		*Red = std::move(Parms.Red);

	if (Yellow != nullptr)
		*Yellow = std::move(Parms.Yellow);

	if (Blue != nullptr)
		*Blue = std::move(Parms.Blue);

	if (Green != nullptr)
		*Green = std::move(Parms.Green);

}


// Function BPF_UI.BPF_UI_C.GetAmmoCategoryText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UClass*                      K2Node_ClassDynamicCast_AsPepperball_Gun                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Magazine_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class UClass*                      K2Node_ClassDynamicCast_AsShotgun                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class UClass*                      K2Node_ClassDynamicCast_AsTaser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UBPF_UI_C::GetAmmoCategoryText(class UClass* ItemData, class UObject* __WorldContext, class FText* Text, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UClass* K2Node_ClassDynamicCast_AsPepperball_Gun, bool K2Node_ClassDynamicCast_bSuccess, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class UClass* K2Node_ClassDynamicCast_AsShotgun, bool K2Node_ClassDynamicCast_bSuccess_2, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class UClass* K2Node_ClassDynamicCast_AsTaser, bool K2Node_ClassDynamicCast_bSuccess_3, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetAmmoCategoryText");

	Params::UBPF_UI_C_GetAmmoCategoryText_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ClassDynamicCast_AsPepperball_Gun = K2Node_ClassDynamicCast_AsPepperball_Gun;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_ClassDynamicCast_AsBase_Magazine_Weapon = K2Node_ClassDynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_ClassDynamicCast_AsShotgun = K2Node_ClassDynamicCast_AsShotgun;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_ClassDynamicCast_AsTaser = K2Node_ClassDynamicCast_AsTaser;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPF_UI.BPF_UI_C.UpdateCurrent_LoadoutUI_Slot
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_UI_C::UpdateCurrent_LoadoutUI_Slot(class UObject* WorldContextObject, class UW_LoadoutSlot_C* CurrentSlot, class UObject* __WorldContext, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "UpdateCurrent_LoadoutUI_Slot");

	Params::UBPF_UI_C_UpdateCurrent_LoadoutUI_Slot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CurrentSlot = CurrentSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPF_UI.BPF_UI_C.GetItemType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      BaseItemClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Item_Type                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemDataTableInfo_DataFound                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetItemDataTableInfo_ItemLookupData                     (None)

void UBPF_UI_C::GetItemType(class UClass* BaseItemClass, class UObject* __WorldContext, enum class EItemType* Item_Type, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, bool CallFunc_GetItemDataTableInfo_DataFound, const struct FItemLookupTable& CallFunc_GetItemDataTableInfo_ItemLookupData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetItemType");

	Params::UBPF_UI_C_GetItemType_Params Parms{};

	Parms.BaseItemClass = BaseItemClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemDataTableInfo_DataFound = CallFunc_GetItemDataTableInfo_DataFound;
	Parms.CallFunc_GetItemDataTableInfo_ItemLookupData = CallFunc_GetItemDataTableInfo_ItemLookupData;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Type != nullptr)
		*Item_Type = Parms.Item_Type;

}


// Function BPF_UI.BPF_UI_C.GetItemDataTableInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      BaseItemClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DataFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            ItemLookupData                                                   (Parm, OutParm)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_UI_C::GetItemDataTableInfo(class UClass* BaseItemClass, class UObject* __WorldContext, bool* DataFound, struct FItemLookupTable* ItemLookupData, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetItemDataTableInfo");

	Params::UBPF_UI_C_GetItemDataTableInfo_Params Parms{};

	Parms.BaseItemClass = BaseItemClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DataFound != nullptr)
		*DataFound = Parms.DataFound;

	if (ItemLookupData != nullptr)
		*ItemLookupData = std::move(Parms.ItemLookupData);

}


// Function BPF_UI.BPF_UI_C.GetAttachmentSlotText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        SlotText                                                         (Parm, OutParm)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetAttachmentSlotText(enum class EWeaponAttachmentType AttachmentType, class UObject* __WorldContext, class FText* SlotText, enum class EWeaponAttachmentType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetAttachmentSlotText");

	Params::UBPF_UI_C_GetAttachmentSlotText_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotText != nullptr)
		*SlotText = Parms.SlotText;

}


// Function BPF_UI.BPF_UI_C.GetItemClassText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemClass              ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Category_Text                                                    (Parm, OutParm)
// enum class EItemClass              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetItemClassText(enum class EItemClass ItemCategory, class UObject* __WorldContext, class FText* Category_Text, enum class EItemClass Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetItemClassText");

	Params::UBPF_UI_C_GetItemClassText_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Category_Text != nullptr)
		*Category_Text = Parms.Category_Text;

}


// Function BPF_UI.BPF_UI_C.GetCustomizationCategoryText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Category_Text                                                    (Parm, OutParm)
// enum class ECustomizationType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPF_UI_C::GetCustomizationCategoryText(enum class ECustomizationType ItemCategory, class UObject* __WorldContext, class FText* Category_Text, enum class ECustomizationType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetCustomizationCategoryText");

	Params::UBPF_UI_C_GetCustomizationCategoryText_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Category_Text != nullptr)
		*Category_Text = Parms.Category_Text;

}


// Function BPF_UI.BPF_UI_C.GetLoadoutCategoryText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemCategory           ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Category_Text                                                    (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPF_UI_C::GetLoadoutCategoryText(enum class EItemCategory ItemCategory, class UObject* __WorldContext, class FText* Category_Text, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "GetLoadoutCategoryText");

	Params::UBPF_UI_C_GetLoadoutCategoryText_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Category_Text != nullptr)
		*Category_Text = Parms.Category_Text;

}


// Function BPF_UI.BPF_UI_C.RemoveSpacesFromString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        ReturnText                                                       (Parm, OutParm)
// class FName                        ReturnName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBPF_UI_C::RemoveSpacesFromString(const class FString& String, class UObject* __WorldContext, class FString* ReturnString, class FText* ReturnText, class FName* ReturnName, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_UI_C", "RemoveSpacesFromString");

	Params::UBPF_UI_C_RemoveSpacesFromString_Params Parms{};

	Parms.String = String;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnString != nullptr)
		*ReturnString = std::move(Parms.ReturnString);

	if (ReturnText != nullptr)
		*ReturnText = Parms.ReturnText;

	if (ReturnName != nullptr)
		*ReturnName = Parms.ReturnName;

}

}


