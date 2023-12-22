#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoN_Farm_Audio.RoN_Farm_Audio_C
// (Actor)

class UClass* ARoN_Farm_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoN_Farm_Audio_C");

	return Clss;
}


// RoN_Farm_Audio_C RoN_Farm_Audio.Default__RoN_Farm_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoN_Farm_Audio_C* ARoN_Farm_Audio_C::GetDefaultObj()
{
	static class ARoN_Farm_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoN_Farm_Audio_C*>(ARoN_Farm_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


