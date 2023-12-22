#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C
// (Actor)

class UClass* ABP_AttachedAlarmTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttachedAlarmTrap_C");

	return Clss;
}


// BP_AttachedAlarmTrap_C BP_AttachedAlarmTrap.Default__BP_AttachedAlarmTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AttachedAlarmTrap_C* ABP_AttachedAlarmTrap_C::GetDefaultObj()
{
	static class ABP_AttachedAlarmTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AttachedAlarmTrap_C*>(ABP_AttachedAlarmTrap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        TriggeredBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "OnTrapTriggered");

	Params::ABP_AttachedAlarmTrap_C_OnTrapTriggered_Params Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapDisarmed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        DisarmedBy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::OnTrapDisarmed(class AReadyOrNotCharacter* DisarmedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "OnTrapDisarmed");

	Params::ABP_AttachedAlarmTrap_C_OnTrapDisarmed_Params Parms{};

	Parms.DisarmedBy = DisarmedBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.ExecuteUbergraph_BP_AttachedAlarmTrap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_TriggeredBy                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnSWATTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_DisarmedBy                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::ExecuteUbergraph_BP_AttachedAlarmTrap(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_Event_TriggeredBy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_DisarmedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "ExecuteUbergraph_BP_AttachedAlarmTrap");

	Params::ABP_AttachedAlarmTrap_C_ExecuteUbergraph_BP_AttachedAlarmTrap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TriggeredBy = K2Node_Event_TriggeredBy;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsOnSWATTeam_ReturnValue = CallFunc_IsOnSWATTeam_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_DisarmedBy = K2Node_Event_DisarmedBy;

	UObject::ProcessEvent(Func, &Parms);

}

}


