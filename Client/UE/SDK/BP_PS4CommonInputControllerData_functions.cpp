#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PS4CommonInputControllerData.BP_PS4CommonInputControllerData_C
// (None)

class UClass* UBP_PS4CommonInputControllerData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PS4CommonInputControllerData_C");

	return Clss;
}


// BP_PS4CommonInputControllerData_C BP_PS4CommonInputControllerData.Default__BP_PS4CommonInputControllerData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PS4CommonInputControllerData_C* UBP_PS4CommonInputControllerData_C::GetDefaultObj()
{
	static class UBP_PS4CommonInputControllerData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PS4CommonInputControllerData_C*>(UBP_PS4CommonInputControllerData_C::StaticClass()->DefaultObject);

	return Default;
}

}


