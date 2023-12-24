#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BallisticShield_FBI.BP_BallisticShield_FBI_C
// (Actor)

class UClass* ABP_BallisticShield_FBI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BallisticShield_FBI_C");

	return Clss;
}


// BP_BallisticShield_FBI_C BP_BallisticShield_FBI.Default__BP_BallisticShield_FBI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BallisticShield_FBI_C* ABP_BallisticShield_FBI_C::GetDefaultObj()
{
	static class ABP_BallisticShield_FBI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BallisticShield_FBI_C*>(ABP_BallisticShield_FBI_C::StaticClass()->DefaultObject);

	return Default;
}

}


