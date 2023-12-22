#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_BallisticMask.Helmet_BallisticMask_C
// (Actor)

class UClass* AHelmet_BallisticMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_BallisticMask_C");

	return Clss;
}


// Helmet_BallisticMask_C Helmet_BallisticMask.Default__Helmet_BallisticMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_BallisticMask_C* AHelmet_BallisticMask_C::GetDefaultObj()
{
	static class AHelmet_BallisticMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_BallisticMask_C*>(AHelmet_BallisticMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


