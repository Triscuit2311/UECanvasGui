#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GenericCommonInputControllerData.BP_GenericCommonInputControllerData_C
// (None)

class UClass* UBP_GenericCommonInputControllerData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GenericCommonInputControllerData_C");

	return Clss;
}


// BP_GenericCommonInputControllerData_C BP_GenericCommonInputControllerData.Default__BP_GenericCommonInputControllerData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GenericCommonInputControllerData_C* UBP_GenericCommonInputControllerData_C::GetDefaultObj()
{
	static class UBP_GenericCommonInputControllerData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GenericCommonInputControllerData_C*>(UBP_GenericCommonInputControllerData_C::StaticClass()->DefaultObject);

	return Default;
}

}


