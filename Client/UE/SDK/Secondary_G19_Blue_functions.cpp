#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_G19_Blue.Secondary_G19_Blue_C
// (Actor)

class UClass* ASecondary_G19_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_G19_Blue_C");

	return Clss;
}


// Secondary_G19_Blue_C Secondary_G19_Blue.Default__Secondary_G19_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_G19_Blue_C* ASecondary_G19_Blue_C::GetDefaultObj()
{
	static class ASecondary_G19_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_G19_Blue_C*>(ASecondary_G19_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


