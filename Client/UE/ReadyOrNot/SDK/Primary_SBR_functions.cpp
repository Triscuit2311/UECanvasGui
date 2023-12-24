#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SBR.Primary_SBR_C
// (Actor)

class UClass* APrimary_SBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SBR_C");

	return Clss;
}


// Primary_SBR_C Primary_SBR.Default__Primary_SBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SBR_C* APrimary_SBR_C::GetDefaultObj()
{
	static class APrimary_SBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SBR_C*>(APrimary_SBR_C::StaticClass()->DefaultObject);

	return Default;
}

}


