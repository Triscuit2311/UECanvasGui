#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_M76.Primary_M76_C
// (Actor)

class UClass* APrimary_M76_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_M76_C");

	return Clss;
}


// Primary_M76_C Primary_M76.Default__Primary_M76_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_M76_C* APrimary_M76_C::GetDefaultObj()
{
	static class APrimary_M76_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_M76_C*>(APrimary_M76_C::StaticClass()->DefaultObject);

	return Default;
}

}


