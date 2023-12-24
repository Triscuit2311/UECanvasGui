#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MPX.Primary_MPX_C
// (Actor)

class UClass* APrimary_MPX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MPX_C");

	return Clss;
}


// Primary_MPX_C Primary_MPX.Default__Primary_MPX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MPX_C* APrimary_MPX_C::GetDefaultObj()
{
	static class APrimary_MPX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MPX_C*>(APrimary_MPX_C::StaticClass()->DefaultObject);

	return Default;
}

}


