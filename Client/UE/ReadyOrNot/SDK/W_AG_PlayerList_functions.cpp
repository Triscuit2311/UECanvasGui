#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AG_PlayerList.W_AG_PlayerList_C
// (None)

class UClass* UW_AG_PlayerList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AG_PlayerList_C");

	return Clss;
}


// W_AG_PlayerList_C W_AG_PlayerList.Default__W_AG_PlayerList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AG_PlayerList_C* UW_AG_PlayerList_C::GetDefaultObj()
{
	static class UW_AG_PlayerList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AG_PlayerList_C*>(UW_AG_PlayerList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Name_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_AG_PlayerList_C::Get_Name_Text_0(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_Name_Text_0");

	Params::UW_AG_PlayerList_C_Get_Name_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_TextBlock_0_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Multiply_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)

class FText UW_AG_PlayerList_C::Get_TextBlock_0_Text_0(bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_Multiply_ByteByte_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_TextBlock_0_Text_0");

	Params::UW_AG_PlayerList_C_Get_TextBlock_0_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_ByteByte_ReturnValue = CallFunc_Multiply_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Score_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_AG_PlayerList_C::Get_Score_Text_0(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_Score_Text_0");

	Params::UW_AG_PlayerList_C_Get_Score_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Damage_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_AG_PlayerList_C::Get_Damage_Text_0(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_Damage_Text_0");

	Params::UW_AG_PlayerList_C_Get_Damage_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.GetDeathsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_AG_PlayerList_C::GetDeathsText(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "GetDeathsText");

	Params::UW_AG_PlayerList_C_GetDeathsText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Arrests_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_AG_PlayerList_C::Get_Arrests_Text_0(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_Arrests_Text_0");

	Params::UW_AG_PlayerList_C_Get_Arrests_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Kills_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_AG_PlayerList_C::Get_Kills_Text_0(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Get_Kills_Text_0");

	Params::UW_AG_PlayerList_C_Get_Kills_Text_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.GetBrush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UW_AG_PlayerList_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "GetBrush_0");

	Params::UW_AG_PlayerList_C_GetBrush_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AG_PlayerList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "Tick");

	Params::UW_AG_PlayerList_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AG_PlayerList_C::BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AG_PlayerList_C::BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AG_PlayerList.W_AG_PlayerList_C.ExecuteUbergraph_W_AG_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// bool                               CallFunc_IsValidUniqueNetID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AG_PlayerList_C::ExecuteUbergraph_W_AG_PlayerList(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, bool CallFunc_IsValidUniqueNetID_ReturnValue, const class FString& CallFunc_UniqueNetIdToString_String, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AG_PlayerList_C", "ExecuteUbergraph_W_AG_PlayerList");

	Params::UW_AG_PlayerList_C_ExecuteUbergraph_W_AG_PlayerList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_IsValidUniqueNetID_ReturnValue = CallFunc_IsValidUniqueNetID_ReturnValue;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


