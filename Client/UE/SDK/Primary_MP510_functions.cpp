#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MP510.Primary_MP510_C
// (Actor)

class UClass* APrimary_MP510_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MP510_C");

	return Clss;
}


// Primary_MP510_C Primary_MP510.Default__Primary_MP510_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MP510_C* APrimary_MP510_C::GetDefaultObj()
{
	static class APrimary_MP510_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MP510_C*>(APrimary_MP510_C::StaticClass()->DefaultObject);

	return Default;
}

}


