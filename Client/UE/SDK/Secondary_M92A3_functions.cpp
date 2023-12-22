#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_M92A3.Secondary_M92A3_C
// (Actor)

class UClass* ASecondary_M92A3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_M92A3_C");

	return Clss;
}


// Secondary_M92A3_C Secondary_M92A3.Default__Secondary_M92A3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_M92A3_C* ASecondary_M92A3_C::GetDefaultObj()
{
	static class ASecondary_M92A3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_M92A3_C*>(ASecondary_M92A3_C::StaticClass()->DefaultObject);

	return Default;
}

}


