#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PepperGasCloud_BP.PepperGasCloud_BP_C
// (Actor)

class UClass* APepperGasCloud_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PepperGasCloud_BP_C");

	return Clss;
}


// PepperGasCloud_BP_C PepperGasCloud_BP.Default__PepperGasCloud_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APepperGasCloud_BP_C* APepperGasCloud_BP_C::GetDefaultObj()
{
	static class APepperGasCloud_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APepperGasCloud_BP_C*>(APepperGasCloud_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


