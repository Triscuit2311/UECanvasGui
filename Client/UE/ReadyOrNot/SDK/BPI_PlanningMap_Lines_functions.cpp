#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlanningMap_Lines.BPI_PlanningMap_Lines_C
// (None)

class UClass* IBPI_PlanningMap_Lines_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlanningMap_Lines_C");

	return Clss;
}


// BPI_PlanningMap_Lines_C BPI_PlanningMap_Lines.Default__BPI_PlanningMap_Lines_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlanningMap_Lines_C* IBPI_PlanningMap_Lines_C::GetDefaultObj()
{
	static class IBPI_PlanningMap_Lines_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlanningMap_Lines_C*>(IBPI_PlanningMap_Lines_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlanningMap_Lines.BPI_PlanningMap_Lines_C.ScaleLineWeightByZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentZoom                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlanningMap_Lines_C::ScaleLineWeightByZoom(float CurrentZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlanningMap_Lines_C", "ScaleLineWeightByZoom");

	Params::IBPI_PlanningMap_Lines_C_ScaleLineWeightByZoom_Params Parms{};

	Parms.CurrentZoom = CurrentZoom;

	UObject::ProcessEvent(Func, &Parms);

}

}


