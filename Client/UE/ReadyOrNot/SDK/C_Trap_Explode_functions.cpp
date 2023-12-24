#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_Trap_Explode.C_Trap_Explode_C
// (None)

class UClass* UC_Trap_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_Trap_Explode_C");

	return Clss;
}


// C_Trap_Explode_C C_Trap_Explode.Default__C_Trap_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_Trap_Explode_C* UC_Trap_Explode_C::GetDefaultObj()
{
	static class UC_Trap_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_Trap_Explode_C*>(UC_Trap_Explode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function C_Trap_Explode.C_Trap_Explode_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UC_Trap_Explode_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("C_Trap_Explode_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


