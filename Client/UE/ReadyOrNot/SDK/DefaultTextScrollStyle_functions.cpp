#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultTextScrollStyle.DefaultTextScrollStyle_C
// (None)

class UClass* UDefaultTextScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultTextScrollStyle_C");

	return Clss;
}


// DefaultTextScrollStyle_C DefaultTextScrollStyle.Default__DefaultTextScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultTextScrollStyle_C* UDefaultTextScrollStyle_C::GetDefaultObj()
{
	static class UDefaultTextScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultTextScrollStyle_C*>(UDefaultTextScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


