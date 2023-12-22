#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Benelli_M4.Primary_Benelli_M4_C
// (Actor)

class UClass* APrimary_Benelli_M4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_Benelli_M4_C");

	return Clss;
}


// Primary_Benelli_M4_C Primary_Benelli_M4.Default__Primary_Benelli_M4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_Benelli_M4_C* APrimary_Benelli_M4_C::GetDefaultObj()
{
	static class APrimary_Benelli_M4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_Benelli_M4_C*>(APrimary_Benelli_M4_C::StaticClass()->DefaultObject);

	return Default;
}

}


