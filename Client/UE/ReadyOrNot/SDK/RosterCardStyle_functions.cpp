#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RosterCardStyle.RosterCardStyle_C
// (None)

class UClass* URosterCardStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RosterCardStyle_C");

	return Clss;
}


// RosterCardStyle_C RosterCardStyle.Default__RosterCardStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URosterCardStyle_C* URosterCardStyle_C::GetDefaultObj()
{
	static class URosterCardStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URosterCardStyle_C*>(URosterCardStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


