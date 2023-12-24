#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NameTextScrollStyle.NameTextScrollStyle_C
// (None)

class UClass* UNameTextScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NameTextScrollStyle_C");

	return Clss;
}


// NameTextScrollStyle_C NameTextScrollStyle.Default__NameTextScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNameTextScrollStyle_C* UNameTextScrollStyle_C::GetDefaultObj()
{
	static class UNameTextScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNameTextScrollStyle_C*>(UNameTextScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


