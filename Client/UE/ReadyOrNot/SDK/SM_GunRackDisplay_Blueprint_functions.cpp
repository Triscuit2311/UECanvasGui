#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SM_GunRackDisplay_Blueprint.SM_GunRackDisplay_Blueprint_C
// (Actor)

class UClass* ASM_GunRackDisplay_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SM_GunRackDisplay_Blueprint_C");

	return Clss;
}


// SM_GunRackDisplay_Blueprint_C SM_GunRackDisplay_Blueprint.Default__SM_GunRackDisplay_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASM_GunRackDisplay_Blueprint_C* ASM_GunRackDisplay_Blueprint_C::GetDefaultObj()
{
	static class ASM_GunRackDisplay_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASM_GunRackDisplay_Blueprint_C*>(ASM_GunRackDisplay_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


