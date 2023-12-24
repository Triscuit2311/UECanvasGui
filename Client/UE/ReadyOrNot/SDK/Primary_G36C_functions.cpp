#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_G36C.Primary_G36C_C
// (Actor)

class UClass* APrimary_G36C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_G36C_C");

	return Clss;
}


// Primary_G36C_C Primary_G36C.Default__Primary_G36C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_G36C_C* APrimary_G36C_C::GetDefaultObj()
{
	static class APrimary_G36C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_G36C_C*>(APrimary_G36C_C::StaticClass()->DefaultObject);

	return Default;
}

}


