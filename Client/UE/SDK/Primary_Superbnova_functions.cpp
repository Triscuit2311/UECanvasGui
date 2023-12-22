#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Superbnova.Primary_Superbnova_C
// (Actor)

class UClass* APrimary_Superbnova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_Superbnova_C");

	return Clss;
}


// Primary_Superbnova_C Primary_Superbnova.Default__Primary_Superbnova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_Superbnova_C* APrimary_Superbnova_C::GetDefaultObj()
{
	static class APrimary_Superbnova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_Superbnova_C*>(APrimary_Superbnova_C::StaticClass()->DefaultObject);

	return Default;
}

}


