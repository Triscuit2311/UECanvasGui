#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MP9.Primary_MP9_C
// (Actor)

class UClass* APrimary_MP9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MP9_C");

	return Clss;
}


// Primary_MP9_C Primary_MP9.Default__Primary_MP9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MP9_C* APrimary_MP9_C::GetDefaultObj()
{
	static class APrimary_MP9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MP9_C*>(APrimary_MP9_C::StaticClass()->DefaultObject);

	return Default;
}

}


