#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoverLandmark_Table.BP_CoverLandmark_Table_C
// (Actor)

class UClass* ABP_CoverLandmark_Table_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoverLandmark_Table_C");

	return Clss;
}


// BP_CoverLandmark_Table_C BP_CoverLandmark_Table.Default__BP_CoverLandmark_Table_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CoverLandmark_Table_C* ABP_CoverLandmark_Table_C::GetDefaultObj()
{
	static class ABP_CoverLandmark_Table_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CoverLandmark_Table_C*>(ABP_CoverLandmark_Table_C::StaticClass()->DefaultObject);

	return Default;
}

}


