#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletShell.BulletShell_C
// (Actor)

class UClass* ABulletShell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletShell_C");

	return Clss;
}


// BulletShell_C BulletShell.Default__BulletShell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABulletShell_C* ABulletShell_C::GetDefaultObj()
{
	static class ABulletShell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABulletShell_C*>(ABulletShell_C::StaticClass()->DefaultObject);

	return Default;
}

}


