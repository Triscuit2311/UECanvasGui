#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_PFC9.Secondary_PFC9_C
// (Actor)

class UClass* ASecondary_PFC9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_PFC9_C");

	return Clss;
}


// Secondary_PFC9_C Secondary_PFC9.Default__Secondary_PFC9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_PFC9_C* ASecondary_PFC9_C::GetDefaultObj()
{
	static class ASecondary_PFC9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_PFC9_C*>(ASecondary_PFC9_C::StaticClass()->DefaultObject);

	return Default;
}

}


