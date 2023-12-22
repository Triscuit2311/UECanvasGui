#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PS5CommonInputControllerData.BP_PS5CommonInputControllerData_C
// (None)

class UClass* UBP_PS5CommonInputControllerData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PS5CommonInputControllerData_C");

	return Clss;
}


// BP_PS5CommonInputControllerData_C BP_PS5CommonInputControllerData.Default__BP_PS5CommonInputControllerData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PS5CommonInputControllerData_C* UBP_PS5CommonInputControllerData_C::GetDefaultObj()
{
	static class UBP_PS5CommonInputControllerData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PS5CommonInputControllerData_C*>(UBP_PS5CommonInputControllerData_C::StaticClass()->DefaultObject);

	return Default;
}

}


