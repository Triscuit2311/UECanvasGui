#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_GPNVG.Helmet_GPNVG_C
// (Actor)

class UClass* AHelmet_GPNVG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_GPNVG_C");

	return Clss;
}


// Helmet_GPNVG_C Helmet_GPNVG.Default__Helmet_GPNVG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_GPNVG_C* AHelmet_GPNVG_C::GetDefaultObj()
{
	static class AHelmet_GPNVG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_GPNVG_C*>(AHelmet_GPNVG_C::StaticClass()->DefaultObject);

	return Default;
}

}


