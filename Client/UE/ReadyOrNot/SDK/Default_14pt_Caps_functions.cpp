#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default_14pt_Caps.Default_14pt_Caps_C
// (None)

class UClass* UDefault_14pt_Caps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default_14pt_Caps_C");

	return Clss;
}


// Default_14pt_Caps_C Default_14pt_Caps.Default__Default_14pt_Caps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault_14pt_Caps_C* UDefault_14pt_Caps_C::GetDefaultObj()
{
	static class UDefault_14pt_Caps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault_14pt_Caps_C*>(UDefault_14pt_Caps_C::StaticClass()->DefaultObject);

	return Default;
}

}


