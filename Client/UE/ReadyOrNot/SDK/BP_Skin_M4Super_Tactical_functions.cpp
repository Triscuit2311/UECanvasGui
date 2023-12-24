#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Skin_M4Super_Tactical.BP_Skin_M4Super_Tactical_C
// (None)

class UClass* UBP_Skin_M4Super_Tactical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Skin_M4Super_Tactical_C");

	return Clss;
}


// BP_Skin_M4Super_Tactical_C BP_Skin_M4Super_Tactical.Default__BP_Skin_M4Super_Tactical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Skin_M4Super_Tactical_C* UBP_Skin_M4Super_Tactical_C::GetDefaultObj()
{
	static class UBP_Skin_M4Super_Tactical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Skin_M4Super_Tactical_C*>(UBP_Skin_M4Super_Tactical_C::StaticClass()->DefaultObject);

	return Default;
}

}


