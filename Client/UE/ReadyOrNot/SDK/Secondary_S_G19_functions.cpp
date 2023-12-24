#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_S_G19.Secondary_S_G19_C
// (Actor)

class UClass* ASecondary_S_G19_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_S_G19_C");

	return Clss;
}


// Secondary_S_G19_C Secondary_S_G19.Default__Secondary_S_G19_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_S_G19_C* ASecondary_S_G19_C::GetDefaultObj()
{
	static class ASecondary_S_G19_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_S_G19_C*>(ASecondary_S_G19_C::StaticClass()->DefaultObject);

	return Default;
}

}


