#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MPL_Camera_Shake_Draw2.MPL_Camera_Shake_Draw2_C
// (None)

class UClass* UMPL_Camera_Shake_Draw2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MPL_Camera_Shake_Draw2_C");

	return Clss;
}


// MPL_Camera_Shake_Draw2_C MPL_Camera_Shake_Draw2.Default__MPL_Camera_Shake_Draw2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMPL_Camera_Shake_Draw2_C* UMPL_Camera_Shake_Draw2_C::GetDefaultObj()
{
	static class UMPL_Camera_Shake_Draw2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMPL_Camera_Shake_Draw2_C*>(UMPL_Camera_Shake_Draw2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MPL_Camera_Shake_Draw2.MPL_Camera_Shake_Draw2_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMPL_Camera_Shake_Draw2_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPL_Camera_Shake_Draw2_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


