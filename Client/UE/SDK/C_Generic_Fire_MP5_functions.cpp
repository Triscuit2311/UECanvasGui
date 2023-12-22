#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_Generic_Fire_MP5.C_Generic_Fire_MP5_C
// (None)

class UClass* UC_Generic_Fire_MP5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_Generic_Fire_MP5_C");

	return Clss;
}


// C_Generic_Fire_MP5_C C_Generic_Fire_MP5.Default__C_Generic_Fire_MP5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_Generic_Fire_MP5_C* UC_Generic_Fire_MP5_C::GetDefaultObj()
{
	static class UC_Generic_Fire_MP5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_Generic_Fire_MP5_C*>(UC_Generic_Fire_MP5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function C_Generic_Fire_MP5.C_Generic_Fire_MP5_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UC_Generic_Fire_MP5_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("C_Generic_Fire_MP5_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


