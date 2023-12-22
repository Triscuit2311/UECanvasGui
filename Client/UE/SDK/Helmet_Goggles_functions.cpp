#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_Goggles.Helmet_Goggles_C
// (Actor)

class UClass* AHelmet_Goggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_Goggles_C");

	return Clss;
}


// Helmet_Goggles_C Helmet_Goggles.Default__Helmet_Goggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_Goggles_C* AHelmet_Goggles_C::GetDefaultObj()
{
	static class AHelmet_Goggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_Goggles_C*>(AHelmet_Goggles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Helmet_Goggles.Helmet_Goggles_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_Goggles_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_Goggles_C", "ReceiveTick");

	Params::AHelmet_Goggles_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Helmet_Goggles.Helmet_Goggles_C.ExecuteUbergraph_Helmet_Goggles
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHelmet_Goggles_C::ExecuteUbergraph_Helmet_Goggles(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_Goggles_C", "ExecuteUbergraph_Helmet_Goggles");

	Params::AHelmet_Goggles_C_ExecuteUbergraph_Helmet_Goggles_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


