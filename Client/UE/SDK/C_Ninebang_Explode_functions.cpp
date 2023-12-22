#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass C_Ninebang_Explode.C_Ninebang_Explode_C
// (None)

class UClass* UC_Ninebang_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("C_Ninebang_Explode_C");

	return Clss;
}


// C_Ninebang_Explode_C C_Ninebang_Explode.Default__C_Ninebang_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UC_Ninebang_Explode_C* UC_Ninebang_Explode_C::GetDefaultObj()
{
	static class UC_Ninebang_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UC_Ninebang_Explode_C*>(UC_Ninebang_Explode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function C_Ninebang_Explode.C_Ninebang_Explode_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UC_Ninebang_Explode_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("C_Ninebang_Explode_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


