#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShotgunShellPool.ShotgunShellPool_C
// (None)

class UClass* UShotgunShellPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShotgunShellPool_C");

	return Clss;
}


// ShotgunShellPool_C ShotgunShellPool.Default__ShotgunShellPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgunShellPool_C* UShotgunShellPool_C::GetDefaultObj()
{
	static class UShotgunShellPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgunShellPool_C*>(UShotgunShellPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


