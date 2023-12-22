#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_Gasmask_V2.Helmet_Gasmask_V2_C
// (Actor)

class UClass* AHelmet_Gasmask_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_Gasmask_V2_C");

	return Clss;
}


// Helmet_Gasmask_V2_C Helmet_Gasmask_V2.Default__Helmet_Gasmask_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_Gasmask_V2_C* AHelmet_Gasmask_V2_C::GetDefaultObj()
{
	static class AHelmet_Gasmask_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_Gasmask_V2_C*>(AHelmet_Gasmask_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


