#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReportableActor_Farm_Plans.BP_ReportableActor_Farm_Plans_C
// (Actor)

class UClass* ABP_ReportableActor_Farm_Plans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReportableActor_Farm_Plans_C");

	return Clss;
}


// BP_ReportableActor_Farm_Plans_C BP_ReportableActor_Farm_Plans.Default__BP_ReportableActor_Farm_Plans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReportableActor_Farm_Plans_C* ABP_ReportableActor_Farm_Plans_C::GetDefaultObj()
{
	static class ABP_ReportableActor_Farm_Plans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReportableActor_Farm_Plans_C*>(ABP_ReportableActor_Farm_Plans_C::StaticClass()->DefaultObject);

	return Default;
}

}


