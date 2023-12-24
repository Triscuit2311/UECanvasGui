#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_USP.Secondary_USP_C
// (Actor)

class UClass* ASecondary_USP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_USP_C");

	return Clss;
}


// Secondary_USP_C Secondary_USP.Default__Secondary_USP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_USP_C* ASecondary_USP_C::GetDefaultObj()
{
	static class ASecondary_USP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_USP_C*>(ASecondary_USP_C::StaticClass()->DefaultObject);

	return Default;
}

}


