#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M4A1.Primary_M4A1_C
// (Actor)

class UClass* APrimary_M4A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M4A1_C");

	return Clss;
}


// Primary_M4A1_C Primary_M4A1.Default__Primary_M4A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M4A1_C* APrimary_M4A1_C::GetDefaultObj()
{
	static class APrimary_M4A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M4A1_C*>(APrimary_M4A1_C::StaticClass()->DefaultObject);

	return Default;
}

}


