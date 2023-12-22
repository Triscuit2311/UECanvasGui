#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Tutorial.GS_Tutorial_C
// (Actor)

class UClass* AGS_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Tutorial_C");

	return Clss;
}


// GS_Tutorial_C GS_Tutorial.Default__GS_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Tutorial_C* AGS_Tutorial_C::GetDefaultObj()
{
	static class AGS_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Tutorial_C*>(AGS_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


