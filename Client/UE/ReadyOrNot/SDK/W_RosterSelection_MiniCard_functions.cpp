#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C
// (None)

class UClass* UW_RosterSelection_MiniCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RosterSelection_MiniCard_C");

	return Clss;
}


// W_RosterSelection_MiniCard_C W_RosterSelection_MiniCard.Default__W_RosterSelection_MiniCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RosterSelection_MiniCard_C* UW_RosterSelection_MiniCard_C::GetDefaultObj()
{
	static class UW_RosterSelection_MiniCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RosterSelection_MiniCard_C*>(UW_RosterSelection_MiniCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        UnlockText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::SetLocked(bool Locked, class FText UnlockText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetLocked");

	Params::UW_RosterSelection_MiniCard_C_SetLocked_Params Parms{};

	Parms.Locked = Locked;
	Parms.UnlockText = UnlockText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Empty                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::SetEmpty(bool Empty, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetEmpty");

	Params::UW_RosterSelection_MiniCard_C_SetEmpty_Params Parms{};

	Parms.Empty = Empty;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RosterSelection_MiniCard_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetSelected");

	Params::UW_RosterSelection_MiniCard_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RosterSelection_MiniCard_C::SetHoverState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetHoverState");

	Params::UW_RosterSelection_MiniCard_C_SetHoverState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERosterSquadPosition    Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterSquadPosition    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterSquadPosition    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterSquadPosition    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterSquadPosition    Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// struct FLinearColor                CallFunc_SquadPositionToColor_OutColor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::SetPosition(enum class ERosterSquadPosition Position, enum class ERosterSquadPosition Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class ERosterSquadPosition Temp_byte_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class ERosterSquadPosition Temp_byte_Variable_8, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, enum class EHorizontalAlignment K2Node_Select_Default_2, class FText K2Node_Select_Default_3, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetPosition");

	Params::UW_RosterSelection_MiniCard_C_SetPosition_Params Parms{};

	Parms.Position = Position;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SquadPositionToColor_OutColor = CallFunc_SquadPositionToColor_OutColor;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetupStateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URosterCharacter*            Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_StressPercentageAsStatus_StatusText                     (None)
// struct FSlateColor                 CallFunc_StressPercentageAsStatus_StatusColor                    (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterCharacterState   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterCharacterState   Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::SetupStateText(class URosterCharacter* Character, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ERosterCharacterState Temp_byte_Variable_3, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, enum class ERosterCharacterState Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetupStateText");

	Params::UW_RosterSelection_MiniCard_C_SetupStateText_Params Parms{};

	Parms.Character = Character;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_StressPercentageAsStatus_StatusText = CallFunc_StressPercentageAsStatus_StatusText;
	Parms.CallFunc_StressPercentageAsStatus_StatusColor = CallFunc_StressPercentageAsStatus_StatusColor;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.OnLoaded_1B6BA88D4B585FF2FE0A5EA31A024DD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::OnLoaded_1B6BA88D4B585FF2FE0A5EA31A024DD8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "OnLoaded_1B6BA88D4B585FF2FE0A5EA31A024DD8");

	Params::UW_RosterSelection_MiniCard_C_OnLoaded_1B6BA88D4B585FF2FE0A5EA31A024DD8_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URosterCharacter*            Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::SetCharacter(class URosterCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetCharacter");

	Params::UW_RosterSelection_MiniCard_C_SetCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.SetCustomStateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_RosterSelection_MiniCard_C::SetCustomStateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "SetCustomStateText");

	Params::UW_RosterSelection_MiniCard_C_SetCustomStateText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.ShowStressChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RosterSelection_MiniCard_C::ShowStressChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "ShowStressChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RosterSelection_MiniCard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "PreConstruct");

	Params::UW_RosterSelection_MiniCard_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_RosterSelection_MiniCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.ExecuteUbergraph_W_RosterSelection_MiniCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERosterCharacterState   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERosterCharacterState   Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_RosterSelection_MiniCard_C::ExecuteUbergraph_W_RosterSelection_MiniCard(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ERosterCharacterState Temp_byte_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, enum class ESlateVisibility Temp_byte_Variable_2, class URosterCharacter* K2Node_CustomEvent_Character, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class FText K2Node_CustomEvent_Text, const struct FSlateColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ERosterCharacterState Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "ExecuteUbergraph_W_RosterSelection_MiniCard");

	Params::UW_RosterSelection_MiniCard_C_ExecuteUbergraph_W_RosterSelection_MiniCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.OnEmptyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::OnEmptyClicked__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "OnEmptyClicked__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_OnEmptyClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::OnClicked__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "OnClicked__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::OnUnhovered__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "OnUnhovered__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_MiniCard_C::OnHovered__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_MiniCard_C", "OnHovered__DelegateSignature");

	Params::UW_RosterSelection_MiniCard_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}

}


