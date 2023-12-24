#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_W870LL.Primary_W870LL_C
// (Actor)

class UClass* APrimary_W870LL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_W870LL_C");

	return Clss;
}


// Primary_W870LL_C Primary_W870LL.Default__Primary_W870LL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_W870LL_C* APrimary_W870LL_C::GetDefaultObj()
{
	static class APrimary_W870LL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_W870LL_C*>(APrimary_W870LL_C::StaticClass()->DefaultObject);

	return Default;
}

}


