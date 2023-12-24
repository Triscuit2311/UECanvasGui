#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_P250.Secondary_P250_C
// (Actor)

class UClass* ASecondary_P250_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_P250_C");

	return Clss;
}


// Secondary_P250_C Secondary_P250.Default__Secondary_P250_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_P250_C* ASecondary_P250_C::GetDefaultObj()
{
	static class ASecondary_P250_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_P250_C*>(ASecondary_P250_C::StaticClass()->DefaultObject);

	return Default;
}

}


