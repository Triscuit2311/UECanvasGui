#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPTalkerEntry.W_VOIPTalkerEntry_C
// (None)

class UClass* UW_VOIPTalkerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPTalkerEntry_C");

	return Clss;
}


// W_VOIPTalkerEntry_C W_VOIPTalkerEntry.Default__W_VOIPTalkerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPTalkerEntry_C* UW_VOIPTalkerEntry_C::GetDefaultObj()
{
	static class UW_VOIPTalkerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPTalkerEntry_C*>(UW_VOIPTalkerEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPTalkerEntry.W_VOIPTalkerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIPTalkerEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPTalkerEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPTalkerEntry.W_VOIPTalkerEntry_C.VoiceChannelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_VOIPTalkerEntry_C::VoiceChannelChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPTalkerEntry_C", "VoiceChannelChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPTalkerEntry.W_VOIPTalkerEntry_C.ExecuteUbergraph_W_VOIPTalkerEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetVoiceTypeText_ReturnValue                            (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVoiceType              CallFunc_GetVoiceType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VOIPTalkerEntry_C::ExecuteUbergraph_W_VOIPTalkerEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetVoiceTypeText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EVoiceType CallFunc_GetVoiceType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPTalkerEntry_C", "ExecuteUbergraph_W_VOIPTalkerEntry");

	Params::UW_VOIPTalkerEntry_C_ExecuteUbergraph_W_VOIPTalkerEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVoiceTypeText_ReturnValue = CallFunc_GetVoiceTypeText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetVoiceType_ReturnValue = CallFunc_GetVoiceType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


