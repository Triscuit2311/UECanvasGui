#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LaserLensFlare.LaserLensFlare_C
// (Actor)

class UClass* ALaserLensFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserLensFlare_C");

	return Clss;
}


// LaserLensFlare_C LaserLensFlare.Default__LaserLensFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALaserLensFlare_C* ALaserLensFlare_C::GetDefaultObj()
{
	static class ALaserLensFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALaserLensFlare_C*>(ALaserLensFlare_C::StaticClass()->DefaultObject);

	return Default;
}

}


