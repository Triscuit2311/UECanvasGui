#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShotgunShell.ShotgunShell_C
// (Actor)

class UClass* AShotgunShell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShotgunShell_C");

	return Clss;
}


// ShotgunShell_C ShotgunShell.Default__ShotgunShell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShotgunShell_C* AShotgunShell_C::GetDefaultObj()
{
	static class AShotgunShell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShotgunShell_C*>(AShotgunShell_C::StaticClass()->DefaultObject);

	return Default;
}

}


