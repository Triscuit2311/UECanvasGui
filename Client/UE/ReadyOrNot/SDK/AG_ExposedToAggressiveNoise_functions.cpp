#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_ExposedToAggressiveNoise.AG_ExposedToAggressiveNoise_C
// (None)

class UClass* UAG_ExposedToAggressiveNoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_ExposedToAggressiveNoise_C");

	return Clss;
}


// AG_ExposedToAggressiveNoise_C AG_ExposedToAggressiveNoise.Default__AG_ExposedToAggressiveNoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_ExposedToAggressiveNoise_C* UAG_ExposedToAggressiveNoise_C::GetDefaultObj()
{
	static class UAG_ExposedToAggressiveNoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_ExposedToAggressiveNoise_C*>(UAG_ExposedToAggressiveNoise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_ExposedToAggressiveNoise.AG_ExposedToAggressiveNoise_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_ExposedToAggressiveNoise_C::CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_ExposedToAggressiveNoise_C", "CanOpen");

	Params::UAG_ExposedToAggressiveNoise_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue = CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag = CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue = CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


