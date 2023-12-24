#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RicochetImpactPool.RicochetImpactPool_C
// (None)

class UClass* URicochetImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RicochetImpactPool_C");

	return Clss;
}


// RicochetImpactPool_C RicochetImpactPool.Default__RicochetImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URicochetImpactPool_C* URicochetImpactPool_C::GetDefaultObj()
{
	static class URicochetImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URicochetImpactPool_C*>(URicochetImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


