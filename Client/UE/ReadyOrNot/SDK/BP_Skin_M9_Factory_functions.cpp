#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Skin_M9_Factory.BP_Skin_M9_Factory_C
// (None)

class UClass* UBP_Skin_M9_Factory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Skin_M9_Factory_C");

	return Clss;
}


// BP_Skin_M9_Factory_C BP_Skin_M9_Factory.Default__BP_Skin_M9_Factory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Skin_M9_Factory_C* UBP_Skin_M9_Factory_C::GetDefaultObj()
{
	static class UBP_Skin_M9_Factory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Skin_M9_Factory_C*>(UBP_Skin_M9_Factory_C::StaticClass()->DefaultObject);

	return Default;
}

}


