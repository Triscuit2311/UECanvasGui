#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BreachPointSelectButtonStyle.BreachPointSelectButtonStyle_C
// (None)

class UClass* UBreachPointSelectButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BreachPointSelectButtonStyle_C");

	return Clss;
}


// BreachPointSelectButtonStyle_C BreachPointSelectButtonStyle.Default__BreachPointSelectButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBreachPointSelectButtonStyle_C* UBreachPointSelectButtonStyle_C::GetDefaultObj()
{
	static class UBreachPointSelectButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBreachPointSelectButtonStyle_C*>(UBreachPointSelectButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


