#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CommonUIInputData.BP_CommonUIInputData_C
// (None)

class UClass* UBP_CommonUIInputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CommonUIInputData_C");

	return Clss;
}


// BP_CommonUIInputData_C BP_CommonUIInputData.Default__BP_CommonUIInputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CommonUIInputData_C* UBP_CommonUIInputData_C::GetDefaultObj()
{
	static class UBP_CommonUIInputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CommonUIInputData_C*>(UBP_CommonUIInputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


