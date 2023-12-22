#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VentHoleTraversal.BP_VentHoleTraversal_C
// (Actor)

class UClass* ABP_VentHoleTraversal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VentHoleTraversal_C");

	return Clss;
}


// BP_VentHoleTraversal_C BP_VentHoleTraversal.Default__BP_VentHoleTraversal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VentHoleTraversal_C* ABP_VentHoleTraversal_C::GetDefaultObj()
{
	static class ABP_VentHoleTraversal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VentHoleTraversal_C*>(ABP_VentHoleTraversal_C::StaticClass()->DefaultObject);

	return Default;
}

}


