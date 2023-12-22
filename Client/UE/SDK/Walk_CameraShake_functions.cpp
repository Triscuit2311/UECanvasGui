#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Walk_CameraShake.Walk_CameraShake_C
// (None)

class UClass* UWalk_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Walk_CameraShake_C");

	return Clss;
}


// Walk_CameraShake_C Walk_CameraShake.Default__Walk_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWalk_CameraShake_C* UWalk_CameraShake_C::GetDefaultObj()
{
	static class UWalk_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWalk_CameraShake_C*>(UWalk_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


