#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Skin_M4Super_Olive.BP_Skin_M4Super_Olive_C
// (None)

class UClass* UBP_Skin_M4Super_Olive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Skin_M4Super_Olive_C");

	return Clss;
}


// BP_Skin_M4Super_Olive_C BP_Skin_M4Super_Olive.Default__BP_Skin_M4Super_Olive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Skin_M4Super_Olive_C* UBP_Skin_M4Super_Olive_C::GetDefaultObj()
{
	static class UBP_Skin_M4Super_Olive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Skin_M4Super_Olive_C*>(UBP_Skin_M4Super_Olive_C::StaticClass()->DefaultObject);

	return Default;
}

}


