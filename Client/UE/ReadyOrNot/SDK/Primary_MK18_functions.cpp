#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MK18.Primary_MK18_C
// (Actor)

class UClass* APrimary_MK18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MK18_C");

	return Clss;
}


// Primary_MK18_C Primary_MK18.Default__Primary_MK18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MK18_C* APrimary_MK18_C::GetDefaultObj()
{
	static class APrimary_MK18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MK18_C*>(APrimary_MK18_C::StaticClass()->DefaultObject);

	return Default;
}

}


