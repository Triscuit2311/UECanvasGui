#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveSelectButtonStyle.SaveSelectButtonStyle_C
// (None)

class UClass* USaveSelectButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveSelectButtonStyle_C");

	return Clss;
}


// SaveSelectButtonStyle_C SaveSelectButtonStyle.Default__SaveSelectButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveSelectButtonStyle_C* USaveSelectButtonStyle_C::GetDefaultObj()
{
	static class USaveSelectButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveSelectButtonStyle_C*>(USaveSelectButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


