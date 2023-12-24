#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReplayCameraPawn.BP_ReplayCameraPawn_C
// (Actor, Pawn)

class UClass* ABP_ReplayCameraPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReplayCameraPawn_C");

	return Clss;
}


// BP_ReplayCameraPawn_C BP_ReplayCameraPawn.Default__BP_ReplayCameraPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReplayCameraPawn_C* ABP_ReplayCameraPawn_C::GetDefaultObj()
{
	static class ABP_ReplayCameraPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReplayCameraPawn_C*>(ABP_ReplayCameraPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReplayCameraPawn.BP_ReplayCameraPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReplayCameraPawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayCameraPawn_C", "ReceiveTick");

	Params::ABP_ReplayCameraPawn_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplayCameraPawn.BP_ReplayCameraPawn_C.ExecuteUbergraph_BP_ReplayCameraPawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReplayCameraPawn_C::ExecuteUbergraph_BP_ReplayCameraPawn(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayCameraPawn_C", "ExecuteUbergraph_BP_ReplayCameraPawn");

	Params::ABP_ReplayCameraPawn_C_ExecuteUbergraph_BP_ReplayCameraPawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


