#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodPlank_02.BP_WoodPlank_02_C
// (Actor)

class UClass* ABP_WoodPlank_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodPlank_02_C");

	return Clss;
}


// BP_WoodPlank_02_C BP_WoodPlank_02.Default__BP_WoodPlank_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodPlank_02_C* ABP_WoodPlank_02_C::GetDefaultObj()
{
	static class ABP_WoodPlank_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodPlank_02_C*>(ABP_WoodPlank_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


