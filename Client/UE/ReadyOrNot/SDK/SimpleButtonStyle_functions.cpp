#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleButtonStyle.SimpleButtonStyle_C
// (None)

class UClass* USimpleButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleButtonStyle_C");

	return Clss;
}


// SimpleButtonStyle_C SimpleButtonStyle.Default__SimpleButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleButtonStyle_C* USimpleButtonStyle_C::GetDefaultObj()
{
	static class USimpleButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleButtonStyle_C*>(USimpleButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


