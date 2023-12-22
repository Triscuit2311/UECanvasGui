#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_AK102.Primary_AK102_C
// (Actor)

class UClass* APrimary_AK102_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_AK102_C");

	return Clss;
}


// Primary_AK102_C Primary_AK102.Default__Primary_AK102_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_AK102_C* APrimary_AK102_C::GetDefaultObj()
{
	static class APrimary_AK102_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_AK102_C*>(APrimary_AK102_C::StaticClass()->DefaultObject);

	return Default;
}

}


