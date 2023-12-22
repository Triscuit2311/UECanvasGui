#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BallisticShield.BP_BallisticShield_C
// (Actor)

class UClass* ABP_BallisticShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BallisticShield_C");

	return Clss;
}


// BP_BallisticShield_C BP_BallisticShield.Default__BP_BallisticShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BallisticShield_C* ABP_BallisticShield_C::GetDefaultObj()
{
	static class ABP_BallisticShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BallisticShield_C*>(ABP_BallisticShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


