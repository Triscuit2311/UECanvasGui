#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CSGas_Thrown.CSGas_Thrown_C
// (Actor)

class UClass* ACSGas_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGas_Thrown_C");

	return Clss;
}


// CSGas_Thrown_C CSGas_Thrown.Default__CSGas_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACSGas_Thrown_C* ACSGas_Thrown_C::GetDefaultObj()
{
	static class ACSGas_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACSGas_Thrown_C*>(ACSGas_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


