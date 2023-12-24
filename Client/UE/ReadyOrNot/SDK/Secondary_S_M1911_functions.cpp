#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_S_M1911.Secondary_S_M1911_C
// (Actor)

class UClass* ASecondary_S_M1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_S_M1911_C");

	return Clss;
}


// Secondary_S_M1911_C Secondary_S_M1911.Default__Secondary_S_M1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_S_M1911_C* ASecondary_S_M1911_C::GetDefaultObj()
{
	static class ASecondary_S_M1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_S_M1911_C*>(ASecondary_S_M1911_C::StaticClass()->DefaultObject);

	return Default;
}

}


