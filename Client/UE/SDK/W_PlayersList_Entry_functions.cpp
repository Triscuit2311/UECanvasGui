#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlayersList_Entry.W_PlayersList_Entry_C
// (None)

class UClass* UW_PlayersList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlayersList_Entry_C");

	return Clss;
}


// W_PlayersList_Entry_C W_PlayersList_Entry.Default__W_PlayersList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlayersList_Entry_C* UW_PlayersList_Entry_C::GetDefaultObj()
{
	static class UW_PlayersList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlayersList_Entry_C*>(UW_PlayersList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.GetColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UW_PlayersList_Entry_C::GetColorAndOpacity_0(const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "GetColorAndOpacity_0");

	Params::UW_PlayersList_Entry_C_GetColorAndOpacity_0_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlayersList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.RefreshPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::RefreshPlayer(const struct FLobbyPlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "RefreshPlayer");

	Params::UW_PlayersList_Entry_C_RefreshPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.ExecuteUbergraph_W_PlayersList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLobbyPlayer                K2Node_CustomEvent_Player                                        (None)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AReadyOrNotGameMode*> CallFunc_GetAllGameModes_ReturnValue                             (ReferenceParm)
// struct FBPUniqueNetId              CallFunc_CreateUniqueNetIdFromString_ReturnValue                 (None)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText_1                   (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId_1                            (None)
// class FString                      CallFunc_UniqueNetIdToString_String_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              CallFunc_CreateUniqueNetIdFromString_ReturnValue_1               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId_2                            (None)
// enum class EBlueprintResultSwitch  CallFunc_ShowProfileUI_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlayersList_Entry_C::ExecuteUbergraph_W_PlayersList_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsConsole_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FLobbyPlayer& K2Node_CustomEvent_Player, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class AReadyOrNotGameMode*>& CallFunc_GetAllGameModes_ReturnValue, const struct FBPUniqueNetId& CallFunc_CreateUniqueNetIdFromString_ReturnValue, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText_1, bool CallFunc_FindTextInLocalizationTable_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId_1, const class FString& CallFunc_UniqueNetIdToString_String_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FBPUniqueNetId& CallFunc_CreateUniqueNetIdFromString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId_2, enum class EBlueprintResultSwitch CallFunc_ShowProfileUI_Result, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "ExecuteUbergraph_W_PlayersList_Entry");

	Params::UW_PlayersList_Entry_C_ExecuteUbergraph_W_PlayersList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllGameModes_ReturnValue = CallFunc_GetAllGameModes_ReturnValue;
	Parms.CallFunc_CreateUniqueNetIdFromString_ReturnValue = CallFunc_CreateUniqueNetIdFromString_ReturnValue;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText_1 = CallFunc_FindTextInLocalizationTable_OutText_1;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue_1 = CallFunc_FindTextInLocalizationTable_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId_1 = CallFunc_GetUniqueNetID_UniqueNetId_1;
	Parms.CallFunc_UniqueNetIdToString_String_1 = CallFunc_UniqueNetIdToString_String_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_CreateUniqueNetIdFromString_ReturnValue_1 = CallFunc_CreateUniqueNetIdFromString_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId_2 = CallFunc_GetUniqueNetID_UniqueNetId_2;
	Parms.CallFunc_ShowProfileUI_Result = CallFunc_ShowProfileUI_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


