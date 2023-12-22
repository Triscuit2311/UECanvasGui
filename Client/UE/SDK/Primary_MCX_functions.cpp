#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MCX.Primary_MCX_C
// (Actor)

class UClass* APrimary_MCX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MCX_C");

	return Clss;
}


// Primary_MCX_C Primary_MCX.Default__Primary_MCX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MCX_C* APrimary_MCX_C::GetDefaultObj()
{
	static class APrimary_MCX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MCX_C*>(APrimary_MCX_C::StaticClass()->DefaultObject);

	return Default;
}

}


