#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_VKS_V2.Primary_VKS_V2_C
// (Actor)

class UClass* APrimary_VKS_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_VKS_V2_C");

	return Clss;
}


// Primary_VKS_V2_C Primary_VKS_V2.Default__Primary_VKS_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_VKS_V2_C* APrimary_VKS_V2_C::GetDefaultObj()
{
	static class APrimary_VKS_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_VKS_V2_C*>(APrimary_VKS_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


