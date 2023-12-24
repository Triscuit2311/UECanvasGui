#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ObjectiveNotify.W_ObjectiveNotify_C
// (None)

class UClass* UW_ObjectiveNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ObjectiveNotify_C");

	return Clss;
}


// W_ObjectiveNotify_C W_ObjectiveNotify.Default__W_ObjectiveNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ObjectiveNotify_C* UW_ObjectiveNotify_C::GetDefaultObj()
{
	static class UW_ObjectiveNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ObjectiveNotify_C*>(UW_ObjectiveNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ObjectiveNotify_C::DestroyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "DestroyWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ObjectiveNotify_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.PlayRewardAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ObjectiveNotify_C::PlayRewardAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "PlayRewardAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ObjectiveNotify_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "PreConstruct");

	Params::UW_ObjectiveNotify_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ObjectiveNotify_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "Tick");

	Params::UW_ObjectiveNotify_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ObjectiveNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ObjectiveNotify_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ObjectiveNotify.W_ObjectiveNotify_C.ExecuteUbergraph_W_ObjectiveNotify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// bool                               CallFunc_SimulateAnimatedText_bCompleted                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SimulateAnimatedText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ObjectiveNotify_C::ExecuteUbergraph_W_ObjectiveNotify(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_SimulateAnimatedText_bCompleted, const class FString& CallFunc_SimulateAnimatedText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EventInstanceIsValid_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ObjectiveNotify_C", "ExecuteUbergraph_W_ObjectiveNotify");

	Params::UW_ObjectiveNotify_C_ExecuteUbergraph_W_ObjectiveNotify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_SimulateAnimatedText_bCompleted = CallFunc_SimulateAnimatedText_bCompleted;
	Parms.CallFunc_SimulateAnimatedText_ReturnValue = CallFunc_SimulateAnimatedText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_1 = CallFunc_EventInstanceIsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_2 = CallFunc_EventInstanceIsValid_ReturnValue_2;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_3 = CallFunc_EventInstanceIsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


