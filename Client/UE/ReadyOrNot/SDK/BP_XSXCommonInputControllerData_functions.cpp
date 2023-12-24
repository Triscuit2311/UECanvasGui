#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XSXCommonInputControllerData.BP_XSXCommonInputControllerData_C
// (None)

class UClass* UBP_XSXCommonInputControllerData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XSXCommonInputControllerData_C");

	return Clss;
}


// BP_XSXCommonInputControllerData_C BP_XSXCommonInputControllerData.Default__BP_XSXCommonInputControllerData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_XSXCommonInputControllerData_C* UBP_XSXCommonInputControllerData_C::GetDefaultObj()
{
	static class UBP_XSXCommonInputControllerData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_XSXCommonInputControllerData_C*>(UBP_XSXCommonInputControllerData_C::StaticClass()->DefaultObject);

	return Default;
}

}


