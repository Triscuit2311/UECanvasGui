#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MissionPlanning.BPI_MissionPlanning_C
// (None)

class UClass* IBPI_MissionPlanning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MissionPlanning_C");

	return Clss;
}


// BPI_MissionPlanning_C BPI_MissionPlanning.Default__BPI_MissionPlanning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MissionPlanning_C* IBPI_MissionPlanning_C::GetDefaultObj()
{
	static class IBPI_MissionPlanning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MissionPlanning_C*>(IBPI_MissionPlanning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MissionPlanning.BPI_MissionPlanning_C.MissionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_MissionPlanning_C::MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MissionPlanning_C", "MissionChanged");

	Params::IBPI_MissionPlanning_C_MissionChanged_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}

}


