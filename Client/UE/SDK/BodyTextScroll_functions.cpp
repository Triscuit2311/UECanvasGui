#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyTextScroll.BodyTextScroll_C
// (None)

class UClass* UBodyTextScroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyTextScroll_C");

	return Clss;
}


// BodyTextScroll_C BodyTextScroll.Default__BodyTextScroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyTextScroll_C* UBodyTextScroll_C::GetDefaultObj()
{
	static class UBodyTextScroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyTextScroll_C*>(UBodyTextScroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


