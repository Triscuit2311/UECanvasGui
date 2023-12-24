#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_BRN180.Primary_BRN180_C
// (Actor)

class UClass* APrimary_BRN180_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_BRN180_C");

	return Clss;
}


// Primary_BRN180_C Primary_BRN180.Default__Primary_BRN180_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_BRN180_C* APrimary_BRN180_C::GetDefaultObj()
{
	static class APrimary_BRN180_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_BRN180_C*>(APrimary_BRN180_C::StaticClass()->DefaultObject);

	return Default;
}

}


