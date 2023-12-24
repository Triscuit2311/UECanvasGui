#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatMessage_Entry.ChatMessage_Entry_C
// (None)

class UClass* UChatMessage_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatMessage_Entry_C");

	return Clss;
}


// ChatMessage_Entry_C ChatMessage_Entry.Default__ChatMessage_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatMessage_Entry_C* UChatMessage_Entry_C::GetDefaultObj()
{
	static class UChatMessage_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatMessage_Entry_C*>(UChatMessage_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UChatMessage_Entry_C::Get_ChatType_Text_0(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatMessage_Entry_C", "Get_ChatType_Text_0");

	Params::UChatMessage_Entry_C_Get_ChatType_Text_0_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChatMessage_Entry.ChatMessage_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChatMessage_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatMessage_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)

void UChatMessage_Entry_C::ExecuteUbergraph_ChatMessage_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatMessage_Entry_C", "ExecuteUbergraph_ChatMessage_Entry");

	Params::UChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


