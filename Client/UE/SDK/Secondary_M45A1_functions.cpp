#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_M45A1.Secondary_M45A1_C
// (Actor)

class UClass* ASecondary_M45A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_M45A1_C");

	return Clss;
}


// Secondary_M45A1_C Secondary_M45A1.Default__Secondary_M45A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_M45A1_C* ASecondary_M45A1_C::GetDefaultObj()
{
	static class ASecondary_M45A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_M45A1_C*>(ASecondary_M45A1_C::StaticClass()->DefaultObject);

	return Default;
}

}


