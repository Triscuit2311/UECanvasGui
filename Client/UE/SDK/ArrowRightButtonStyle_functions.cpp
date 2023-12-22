#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowRightButtonStyle.ArrowRightButtonStyle_C
// (None)

class UClass* UArrowRightButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowRightButtonStyle_C");

	return Clss;
}


// ArrowRightButtonStyle_C ArrowRightButtonStyle.Default__ArrowRightButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArrowRightButtonStyle_C* UArrowRightButtonStyle_C::GetDefaultObj()
{
	static class UArrowRightButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArrowRightButtonStyle_C*>(UArrowRightButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


