#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TabDarkButtonStyle.TabDarkButtonStyle_C
// (None)

class UClass* UTabDarkButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabDarkButtonStyle_C");

	return Clss;
}


// TabDarkButtonStyle_C TabDarkButtonStyle.Default__TabDarkButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabDarkButtonStyle_C* UTabDarkButtonStyle_C::GetDefaultObj()
{
	static class UTabDarkButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabDarkButtonStyle_C*>(UTabDarkButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


