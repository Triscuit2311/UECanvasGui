#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SLR47.Primary_SLR47_C
// (Actor)

class UClass* APrimary_SLR47_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SLR47_C");

	return Clss;
}


// Primary_SLR47_C Primary_SLR47.Default__Primary_SLR47_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SLR47_C* APrimary_SLR47_C::GetDefaultObj()
{
	static class APrimary_SLR47_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SLR47_C*>(APrimary_SLR47_C::StaticClass()->DefaultObject);

	return Default;
}

}


