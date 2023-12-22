#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_HK416.Primary_HK416_C
// (Actor)

class UClass* APrimary_HK416_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_HK416_C");

	return Clss;
}


// Primary_HK416_C Primary_HK416.Default__Primary_HK416_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_HK416_C* APrimary_HK416_C::GetDefaultObj()
{
	static class APrimary_HK416_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_HK416_C*>(APrimary_HK416_C::StaticClass()->DefaultObject);

	return Default;
}

}


