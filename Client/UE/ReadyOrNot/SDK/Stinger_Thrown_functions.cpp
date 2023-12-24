#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stinger_Thrown.Stinger_Thrown_C
// (Actor)

class UClass* AStinger_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stinger_Thrown_C");

	return Clss;
}


// Stinger_Thrown_C Stinger_Thrown.Default__Stinger_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStinger_Thrown_C* AStinger_Thrown_C::GetDefaultObj()
{
	static class AStinger_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStinger_Thrown_C*>(AStinger_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


