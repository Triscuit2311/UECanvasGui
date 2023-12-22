#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M16A4.Primary_M16A4_C
// (Actor)

class UClass* APrimary_M16A4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M16A4_C");

	return Clss;
}


// Primary_M16A4_C Primary_M16A4.Default__Primary_M16A4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M16A4_C* APrimary_M16A4_C::GetDefaultObj()
{
	static class APrimary_M16A4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M16A4_C*>(APrimary_M16A4_C::StaticClass()->DefaultObject);

	return Default;
}

}


