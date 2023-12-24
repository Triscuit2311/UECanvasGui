#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LauncherProjectile_Base.LauncherProjectile_Base_C
// (Actor)

class UClass* ALauncherProjectile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LauncherProjectile_Base_C");

	return Clss;
}


// LauncherProjectile_Base_C LauncherProjectile_Base.Default__LauncherProjectile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALauncherProjectile_Base_C* ALauncherProjectile_Base_C::GetDefaultObj()
{
	static class ALauncherProjectile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALauncherProjectile_Base_C*>(ALauncherProjectile_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


