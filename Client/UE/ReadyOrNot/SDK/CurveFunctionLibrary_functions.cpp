#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurveFunctionLibrary.CurveFunctionLibrary_C
// (None)

class UClass* UCurveFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurveFunctionLibrary_C");

	return Clss;
}


// CurveFunctionLibrary_C CurveFunctionLibrary.Default__CurveFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurveFunctionLibrary_C* UCurveFunctionLibrary_C::GetDefaultObj()
{
	static class UCurveFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurveFunctionLibrary_C*>(UCurveFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CurveFunctionLibrary.CurveFunctionLibrary_C.LogisticCurve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              E                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NegateFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurveFunctionLibrary_C::LogisticCurve(float X, class UObject* __WorldContext, float* Return_Value, float E, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_NegateFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurveFunctionLibrary_C", "LogisticCurve");

	Params::UCurveFunctionLibrary_C_LogisticCurve_Params Parms{};

	Parms.X = X;
	Parms.__WorldContext = __WorldContext;
	Parms.E = E;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NegateFloat_ReturnValue = CallFunc_NegateFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}

}


