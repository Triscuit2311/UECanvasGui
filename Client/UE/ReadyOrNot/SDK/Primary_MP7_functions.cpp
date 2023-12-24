#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MP7.Primary_MP7_C
// (Actor)

class UClass* APrimary_MP7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MP7_C");

	return Clss;
}


// Primary_MP7_C Primary_MP7.Default__Primary_MP7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MP7_C* APrimary_MP7_C::GetDefaultObj()
{
	static class APrimary_MP7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MP7_C*>(APrimary_MP7_C::StaticClass()->DefaultObject);

	return Default;
}

}


