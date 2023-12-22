#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Taser_Camera_Fire.Taser_Camera_Fire_C
// (None)

class UClass* UTaser_Camera_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Taser_Camera_Fire_C");

	return Clss;
}


// Taser_Camera_Fire_C Taser_Camera_Fire.Default__Taser_Camera_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTaser_Camera_Fire_C* UTaser_Camera_Fire_C::GetDefaultObj()
{
	static class UTaser_Camera_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaser_Camera_Fire_C*>(UTaser_Camera_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


