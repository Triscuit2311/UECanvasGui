#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// (None)

class UClass* ULightPropagationVolumeBlendable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightPropagationVolumeBlendable");

	return Clss;
}


// LightPropagationVolumeBlendable LightPropagationVolumeRuntime.Default__LightPropagationVolumeBlendable
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightPropagationVolumeBlendable* ULightPropagationVolumeBlendable::GetDefaultObj()
{
	static class ULightPropagationVolumeBlendable* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightPropagationVolumeBlendable*>(ULightPropagationVolumeBlendable::StaticClass()->DefaultObject);

	return Default;
}

}


