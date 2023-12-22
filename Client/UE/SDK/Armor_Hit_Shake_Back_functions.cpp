#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armor_Hit_Shake_Back.Armor_Hit_Shake_Back_C
// (None)

class UClass* UArmor_Hit_Shake_Back_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armor_Hit_Shake_Back_C");

	return Clss;
}


// Armor_Hit_Shake_Back_C Armor_Hit_Shake_Back.Default__Armor_Hit_Shake_Back_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArmor_Hit_Shake_Back_C* UArmor_Hit_Shake_Back_C::GetDefaultObj()
{
	static class UArmor_Hit_Shake_Back_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArmor_Hit_Shake_Back_C*>(UArmor_Hit_Shake_Back_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Armor_Hit_Shake_Back.Armor_Hit_Shake_Back_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArmor_Hit_Shake_Back_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Armor_Hit_Shake_Back_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


