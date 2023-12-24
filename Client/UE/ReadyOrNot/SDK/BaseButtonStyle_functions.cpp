#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButtonStyle.BaseButtonStyle_C
// (None)

class UClass* UBaseButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButtonStyle_C");

	return Clss;
}


// BaseButtonStyle_C BaseButtonStyle.Default__BaseButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButtonStyle_C* UBaseButtonStyle_C::GetDefaultObj()
{
	static class UBaseButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButtonStyle_C*>(UBaseButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


