#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_ThrowWeapon.AIAction_ThrowWeapon_C
// (None)

class UClass* UAIAction_ThrowWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ThrowWeapon_C");

	return Clss;
}


// AIAction_ThrowWeapon_C AIAction_ThrowWeapon.Default__AIAction_ThrowWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ThrowWeapon_C* UAIAction_ThrowWeapon_C::GetDefaultObj()
{
	static class UAIAction_ThrowWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ThrowWeapon_C*>(UAIAction_ThrowWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIAction_ThrowWeapon_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "ShouldPerformAction");

	Params::UAIAction_ThrowWeapon_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_ThrowWeapon_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeapon_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "Tick_Blueprint");

	Params::UAIAction_ThrowWeapon_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.ExecuteUbergraph_AIAction_ThrowWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlayMontageFromTable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeapon_C::ExecuteUbergraph_AIAction_ThrowWeapon(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "ExecuteUbergraph_AIAction_ThrowWeapon");

	Params::UAIAction_ThrowWeapon_C_ExecuteUbergraph_AIAction_ThrowWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_PlayMontageFromTable_ReturnValue = CallFunc_PlayMontageFromTable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


