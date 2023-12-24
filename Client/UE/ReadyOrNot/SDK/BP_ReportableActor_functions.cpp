#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReportableActor.BP_ReportableActor_C
// (Actor)

class UClass* ABP_ReportableActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReportableActor_C");

	return Clss;
}


// BP_ReportableActor_C BP_ReportableActor.Default__BP_ReportableActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReportableActor_C* ABP_ReportableActor_C::GetDefaultObj()
{
	static class ABP_ReportableActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReportableActor_C*>(ABP_ReportableActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


