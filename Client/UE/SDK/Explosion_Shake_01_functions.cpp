#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Explosion_Shake_01.Explosion_Shake_01_C
// (None)

class UClass* UExplosion_Shake_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Explosion_Shake_01_C");

	return Clss;
}


// Explosion_Shake_01_C Explosion_Shake_01.Default__Explosion_Shake_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosion_Shake_01_C* UExplosion_Shake_01_C::GetDefaultObj()
{
	static class UExplosion_Shake_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosion_Shake_01_C*>(UExplosion_Shake_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Explosion_Shake_01.Explosion_Shake_01_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UExplosion_Shake_01_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Explosion_Shake_01_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


