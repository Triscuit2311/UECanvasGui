#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RifleImpactPool.RifleImpactPool_C
// (None)

class UClass* URifleImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RifleImpactPool_C");

	return Clss;
}


// RifleImpactPool_C RifleImpactPool.Default__RifleImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifleImpactPool_C* URifleImpactPool_C::GetDefaultObj()
{
	static class URifleImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifleImpactPool_C*>(URifleImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


