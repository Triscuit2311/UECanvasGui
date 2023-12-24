#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CollectedEvidenceActor.BP_CollectedEvidenceActor_C
// (Actor)

class UClass* ABP_CollectedEvidenceActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CollectedEvidenceActor_C");

	return Clss;
}


// BP_CollectedEvidenceActor_C BP_CollectedEvidenceActor.Default__BP_CollectedEvidenceActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CollectedEvidenceActor_C* ABP_CollectedEvidenceActor_C::GetDefaultObj()
{
	static class ABP_CollectedEvidenceActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CollectedEvidenceActor_C*>(ABP_CollectedEvidenceActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


