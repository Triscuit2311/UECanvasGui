#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AutoShotgunForPerfTest.BP_AutoShotgunForPerfTest_C
// (Actor)

class UClass* ABP_AutoShotgunForPerfTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AutoShotgunForPerfTest_C");

	return Clss;
}


// BP_AutoShotgunForPerfTest_C BP_AutoShotgunForPerfTest.Default__BP_AutoShotgunForPerfTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AutoShotgunForPerfTest_C* ABP_AutoShotgunForPerfTest_C::GetDefaultObj()
{
	static class ABP_AutoShotgunForPerfTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AutoShotgunForPerfTest_C*>(ABP_AutoShotgunForPerfTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AutoShotgunForPerfTest.BP_AutoShotgunForPerfTest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AutoShotgunForPerfTest_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoShotgunForPerfTest_C", "ReceiveTick");

	Params::ABP_AutoShotgunForPerfTest_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AutoShotgunForPerfTest.BP_AutoShotgunForPerfTest_C.ExecuteUbergraph_BP_AutoShotgunForPerfTest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AutoShotgunForPerfTest_C::ExecuteUbergraph_BP_AutoShotgunForPerfTest(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AutoShotgunForPerfTest_C", "ExecuteUbergraph_BP_AutoShotgunForPerfTest");

	Params::ABP_AutoShotgunForPerfTest_C_ExecuteUbergraph_BP_AutoShotgunForPerfTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


