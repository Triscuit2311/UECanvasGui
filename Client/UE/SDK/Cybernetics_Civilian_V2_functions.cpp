#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cybernetics_Civilian_V2.Cybernetics_Civilian_V2_C
// (Actor, Pawn)

class UClass* ACybernetics_Civilian_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cybernetics_Civilian_V2_C");

	return Clss;
}


// Cybernetics_Civilian_V2_C Cybernetics_Civilian_V2.Default__Cybernetics_Civilian_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACybernetics_Civilian_V2_C* ACybernetics_Civilian_V2_C::GetDefaultObj()
{
	static class ACybernetics_Civilian_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACybernetics_Civilian_V2_C*>(ACybernetics_Civilian_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


