#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camera_Stun_Beanbag.Camera_Stun_Beanbag_C
// (None)

class UClass* UCamera_Stun_Beanbag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camera_Stun_Beanbag_C");

	return Clss;
}


// Camera_Stun_Beanbag_C Camera_Stun_Beanbag.Default__Camera_Stun_Beanbag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamera_Stun_Beanbag_C* UCamera_Stun_Beanbag_C::GetDefaultObj()
{
	static class UCamera_Stun_Beanbag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamera_Stun_Beanbag_C*>(UCamera_Stun_Beanbag_C::StaticClass()->DefaultObject);

	return Default;
}

}


