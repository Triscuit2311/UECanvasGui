#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Skin_AllGuns_FactorySkin.BP_Skin_AllGuns_FactorySkin_C
// (None)

class UClass* UBP_Skin_AllGuns_FactorySkin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Skin_AllGuns_FactorySkin_C");

	return Clss;
}


// BP_Skin_AllGuns_FactorySkin_C BP_Skin_AllGuns_FactorySkin.Default__BP_Skin_AllGuns_FactorySkin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Skin_AllGuns_FactorySkin_C* UBP_Skin_AllGuns_FactorySkin_C::GetDefaultObj()
{
	static class UBP_Skin_AllGuns_FactorySkin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Skin_AllGuns_FactorySkin_C*>(UBP_Skin_AllGuns_FactorySkin_C::StaticClass()->DefaultObject);

	return Default;
}

}


