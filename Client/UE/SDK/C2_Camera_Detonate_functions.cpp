#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C2_Camera_Detonate.C2_Camera_Detonate_C
// (None)

class UClass* UC2_Camera_Detonate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C2_Camera_Detonate_C");

	return Clss;
}


// C2_Camera_Detonate_C C2_Camera_Detonate.Default__C2_Camera_Detonate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC2_Camera_Detonate_C* UC2_Camera_Detonate_C::GetDefaultObj()
{
	static class UC2_Camera_Detonate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC2_Camera_Detonate_C*>(UC2_Camera_Detonate_C::StaticClass()->DefaultObject);

	return Default;
}

}


