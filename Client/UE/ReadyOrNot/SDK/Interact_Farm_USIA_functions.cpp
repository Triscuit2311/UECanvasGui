#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interact_Farm_USIA.Interact_Farm_USIA_C
// (Actor)

class UClass* AInteract_Farm_USIA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interact_Farm_USIA_C");

	return Clss;
}


// Interact_Farm_USIA_C Interact_Farm_USIA.Default__Interact_Farm_USIA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInteract_Farm_USIA_C* AInteract_Farm_USIA_C::GetDefaultObj()
{
	static class AInteract_Farm_USIA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteract_Farm_USIA_C*>(AInteract_Farm_USIA_C::StaticClass()->DefaultObject);

	return Default;
}

}


