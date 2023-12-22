#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_CAR.Primary_CAR_C
// (Actor)

class UClass* APrimary_CAR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_CAR_C");

	return Clss;
}


// Primary_CAR_C Primary_CAR.Default__Primary_CAR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_CAR_C* APrimary_CAR_C::GetDefaultObj()
{
	static class APrimary_CAR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_CAR_C*>(APrimary_CAR_C::StaticClass()->DefaultObject);

	return Default;
}

}


