#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PistolImpactPool.PistolImpactPool_C
// (None)

class UClass* UPistolImpactPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PistolImpactPool_C");

	return Clss;
}


// PistolImpactPool_C PistolImpactPool.Default__PistolImpactPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistolImpactPool_C* UPistolImpactPool_C::GetDefaultObj()
{
	static class UPistolImpactPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistolImpactPool_C*>(UPistolImpactPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


