#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_PlanningMap_SpawnPoint.BP_UI_PlanningMap_SpawnPoint_C
// (SceneComponent)

class UClass* UBP_UI_PlanningMap_SpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_PlanningMap_SpawnPoint_C");

	return Clss;
}


// BP_UI_PlanningMap_SpawnPoint_C BP_UI_PlanningMap_SpawnPoint.Default__BP_UI_PlanningMap_SpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_PlanningMap_SpawnPoint_C* UBP_UI_PlanningMap_SpawnPoint_C::GetDefaultObj()
{
	static class UBP_UI_PlanningMap_SpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_PlanningMap_SpawnPoint_C*>(UBP_UI_PlanningMap_SpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


