#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerActionConsoleDecorater.PlayerActionConsoleDecorater_C
// (None)

class UClass* UPlayerActionConsoleDecorater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerActionConsoleDecorater_C");

	return Clss;
}


// PlayerActionConsoleDecorater_C PlayerActionConsoleDecorater.Default__PlayerActionConsoleDecorater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerActionConsoleDecorater_C* UPlayerActionConsoleDecorater_C::GetDefaultObj()
{
	static class UPlayerActionConsoleDecorater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerActionConsoleDecorater_C*>(UPlayerActionConsoleDecorater_C::StaticClass()->DefaultObject);

	return Default;
}

}


