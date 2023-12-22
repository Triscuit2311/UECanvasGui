#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_G19_D_Temp.Secondary_G19_D_Temp_C
// (Actor)

class UClass* ASecondary_G19_D_Temp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_G19_D_Temp_C");

	return Clss;
}


// Secondary_G19_D_Temp_C Secondary_G19_D_Temp.Default__Secondary_G19_D_Temp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_G19_D_Temp_C* ASecondary_G19_D_Temp_C::GetDefaultObj()
{
	static class ASecondary_G19_D_Temp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_G19_D_Temp_C*>(ASecondary_G19_D_Temp_C::StaticClass()->DefaultObject);

	return Default;
}

}


