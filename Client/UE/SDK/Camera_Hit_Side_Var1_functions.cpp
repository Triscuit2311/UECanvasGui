#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camera_Hit_Side_Var1.Camera_Hit_Side_Var1_C
// (None)

class UClass* UCamera_Hit_Side_Var1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camera_Hit_Side_Var1_C");

	return Clss;
}


// Camera_Hit_Side_Var1_C Camera_Hit_Side_Var1.Default__Camera_Hit_Side_Var1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamera_Hit_Side_Var1_C* UCamera_Hit_Side_Var1_C::GetDefaultObj()
{
	static class UCamera_Hit_Side_Var1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamera_Hit_Side_Var1_C*>(UCamera_Hit_Side_Var1_C::StaticClass()->DefaultObject);

	return Default;
}

}


