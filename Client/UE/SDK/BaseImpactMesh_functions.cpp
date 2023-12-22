#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseImpactMesh.BaseImpactMesh_C
// (Actor)

class UClass* ABaseImpactMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseImpactMesh_C");

	return Clss;
}


// BaseImpactMesh_C BaseImpactMesh.Default__BaseImpactMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseImpactMesh_C* ABaseImpactMesh_C::GetDefaultObj()
{
	static class ABaseImpactMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseImpactMesh_C*>(ABaseImpactMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseImpactMesh.BaseImpactMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABaseImpactMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseImpactMesh_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseImpactMesh.BaseImpactMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseImpactMesh_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseImpactMesh_C", "ReceiveTick");

	Params::ABaseImpactMesh_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseImpactMesh.BaseImpactMesh_C.ExecuteUbergraph_BaseImpactMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseImpactMesh_C::ExecuteUbergraph_BaseImpactMesh(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseImpactMesh_C", "ExecuteUbergraph_BaseImpactMesh");

	Params::ABaseImpactMesh_C_ExecuteUbergraph_BaseImpactMesh_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


