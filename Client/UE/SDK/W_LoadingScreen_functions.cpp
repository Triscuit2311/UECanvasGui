#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadingScreen.W_LoadingScreen_C
// (None)

class UClass* UW_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadingScreen_C");

	return Clss;
}


// W_LoadingScreen_C W_LoadingScreen.Default__W_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadingScreen_C* UW_LoadingScreen_C::GetDefaultObj()
{
	static class UW_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadingScreen_C*>(UW_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadingScreen.W_LoadingScreen_C.GetLoadingProgressText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetLoadingPercentage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::GetLoadingProgressText(float CallFunc_GetLoadingPercentage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "GetLoadingProgressText");

	Params::UW_LoadingScreen_C_GetLoadingProgressText_Params Parms{};

	Parms.CallFunc_GetLoadingPercentage_ReturnValue = CallFunc_GetLoadingPercentage_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UW_LoadingScreen_C::UpdateHeaderText(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateHeaderText");

	Params::UW_LoadingScreen_C_UpdateHeaderText_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.Get_Loading_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_LoadingScreen_C::Get_Loading_Visibility_0(bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Get_Loading_Visibility_0");

	Params::UW_LoadingScreen_C_Get_Loading_Visibility_0_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::GetText_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "GetText_0");

	Params::UW_LoadingScreen_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.Get_TextLoading_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::Get_TextLoading_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Get_TextLoading_Text_0");

	Params::UW_LoadingScreen_C_Get_TextLoading_Text_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.Get_ServerName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::Get_ServerName_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Get_ServerName_Text_0");

	Params::UW_LoadingScreen_C_Get_ServerName_Text_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateLoadingScreenPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewPercentage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadingScreen_C::UpdateLoadingScreenPercentage(float NewPercentage, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateLoadingScreenPercentage");

	Params::UW_LoadingScreen_C_UpdateLoadingScreenPercentage_Params Parms{};

	Parms.NewPercentage = NewPercentage;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadingScreen.W_LoadingScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadingScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Tick");

	Params::UW_LoadingScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateTips
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadingScreen_C::UpdateTips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateTips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadingScreen.W_LoadingScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadingScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "PreConstruct");

	Params::UW_LoadingScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLoadingProgressText_ReturnValue                      (None)

void UW_LoadingScreen_C::ExecuteUbergraph_W_LoadingScreen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetLoadingProgressText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "ExecuteUbergraph_W_LoadingScreen");

	Params::UW_LoadingScreen_C_ExecuteUbergraph_W_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetLoadingProgressText_ReturnValue = CallFunc_GetLoadingProgressText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


