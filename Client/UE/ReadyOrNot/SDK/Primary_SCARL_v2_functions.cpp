#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SCARL_v2.Primary_SCARL_v2_C
// (Actor)

class UClass* APrimary_SCARL_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SCARL_v2_C");

	return Clss;
}


// Primary_SCARL_v2_C Primary_SCARL_v2.Default__Primary_SCARL_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SCARL_v2_C* APrimary_SCARL_v2_C::GetDefaultObj()
{
	static class APrimary_SCARL_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SCARL_v2_C*>(APrimary_SCARL_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


