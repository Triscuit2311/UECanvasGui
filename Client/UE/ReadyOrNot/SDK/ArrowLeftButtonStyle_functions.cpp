#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowLeftButtonStyle.ArrowLeftButtonStyle_C
// (None)

class UClass* UArrowLeftButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowLeftButtonStyle_C");

	return Clss;
}


// ArrowLeftButtonStyle_C ArrowLeftButtonStyle.Default__ArrowLeftButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArrowLeftButtonStyle_C* UArrowLeftButtonStyle_C::GetDefaultObj()
{
	static class UArrowLeftButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArrowLeftButtonStyle_C*>(UArrowLeftButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


