#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C
// (None)

class UClass* UAIAction_SurrenderExitStandard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SurrenderExitStandard_C");

	return Clss;
}


// AIAction_SurrenderExitStandard_C AIAction_SurrenderExitStandard.Default__AIAction_SurrenderExitStandard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_SurrenderExitStandard_C* UAIAction_SurrenderExitStandard_C::GetDefaultObj()
{
	static class UAIAction_SurrenderExitStandard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SurrenderExitStandard_C*>(UAIAction_SurrenderExitStandard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C.IsFakeExit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESurrenderExitType      ExitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_SurrenderExitStandard_C::IsFakeExit(enum class ESurrenderExitType ExitType, bool* Return_Value, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SurrenderExitStandard_C", "IsFakeExit");

	Params::UAIAction_SurrenderExitStandard_C_IsFakeExit_Params Parms{};

	Parms.ExitType = ExitType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIAction_SurrenderExitStandard_C::ShouldPerformAction(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SurrenderExitStandard_C", "ShouldPerformAction");

	Params::UAIAction_SurrenderExitStandard_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_SurrenderExitStandard_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SurrenderExitStandard_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_SurrenderExitStandard_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SurrenderExitStandard_C", "Tick_Blueprint");

	Params::UAIAction_SurrenderExitStandard_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C.ExecuteUbergraph_AIAction_SurrenderExitStandard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFakeExit_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SurrenderExit_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        CallFunc_GetLastTrackedTarget_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_SurrenderExitStandard_C::ExecuteUbergraph_AIAction_SurrenderExitStandard(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, bool CallFunc_IsFakeExit_Return_Value, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SurrenderExit_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SurrenderExitStandard_C", "ExecuteUbergraph_AIAction_SurrenderExitStandard");

	Params::UAIAction_SurrenderExitStandard_C_ExecuteUbergraph_AIAction_SurrenderExitStandard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue = CallFunc_AppendMultiple_ReturnValue;
	Parms.CallFunc_IsFakeExit_Return_Value = CallFunc_IsFakeExit_Return_Value;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SurrenderExit_ReturnValue = CallFunc_SurrenderExit_ReturnValue;
	Parms.CallFunc_GetLastTrackedTarget_ReturnValue = CallFunc_GetLastTrackedTarget_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


