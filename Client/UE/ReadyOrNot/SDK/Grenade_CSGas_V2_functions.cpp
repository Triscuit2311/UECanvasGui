#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_CSGas_V2.Grenade_CSGas_V2_C
// (Actor)

class UClass* AGrenade_CSGas_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_CSGas_V2_C");

	return Clss;
}


// Grenade_CSGas_V2_C Grenade_CSGas_V2.Default__Grenade_CSGas_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_CSGas_V2_C* AGrenade_CSGas_V2_C::GetDefaultObj()
{
	static class AGrenade_CSGas_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_CSGas_V2_C*>(AGrenade_CSGas_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


