#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MP5A2.Primary_MP5A2_C
// (Actor)

class UClass* APrimary_MP5A2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MP5A2_C");

	return Clss;
}


// Primary_MP5A2_C Primary_MP5A2.Default__Primary_MP5A2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MP5A2_C* APrimary_MP5A2_C::GetDefaultObj()
{
	static class APrimary_MP5A2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MP5A2_C*>(APrimary_MP5A2_C::StaticClass()->DefaultObject);

	return Default;
}

}


