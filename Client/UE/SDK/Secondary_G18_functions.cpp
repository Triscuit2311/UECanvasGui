#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_G18.Secondary_G18_C
// (Actor)

class UClass* ASecondary_G18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_G18_C");

	return Clss;
}


// Secondary_G18_C Secondary_G18.Default__Secondary_G18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_G18_C* ASecondary_G18_C::GetDefaultObj()
{
	static class ASecondary_G18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_G18_C*>(ASecondary_G18_C::StaticClass()->DefaultObject);

	return Default;
}

}


