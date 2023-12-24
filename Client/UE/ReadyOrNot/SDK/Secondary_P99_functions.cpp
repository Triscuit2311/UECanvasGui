#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_P99.Secondary_P99_C
// (Actor)

class UClass* ASecondary_P99_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_P99_C");

	return Clss;
}


// Secondary_P99_C Secondary_P99.Default__Secondary_P99_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_P99_C* ASecondary_P99_C::GetDefaultObj()
{
	static class ASecondary_P99_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_P99_C*>(ASecondary_P99_C::StaticClass()->DefaultObject);

	return Default;
}

}


