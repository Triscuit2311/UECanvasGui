#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionSelectAcceptButtonStyle.MissionSelectAcceptButtonStyle_C
// (None)

class UClass* UMissionSelectAcceptButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionSelectAcceptButtonStyle_C");

	return Clss;
}


// MissionSelectAcceptButtonStyle_C MissionSelectAcceptButtonStyle.Default__MissionSelectAcceptButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionSelectAcceptButtonStyle_C* UMissionSelectAcceptButtonStyle_C::GetDefaultObj()
{
	static class UMissionSelectAcceptButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionSelectAcceptButtonStyle_C*>(UMissionSelectAcceptButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


