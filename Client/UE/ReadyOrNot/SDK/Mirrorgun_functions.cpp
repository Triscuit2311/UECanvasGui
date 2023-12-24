#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mirrorgun.Mirrorgun_C
// (Actor)

class UClass* AMirrorgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mirrorgun_C");

	return Clss;
}


// Mirrorgun_C Mirrorgun.Default__Mirrorgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMirrorgun_C* AMirrorgun_C::GetDefaultObj()
{
	static class AMirrorgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMirrorgun_C*>(AMirrorgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


