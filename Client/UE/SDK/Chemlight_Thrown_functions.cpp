#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chemlight_Thrown.Chemlight_Thrown_C
// (Actor)

class UClass* AChemlight_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chemlight_Thrown_C");

	return Clss;
}


// Chemlight_Thrown_C Chemlight_Thrown.Default__Chemlight_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChemlight_Thrown_C* AChemlight_Thrown_C::GetDefaultObj()
{
	static class AChemlight_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChemlight_Thrown_C*>(AChemlight_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


