#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShotgunImpactPool.ShotgunImpactPool_C
// (None)

class UClass* UShotgunImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShotgunImpactPool_C");

	return Clss;
}


// ShotgunImpactPool_C ShotgunImpactPool.Default__ShotgunImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgunImpactPool_C* UShotgunImpactPool_C::GetDefaultObj()
{
	static class UShotgunImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgunImpactPool_C*>(UShotgunImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


