#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Makarov_2Handed.Secondary_Makarov_2Handed_C
// (Actor)

class UClass* ASecondary_Makarov_2Handed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Makarov_2Handed_C");

	return Clss;
}


// Secondary_Makarov_2Handed_C Secondary_Makarov_2Handed.Default__Secondary_Makarov_2Handed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Makarov_2Handed_C* ASecondary_Makarov_2Handed_C::GetDefaultObj()
{
	static class ASecondary_Makarov_2Handed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Makarov_2Handed_C*>(ASecondary_Makarov_2Handed_C::StaticClass()->DefaultObject);

	return Default;
}

}


