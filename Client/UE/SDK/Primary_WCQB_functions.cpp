#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_WCQB.Primary_WCQB_C
// (Actor)

class UClass* APrimary_WCQB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_WCQB_C");

	return Clss;
}


// Primary_WCQB_C Primary_WCQB.Default__Primary_WCQB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_WCQB_C* APrimary_WCQB_C::GetDefaultObj()
{
	static class APrimary_WCQB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_WCQB_C*>(APrimary_WCQB_C::StaticClass()->DefaultObject);

	return Default;
}

}


