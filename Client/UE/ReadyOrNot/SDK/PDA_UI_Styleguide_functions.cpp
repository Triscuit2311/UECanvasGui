#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_UI_Styleguide.PDA_UI_Styleguide_C
// (None)

class UClass* UPDA_UI_Styleguide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_UI_Styleguide_C");

	return Clss;
}


// PDA_UI_Styleguide_C PDA_UI_Styleguide.Default__PDA_UI_Styleguide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_UI_Styleguide_C* UPDA_UI_Styleguide_C::GetDefaultObj()
{
	static class UPDA_UI_Styleguide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_UI_Styleguide_C*>(UPDA_UI_Styleguide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetColorByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ColorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// struct FLinearColor                SelectedColor                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UPDA_UI_Styleguide_C::GetColorByName(class FName ColorName, float Opacity, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor, const struct FLinearColor& SelectedColor, bool K2Node_SwitchName_CmpSuccess, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetColorByName");

	Params::UPDA_UI_Styleguide_C_GetColorByName_Params Parms{};

	Parms.ColorName = ColorName;
	Parms.Opacity = Opacity;
	Parms.SelectedColor = SelectedColor;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetTeamColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Gold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Red                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Blue                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGoldTeamColor_RedTeam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBlueTeamColor_BlueTeam                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRedTeamColor_RedTeam                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_UI_Styleguide_C::GetTeamColors(float Opacity, struct FLinearColor* Gold, struct FLinearColor* Red, struct FLinearColor* Blue, const struct FLinearColor& CallFunc_GetGoldTeamColor_RedTeam, const struct FLinearColor& CallFunc_GetBlueTeamColor_BlueTeam, const struct FLinearColor& CallFunc_GetRedTeamColor_RedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetTeamColors");

	Params::UPDA_UI_Styleguide_C_GetTeamColors_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.CallFunc_GetGoldTeamColor_RedTeam = CallFunc_GetGoldTeamColor_RedTeam;
	Parms.CallFunc_GetBlueTeamColor_BlueTeam = CallFunc_GetBlueTeamColor_BlueTeam;
	Parms.CallFunc_GetRedTeamColor_RedTeam = CallFunc_GetRedTeamColor_RedTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (Gold != nullptr)
		*Gold = std::move(Parms.Gold);

	if (Red != nullptr)
		*Red = std::move(Parms.Red);

	if (Blue != nullptr)
		*Blue = std::move(Parms.Blue);

}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetBlueTeamColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BlueTeam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_UI_Styleguide_C::GetBlueTeamColor(float Opacity, struct FLinearColor* BlueTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetBlueTeamColor");

	Params::UPDA_UI_Styleguide_C_GetBlueTeamColor_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	if (BlueTeam != nullptr)
		*BlueTeam = std::move(Parms.BlueTeam);

}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetRedTeamColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RedTeam                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_UI_Styleguide_C::GetRedTeamColor(float Opacity, struct FLinearColor* RedTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetRedTeamColor");

	Params::UPDA_UI_Styleguide_C_GetRedTeamColor_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	if (RedTeam != nullptr)
		*RedTeam = std::move(Parms.RedTeam);

}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetGoldTeamColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RedTeam                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_UI_Styleguide_C::GetGoldTeamColor(float Opacity, struct FLinearColor* RedTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetGoldTeamColor");

	Params::UPDA_UI_Styleguide_C_GetGoldTeamColor_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	if (RedTeam != nullptr)
		*RedTeam = std::move(Parms.RedTeam);

}


// Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetAllColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                White                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Dark                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Red                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Yellow                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Blue                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Green                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_UI_Styleguide_C::GetAllColors(float Opacity, struct FLinearColor* White, struct FLinearColor* Dark, struct FLinearColor* Red, struct FLinearColor* Yellow, struct FLinearColor* Blue, struct FLinearColor* Green, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_UI_Styleguide_C", "GetAllColors");

	Params::UPDA_UI_Styleguide_C_GetAllColors_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5;

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

}


