#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_Generic_Fire_Shaky_MPX.C_Generic_Fire_Shaky_MPX_C
// (None)

class UClass* UC_Generic_Fire_Shaky_MPX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_Generic_Fire_Shaky_MPX_C");

	return Clss;
}


// C_Generic_Fire_Shaky_MPX_C C_Generic_Fire_Shaky_MPX.Default__C_Generic_Fire_Shaky_MPX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_Generic_Fire_Shaky_MPX_C* UC_Generic_Fire_Shaky_MPX_C::GetDefaultObj()
{
	static class UC_Generic_Fire_Shaky_MPX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_Generic_Fire_Shaky_MPX_C*>(UC_Generic_Fire_Shaky_MPX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function C_Generic_Fire_Shaky_MPX.C_Generic_Fire_Shaky_MPX_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UC_Generic_Fire_Shaky_MPX_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("C_Generic_Fire_Shaky_MPX_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


