#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleRedButtonStyle.SimpleRedButtonStyle_C
// (None)

class UClass* USimpleRedButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleRedButtonStyle_C");

	return Clss;
}


// SimpleRedButtonStyle_C SimpleRedButtonStyle.Default__SimpleRedButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleRedButtonStyle_C* USimpleRedButtonStyle_C::GetDefaultObj()
{
	static class USimpleRedButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleRedButtonStyle_C*>(USimpleRedButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


