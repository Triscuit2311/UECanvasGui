#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DropdownOptionButtonStyle.DropdownOptionButtonStyle_C
// (None)

class UClass* UDropdownOptionButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DropdownOptionButtonStyle_C");

	return Clss;
}


// DropdownOptionButtonStyle_C DropdownOptionButtonStyle.Default__DropdownOptionButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDropdownOptionButtonStyle_C* UDropdownOptionButtonStyle_C::GetDefaultObj()
{
	static class UDropdownOptionButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropdownOptionButtonStyle_C*>(UDropdownOptionButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


