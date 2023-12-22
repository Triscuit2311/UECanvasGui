#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLensFlare.BaseLensFlare_C
// (Actor)

class UClass* ABaseLensFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLensFlare_C");

	return Clss;
}


// BaseLensFlare_C BaseLensFlare.Default__BaseLensFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseLensFlare_C* ABaseLensFlare_C::GetDefaultObj()
{
	static class ABaseLensFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseLensFlare_C*>(ABaseLensFlare_C::StaticClass()->DefaultObject);

	return Default;
}

}


