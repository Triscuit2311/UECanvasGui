#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AllImpactPool.AllImpactPool_C
// (None)

class UClass* UAllImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllImpactPool_C");

	return Clss;
}


// AllImpactPool_C AllImpactPool.Default__AllImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAllImpactPool_C* UAllImpactPool_C::GetDefaultObj()
{
	static class UAllImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAllImpactPool_C*>(UAllImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


