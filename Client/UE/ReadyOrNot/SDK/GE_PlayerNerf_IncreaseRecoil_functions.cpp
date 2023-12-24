#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C
// (None)

class UClass* UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerNerf_IncreaseRecoil_C");

	return Clss;
}


// GE_PlayerNerf_IncreaseRecoil_C GE_PlayerNerf_IncreaseRecoil.Default__GE_PlayerNerf_IncreaseRecoil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerNerf_IncreaseRecoil_C* UGE_PlayerNerf_IncreaseRecoil_C::GetDefaultObj()
{
	static class UGE_PlayerNerf_IncreaseRecoil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerNerf_IncreaseRecoil_C*>(UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ApplyEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGE_PlayerNerf_IncreaseRecoil_C::ApplyEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_PlayerNerf_IncreaseRecoil_C", "ApplyEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ResetEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGE_PlayerNerf_IncreaseRecoil_C::ResetEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_PlayerNerf_IncreaseRecoil_C", "ResetEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C.ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UGE_PlayerNerf_IncreaseRecoil_C::ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_PlayerNerf_IncreaseRecoil_C", "ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil");

	Params::UGE_PlayerNerf_IncreaseRecoil_C_ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


