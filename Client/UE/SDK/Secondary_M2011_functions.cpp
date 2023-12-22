#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_M2011.Secondary_M2011_C
// (Actor)

class UClass* ASecondary_M2011_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_M2011_C");

	return Clss;
}


// Secondary_M2011_C Secondary_M2011.Default__Secondary_M2011_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_M2011_C* ASecondary_M2011_C::GetDefaultObj()
{
	static class ASecondary_M2011_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_M2011_C*>(ASecondary_M2011_C::StaticClass()->DefaultObject);

	return Default;
}

}


