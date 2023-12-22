#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DropdownButtonStyle.DropdownButtonStyle_C
// (None)

class UClass* UDropdownButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DropdownButtonStyle_C");

	return Clss;
}


// DropdownButtonStyle_C DropdownButtonStyle.Default__DropdownButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDropdownButtonStyle_C* UDropdownButtonStyle_C::GetDefaultObj()
{
	static class UDropdownButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropdownButtonStyle_C*>(UDropdownButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


