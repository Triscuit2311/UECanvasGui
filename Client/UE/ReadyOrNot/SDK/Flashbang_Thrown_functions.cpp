#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Flashbang_Thrown.Flashbang_Thrown_C
// (Actor)

class UClass* AFlashbang_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flashbang_Thrown_C");

	return Clss;
}


// Flashbang_Thrown_C Flashbang_Thrown.Default__Flashbang_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlashbang_Thrown_C* AFlashbang_Thrown_C::GetDefaultObj()
{
	static class AFlashbang_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlashbang_Thrown_C*>(AFlashbang_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


