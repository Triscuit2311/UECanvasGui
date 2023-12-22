#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_F90.Primary_F90_C
// (Actor)

class UClass* APrimary_F90_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_F90_C");

	return Clss;
}


// Primary_F90_C Primary_F90.Default__Primary_F90_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_F90_C* APrimary_F90_C::GetDefaultObj()
{
	static class APrimary_F90_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_F90_C*>(APrimary_F90_C::StaticClass()->DefaultObject);

	return Default;
}

}


