#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_UpArmor.Helmet_UpArmor_C
// (Actor)

class UClass* AHelmet_UpArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_UpArmor_C");

	return Clss;
}


// Helmet_UpArmor_C Helmet_UpArmor.Default__Helmet_UpArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_UpArmor_C* AHelmet_UpArmor_C::GetDefaultObj()
{
	static class AHelmet_UpArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_UpArmor_C*>(AHelmet_UpArmor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Helmet_UpArmor.Helmet_UpArmor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_UpArmor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_UpArmor_C", "ReceiveTick");

	Params::AHelmet_UpArmor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Helmet_UpArmor.Helmet_UpArmor_C.ExecuteUbergraph_Helmet_UpArmor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHelmet_UpArmor_C::ExecuteUbergraph_Helmet_UpArmor(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_UpArmor_C", "ExecuteUbergraph_Helmet_UpArmor");

	Params::AHelmet_UpArmor_C_ExecuteUbergraph_Helmet_UpArmor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


