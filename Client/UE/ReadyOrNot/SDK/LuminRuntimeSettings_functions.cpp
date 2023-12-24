#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LuminRuntimeSettings.LuminRuntimeSettings
// (None)

class UClass* ULuminRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminRuntimeSettings");

	return Clss;
}


// LuminRuntimeSettings LuminRuntimeSettings.Default__LuminRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminRuntimeSettings* ULuminRuntimeSettings::GetDefaultObj()
{
	static class ULuminRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminRuntimeSettings*>(ULuminRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}

}


