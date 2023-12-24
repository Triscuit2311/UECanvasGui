#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReadyRoomWidget.W_ReadyRoomWidget_C
// (None)

class UClass* UW_ReadyRoomWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReadyRoomWidget_C");

	return Clss;
}


// W_ReadyRoomWidget_C W_ReadyRoomWidget.Default__W_ReadyRoomWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReadyRoomWidget_C* UW_ReadyRoomWidget_C::GetDefaultObj()
{
	static class UW_ReadyRoomWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReadyRoomWidget_C*>(UW_ReadyRoomWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnLocalPlayerReadyChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bReady                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReadyRoomWidget_C::OnLocalPlayerReadyChange(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnLocalPlayerReadyChange");

	Params::UW_ReadyRoomWidget_C_OnLocalPlayerReadyChange_Params Parms{};

	Parms.bReady = bReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "Tick");

	Params::UW_ReadyRoomWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnCountdownCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnCountdownCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnCountdownCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnCountdownStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Countdown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::OnCountdownStart(float Countdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnCountdownStart");

	Params::UW_ReadyRoomWidget_C_OnCountdownStart_Params Parms{};

	Parms.Countdown = Countdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnReadiedPlayersChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnReadiedPlayersChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnReadiedPlayersChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnMissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnMissionSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnMissionSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::OnInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnInputChange");

	Params::UW_ReadyRoomWidget_C_OnInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnExitSettingsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnExitSettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnExitSettingsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.ExecuteUbergraph_W_ReadyRoomWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bReady                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class AMissionPortal*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Countdown                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMissionPortal*              CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersReady_Ready                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersReady_Total                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlayersReady_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedMission_OutMissionURL                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_Select_Default                                            (HasGetValueTypeHash)
// class FText                        CallFunc_FormatPlayerActionText_ReturnValue                      (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue_1                 (HasGetValueTypeHash)
// class ALobbyGS*                    K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_FormatPlayerActionText_ReturnValue_1                    (None)

void UW_ReadyRoomWidget_C::ExecuteUbergraph_W_ReadyRoomWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable, const struct FKey& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_CustomEvent_bReady, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_SelectString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AMissionPortal* CallFunc_GetActorOfClass_ReturnValue, float K2Node_CustomEvent_Countdown, float CallFunc_Subtract_FloatFloat_ReturnValue, class AMissionPortal* CallFunc_GetActorOfClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetPlayersReady_Ready, int32 CallFunc_GetPlayersReady_Total, bool CallFunc_GetPlayersReady_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetSelectedMission_OutMissionURL, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, const struct FKey& K2Node_Select_Default, class FText CallFunc_FormatPlayerActionText_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue_1, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatPlayerActionText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "ExecuteUbergraph_W_ReadyRoomWidget");

	Params::UW_ReadyRoomWidget_C_ExecuteUbergraph_W_ReadyRoomWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_CustomEvent_bReady = K2Node_CustomEvent_bReady;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_CustomEvent_Countdown = K2Node_CustomEvent_Countdown;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayersReady_Ready = CallFunc_GetPlayersReady_Ready;
	Parms.CallFunc_GetPlayersReady_Total = CallFunc_GetPlayersReady_Total;
	Parms.CallFunc_GetPlayersReady_ReturnValue = CallFunc_GetPlayersReady_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetSelectedMission_OutMissionURL = CallFunc_GetSelectedMission_OutMissionURL;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FormatPlayerActionText_ReturnValue = CallFunc_FormatPlayerActionText_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue_1 = CallFunc_GetKeyFromInputActionName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_FormatPlayerActionText_ReturnValue_1 = CallFunc_FormatPlayerActionText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


