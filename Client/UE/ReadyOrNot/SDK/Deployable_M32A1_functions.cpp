#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Deployable_M32A1.Deployable_M32A1_C
// (Actor)

class UClass* ADeployable_M32A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Deployable_M32A1_C");

	return Clss;
}


// Deployable_M32A1_C Deployable_M32A1.Default__Deployable_M32A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeployable_M32A1_C* ADeployable_M32A1_C::GetDefaultObj()
{
	static class ADeployable_M32A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeployable_M32A1_C*>(ADeployable_M32A1_C::StaticClass()->DefaultObject);

	return Default;
}

}


