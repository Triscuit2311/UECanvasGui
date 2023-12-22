#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoverLandmark_Corner.BP_CoverLandmark_Corner_C
// (Actor)

class UClass* ABP_CoverLandmark_Corner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoverLandmark_Corner_C");

	return Clss;
}


// BP_CoverLandmark_Corner_C BP_CoverLandmark_Corner.Default__BP_CoverLandmark_Corner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CoverLandmark_Corner_C* ABP_CoverLandmark_Corner_C::GetDefaultObj()
{
	static class ABP_CoverLandmark_Corner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CoverLandmark_Corner_C*>(ABP_CoverLandmark_Corner_C::StaticClass()->DefaultObject);

	return Default;
}

}


