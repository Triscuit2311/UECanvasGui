#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuakeColorCodes.BP_QuakeColorCodes_C
// (None)

class UClass* UBP_QuakeColorCodes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuakeColorCodes_C");

	return Clss;
}


// BP_QuakeColorCodes_C BP_QuakeColorCodes.Default__BP_QuakeColorCodes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuakeColorCodes_C* UBP_QuakeColorCodes_C::GetDefaultObj()
{
	static class UBP_QuakeColorCodes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuakeColorCodes_C*>(UBP_QuakeColorCodes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuakeColorCodes.BP_QuakeColorCodes_C.Quake_ConvertColorCodes
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StrIn                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StrOut                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      WorkStr                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuakeColorCodes_C::Quake_ConvertColorCodes(const class FString& StrIn, class UObject* __WorldContext, class FString* StrOut, const class FString& WorkStr, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_ReplaceInline_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_ReplaceInline_ReturnValue_1, int32 CallFunc_ReplaceInline_ReturnValue_2, int32 CallFunc_ReplaceInline_ReturnValue_3, int32 CallFunc_ReplaceInline_ReturnValue_4, int32 CallFunc_ReplaceInline_ReturnValue_5, int32 CallFunc_ReplaceInline_ReturnValue_6, int32 CallFunc_ReplaceInline_ReturnValue_7, int32 CallFunc_ReplaceInline_ReturnValue_8, int32 CallFunc_ReplaceInline_ReturnValue_9, int32 CallFunc_ReplaceInline_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuakeColorCodes_C", "Quake_ConvertColorCodes");

	Params::UBP_QuakeColorCodes_C_Quake_ConvertColorCodes_Params Parms{};

	Parms.StrIn = StrIn;
	Parms.__WorldContext = __WorldContext;
	Parms.WorkStr = WorkStr;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ReplaceInline_ReturnValue_1 = CallFunc_ReplaceInline_ReturnValue_1;
	Parms.CallFunc_ReplaceInline_ReturnValue_2 = CallFunc_ReplaceInline_ReturnValue_2;
	Parms.CallFunc_ReplaceInline_ReturnValue_3 = CallFunc_ReplaceInline_ReturnValue_3;
	Parms.CallFunc_ReplaceInline_ReturnValue_4 = CallFunc_ReplaceInline_ReturnValue_4;
	Parms.CallFunc_ReplaceInline_ReturnValue_5 = CallFunc_ReplaceInline_ReturnValue_5;
	Parms.CallFunc_ReplaceInline_ReturnValue_6 = CallFunc_ReplaceInline_ReturnValue_6;
	Parms.CallFunc_ReplaceInline_ReturnValue_7 = CallFunc_ReplaceInline_ReturnValue_7;
	Parms.CallFunc_ReplaceInline_ReturnValue_8 = CallFunc_ReplaceInline_ReturnValue_8;
	Parms.CallFunc_ReplaceInline_ReturnValue_9 = CallFunc_ReplaceInline_ReturnValue_9;
	Parms.CallFunc_ReplaceInline_ReturnValue_10 = CallFunc_ReplaceInline_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

	if (StrOut != nullptr)
		*StrOut = std::move(Parms.StrOut);

}

}


