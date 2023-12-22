#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Helmet_Pumpkin.BP_Helmet_Pumpkin_C
// (Actor)

class UClass* ABP_Helmet_Pumpkin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Helmet_Pumpkin_C");

	return Clss;
}


// BP_Helmet_Pumpkin_C BP_Helmet_Pumpkin.Default__BP_Helmet_Pumpkin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Helmet_Pumpkin_C* ABP_Helmet_Pumpkin_C::GetDefaultObj()
{
	static class ABP_Helmet_Pumpkin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Helmet_Pumpkin_C*>(ABP_Helmet_Pumpkin_C::StaticClass()->DefaultObject);

	return Default;
}

}


