#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericEvidenceActor.GenericEvidenceActor_C
// (Actor)

class UClass* AGenericEvidenceActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericEvidenceActor_C");

	return Clss;
}


// GenericEvidenceActor_C GenericEvidenceActor.Default__GenericEvidenceActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericEvidenceActor_C* AGenericEvidenceActor_C::GetDefaultObj()
{
	static class AGenericEvidenceActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericEvidenceActor_C*>(AGenericEvidenceActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


