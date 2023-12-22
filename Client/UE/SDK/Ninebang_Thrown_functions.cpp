#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ninebang_Thrown.Ninebang_Thrown_C
// (Actor)

class UClass* ANinebang_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ninebang_Thrown_C");

	return Clss;
}


// Ninebang_Thrown_C Ninebang_Thrown.Default__Ninebang_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANinebang_Thrown_C* ANinebang_Thrown_C::GetDefaultObj()
{
	static class ANinebang_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANinebang_Thrown_C*>(ANinebang_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


