#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_TCR.Primary_TCR_C
// (Actor)

class UClass* APrimary_TCR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_TCR_C");

	return Clss;
}


// Primary_TCR_C Primary_TCR.Default__Primary_TCR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_TCR_C* APrimary_TCR_C::GetDefaultObj()
{
	static class APrimary_TCR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_TCR_C*>(APrimary_TCR_C::StaticClass()->DefaultObject);

	return Default;
}

}


