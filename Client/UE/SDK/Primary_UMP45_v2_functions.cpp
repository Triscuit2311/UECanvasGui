#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_UMP45_v2.Primary_UMP45_v2_C
// (Actor)

class UClass* APrimary_UMP45_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_UMP45_v2_C");

	return Clss;
}


// Primary_UMP45_v2_C Primary_UMP45_v2.Default__Primary_UMP45_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_UMP45_v2_C* APrimary_UMP45_v2_C::GetDefaultObj()
{
	static class APrimary_UMP45_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_UMP45_v2_C*>(APrimary_UMP45_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


