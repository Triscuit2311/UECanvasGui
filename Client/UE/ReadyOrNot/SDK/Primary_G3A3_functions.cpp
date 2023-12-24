#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_G3A3.Primary_G3A3_C
// (Actor)

class UClass* APrimary_G3A3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_G3A3_C");

	return Clss;
}


// Primary_G3A3_C Primary_G3A3.Default__Primary_G3A3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_G3A3_C* APrimary_G3A3_C::GetDefaultObj()
{
	static class APrimary_G3A3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_G3A3_C*>(APrimary_G3A3_C::StaticClass()->DefaultObject);

	return Default;
}

}


