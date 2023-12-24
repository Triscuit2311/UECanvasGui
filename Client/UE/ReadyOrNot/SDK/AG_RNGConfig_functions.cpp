#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RNGConfig.AG_RNGConfig_C
// (None)

class UClass* UAG_RNGConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RNGConfig_C");

	return Clss;
}


// AG_RNGConfig_C AG_RNGConfig.Default__AG_RNGConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RNGConfig_C* UAG_RNGConfig_C::GetDefaultObj()
{
	static class UAG_RNGConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RNGConfig_C*>(UAG_RNGConfig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RNGConfig.AG_RNGConfig_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_RNGConfig_C::CanOpen(struct FAIActionDecisionContext& Context, float CallFunc_RandomFloat_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RNGConfig_C", "CanOpen");

	Params::UAG_RNGConfig_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


