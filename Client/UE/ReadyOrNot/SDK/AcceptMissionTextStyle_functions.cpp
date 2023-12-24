#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AcceptMissionTextStyle.AcceptMissionTextStyle_C
// (None)

class UClass* UAcceptMissionTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcceptMissionTextStyle_C");

	return Clss;
}


// AcceptMissionTextStyle_C AcceptMissionTextStyle.Default__AcceptMissionTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAcceptMissionTextStyle_C* UAcceptMissionTextStyle_C::GetDefaultObj()
{
	static class UAcceptMissionTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcceptMissionTextStyle_C*>(UAcceptMissionTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


