#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_UMP9.Primary_UMP9_C
// (Actor)

class UClass* APrimary_UMP9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_UMP9_C");

	return Clss;
}


// Primary_UMP9_C Primary_UMP9.Default__Primary_UMP9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_UMP9_C* APrimary_UMP9_C::GetDefaultObj()
{
	static class APrimary_UMP9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_UMP9_C*>(APrimary_UMP9_C::StaticClass()->DefaultObject);

	return Default;
}

}


