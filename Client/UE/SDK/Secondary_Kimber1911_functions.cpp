#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Kimber1911.Secondary_Kimber1911_C
// (Actor)

class UClass* ASecondary_Kimber1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Kimber1911_C");

	return Clss;
}


// Secondary_Kimber1911_C Secondary_Kimber1911.Default__Secondary_Kimber1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Kimber1911_C* ASecondary_Kimber1911_C::GetDefaultObj()
{
	static class ASecondary_Kimber1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Kimber1911_C*>(ASecondary_Kimber1911_C::StaticClass()->DefaultObject);

	return Default;
}

}


