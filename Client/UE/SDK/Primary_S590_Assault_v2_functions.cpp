#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_S590_Assault_v2.Primary_S590_Assault_v2_C
// (Actor)

class UClass* APrimary_S590_Assault_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_S590_Assault_v2_C");

	return Clss;
}


// Primary_S590_Assault_v2_C Primary_S590_Assault_v2.Default__Primary_S590_Assault_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_S590_Assault_v2_C* APrimary_S590_Assault_v2_C::GetDefaultObj()
{
	static class APrimary_S590_Assault_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_S590_Assault_v2_C*>(APrimary_S590_Assault_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


