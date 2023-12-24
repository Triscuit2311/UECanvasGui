#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M14.Primary_M14_C
// (Actor)

class UClass* APrimary_M14_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M14_C");

	return Clss;
}


// Primary_M14_C Primary_M14.Default__Primary_M14_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M14_C* APrimary_M14_C::GetDefaultObj()
{
	static class APrimary_M14_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M14_C*>(APrimary_M14_C::StaticClass()->DefaultObject);

	return Default;
}

}


