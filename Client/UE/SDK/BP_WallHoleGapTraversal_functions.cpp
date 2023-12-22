#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WallHoleGapTraversal.BP_WallHoleGapTraversal_C
// (Actor)

class UClass* ABP_WallHoleGapTraversal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WallHoleGapTraversal_C");

	return Clss;
}


// BP_WallHoleGapTraversal_C BP_WallHoleGapTraversal.Default__BP_WallHoleGapTraversal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WallHoleGapTraversal_C* ABP_WallHoleGapTraversal_C::GetDefaultObj()
{
	static class ABP_WallHoleGapTraversal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WallHoleGapTraversal_C*>(ABP_WallHoleGapTraversal_C::StaticClass()->DefaultObject);

	return Default;
}

}


