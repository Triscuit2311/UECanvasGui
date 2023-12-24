#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PVP_RoundEnd.W_PVP_RoundEnd_C
// (None)

class UClass* UW_PVP_RoundEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PVP_RoundEnd_C");

	return Clss;
}


// W_PVP_RoundEnd_C W_PVP_RoundEnd.Default__W_PVP_RoundEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PVP_RoundEnd_C* UW_PVP_RoundEnd_C::GetDefaultObj()
{
	static class UW_PVP_RoundEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PVP_RoundEnd_C*>(UW_PVP_RoundEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTaglineText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Return_Value                                                     (Parm, OutParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PVP_RoundEnd_C::GetWinningTaglineText(class FText* Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetWinningTaglineText");

	Params::UW_PVP_RoundEnd_C_GetWinningTaglineText_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetMLOScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PVP_RoundEnd_C::GetMLOScore(int32* Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetMLOScore");

	Params::UW_PVP_RoundEnd_C_GetMLOScore_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetSWATScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PVP_RoundEnd_C::GetSWATScore(int32* Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetSWATScore");

	Params::UW_PVP_RoundEnd_C_GetSWATScore_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetRoundWinningTeamText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Return_Value                                                     (Parm, OutParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamType               CallFunc_GetTeamType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PVP_RoundEnd_C::GetRoundWinningTeamText(class FText* Return_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, enum class ETeamType CallFunc_GetTeamType_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetRoundWinningTeamText");

	Params::UW_PVP_RoundEnd_C_GetRoundWinningTeamText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTeamType_ReturnValue = CallFunc_GetTeamType_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamRibbonColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PVP_RoundEnd_C::GetLosingTeamRibbonColor(struct FLinearColor* Return_Value, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetLosingTeamRibbonColor");

	Params::UW_PVP_RoundEnd_C_GetLosingTeamRibbonColor_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Return_Value                                                     (Parm, OutParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void UW_PVP_RoundEnd_C::GetLosingTeamTextColor(struct FSlateColor* Return_Value, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetLosingTeamTextColor");

	Params::UW_PVP_RoundEnd_C_GetLosingTeamTextColor_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamRibbonColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamType               CallFunc_GetTeamType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               CallFunc_GetTeamType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PVP_RoundEnd_C::GetWinningTeamRibbonColor(struct FLinearColor* Return_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, enum class ETeamType CallFunc_GetTeamType_ReturnValue, enum class ETeamType CallFunc_GetTeamType_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetWinningTeamRibbonColor");

	Params::UW_PVP_RoundEnd_C_GetWinningTeamRibbonColor_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTeamType_ReturnValue = CallFunc_GetTeamType_ReturnValue;
	Parms.CallFunc_GetTeamType_ReturnValue_1 = CallFunc_GetTeamType_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Return_Value                                                     (Parm, OutParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamType               CallFunc_GetTeamType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               CallFunc_GetTeamType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PVP_RoundEnd_C::GetWinningTeamTextColor(struct FSlateColor* Return_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, enum class ETeamType CallFunc_GetTeamType_ReturnValue, enum class ETeamType CallFunc_GetTeamType_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "GetWinningTeamTextColor");

	Params::UW_PVP_RoundEnd_C_GetWinningTeamTextColor_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTeamType_ReturnValue = CallFunc_GetTeamType_ReturnValue;
	Parms.CallFunc_GetTeamType_ReturnValue_1 = CallFunc_GetTeamType_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::UpdateRoundColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "UpdateRoundColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateSWATScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::UpdateSWATScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "UpdateSWATScore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateMLOScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::UpdateMLOScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "UpdateMLOScore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundTagline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::UpdateRoundTagline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "UpdateRoundTagline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.OnWinsUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PVP_RoundEnd_C::OnWinsUpdated_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "OnWinsUpdated_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.ExecuteUbergraph_W_PVP_RoundEnd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetWinningTeamTextColor_Return_Value                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetWinningTeamRibbonColor_Return_Value                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRoundWinningTeamText_Return_Value                    (None)
// int32                              CallFunc_GetSWATScore_Return_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMLOScore_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_GetWinningTaglineText_Return_Value                      (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UW_PVP_RoundEnd_C::ExecuteUbergraph_W_PVP_RoundEnd(int32 EntryPoint, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& CallFunc_GetWinningTeamTextColor_Return_Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetWinningTeamRibbonColor_Return_Value, class FText CallFunc_GetRoundWinningTeamText_Return_Value, int32 CallFunc_GetSWATScore_Return_Value, int32 CallFunc_GetMLOScore_Return_Value, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_GetWinningTaglineText_Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PVP_RoundEnd_C", "ExecuteUbergraph_W_PVP_RoundEnd");

	Params::UW_PVP_RoundEnd_C_ExecuteUbergraph_W_PVP_RoundEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWinningTeamTextColor_Return_Value = CallFunc_GetWinningTeamTextColor_Return_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWinningTeamRibbonColor_Return_Value = CallFunc_GetWinningTeamRibbonColor_Return_Value;
	Parms.CallFunc_GetRoundWinningTeamText_Return_Value = CallFunc_GetRoundWinningTeamText_Return_Value;
	Parms.CallFunc_GetSWATScore_Return_Value = CallFunc_GetSWATScore_Return_Value;
	Parms.CallFunc_GetMLOScore_Return_Value = CallFunc_GetMLOScore_Return_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetWinningTaglineText_Return_Value = CallFunc_GetWinningTaglineText_Return_Value;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State_1 = K2Node_DynamicCast_AsReady_or_Not_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


