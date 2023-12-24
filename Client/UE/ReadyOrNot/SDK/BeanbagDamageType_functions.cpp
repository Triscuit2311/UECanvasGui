#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeanbagDamageType.BeanbagDamageType_C
// (None)

class UClass* UBeanbagDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeanbagDamageType_C");

	return Clss;
}


// BeanbagDamageType_C BeanbagDamageType.Default__BeanbagDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeanbagDamageType_C* UBeanbagDamageType_C::GetDefaultObj()
{
	static class UBeanbagDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeanbagDamageType_C*>(UBeanbagDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


