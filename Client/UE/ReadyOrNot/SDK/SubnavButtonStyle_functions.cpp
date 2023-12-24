#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavButtonStyle.SubnavButtonStyle_C
// (None)

class UClass* USubnavButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavButtonStyle_C");

	return Clss;
}


// SubnavButtonStyle_C SubnavButtonStyle.Default__SubnavButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavButtonStyle_C* USubnavButtonStyle_C::GetDefaultObj()
{
	static class USubnavButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavButtonStyle_C*>(USubnavButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


