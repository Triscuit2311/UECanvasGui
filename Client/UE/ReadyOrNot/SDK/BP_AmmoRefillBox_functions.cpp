#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmmoRefillBox.BP_AmmoRefillBox_C
// (Actor)

class UClass* ABP_AmmoRefillBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmmoRefillBox_C");

	return Clss;
}


// BP_AmmoRefillBox_C BP_AmmoRefillBox.Default__BP_AmmoRefillBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmmoRefillBox_C* ABP_AmmoRefillBox_C::GetDefaultObj()
{
	static class ABP_AmmoRefillBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmmoRefillBox_C*>(ABP_AmmoRefillBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


