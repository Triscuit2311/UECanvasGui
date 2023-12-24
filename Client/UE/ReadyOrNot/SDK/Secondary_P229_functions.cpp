#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_P229.Secondary_P229_C
// (Actor)

class UClass* ASecondary_P229_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_P229_C");

	return Clss;
}


// Secondary_P229_C Secondary_P229.Default__Secondary_P229_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_P229_C* ASecondary_P229_C::GetDefaultObj()
{
	static class ASecondary_P229_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_P229_C*>(ASecondary_P229_C::StaticClass()->DefaultObject);

	return Default;
}

}


