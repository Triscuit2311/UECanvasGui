#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DeveloperSettings.DeveloperSettings
// (None)

class UClass* UDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeveloperSettings");

	return Clss;
}


// DeveloperSettings DeveloperSettings.Default__DeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeveloperSettings* UDeveloperSettings::GetDefaultObj()
{
	static class UDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeveloperSettings*>(UDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}

}


