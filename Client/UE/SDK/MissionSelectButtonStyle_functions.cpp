#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionSelectButtonStyle.MissionSelectButtonStyle_C
// (None)

class UClass* UMissionSelectButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionSelectButtonStyle_C");

	return Clss;
}


// MissionSelectButtonStyle_C MissionSelectButtonStyle.Default__MissionSelectButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionSelectButtonStyle_C* UMissionSelectButtonStyle_C::GetDefaultObj()
{
	static class UMissionSelectButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionSelectButtonStyle_C*>(UMissionSelectButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


