#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DataSingleton.BP_DataSingleton_C
// (None)

class UClass* UBP_DataSingleton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DataSingleton_C");

	return Clss;
}


// BP_DataSingleton_C BP_DataSingleton.Default__BP_DataSingleton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DataSingleton_C* UBP_DataSingleton_C::GetDefaultObj()
{
	static class UBP_DataSingleton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DataSingleton_C*>(UBP_DataSingleton_C::StaticClass()->DefaultObject);

	return Default;
}

}


