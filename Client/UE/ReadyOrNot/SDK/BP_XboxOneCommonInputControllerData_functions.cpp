#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XboxOneCommonInputControllerData.BP_XboxOneCommonInputControllerData_C
// (None)

class UClass* UBP_XboxOneCommonInputControllerData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XboxOneCommonInputControllerData_C");

	return Clss;
}


// BP_XboxOneCommonInputControllerData_C BP_XboxOneCommonInputControllerData.Default__BP_XboxOneCommonInputControllerData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_XboxOneCommonInputControllerData_C* UBP_XboxOneCommonInputControllerData_C::GetDefaultObj()
{
	static class UBP_XboxOneCommonInputControllerData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_XboxOneCommonInputControllerData_C*>(UBP_XboxOneCommonInputControllerData_C::StaticClass()->DefaultObject);

	return Default;
}

}


