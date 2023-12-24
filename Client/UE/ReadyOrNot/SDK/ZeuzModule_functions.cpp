#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ZeuzModule.ZeuzConfig
// (None)

class UClass* UZeuzConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzConfig");

	return Clss;
}


// ZeuzConfig ZeuzModule.Default__ZeuzConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzConfig* UZeuzConfig::GetDefaultObj()
{
	static class UZeuzConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzConfig*>(UZeuzConfig::StaticClass()->DefaultObject);

	return Default;
}

}


