#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AudioControlButtonStyle.AudioControlButtonStyle_C
// (None)

class UClass* UAudioControlButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioControlButtonStyle_C");

	return Clss;
}


// AudioControlButtonStyle_C AudioControlButtonStyle.Default__AudioControlButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAudioControlButtonStyle_C* UAudioControlButtonStyle_C::GetDefaultObj()
{
	static class UAudioControlButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioControlButtonStyle_C*>(UAudioControlButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


