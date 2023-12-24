#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Roster.BPI_Roster_C
// (None)

class UClass* IBPI_Roster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Roster_C");

	return Clss;
}


// BPI_Roster_C BPI_Roster.Default__BPI_Roster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Roster_C* IBPI_Roster_C::GetDefaultObj()
{
	static class IBPI_Roster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Roster_C*>(IBPI_Roster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Roster.BPI_Roster_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Roster_C::UpdateHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Roster_C", "UpdateHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Roster.BPI_Roster_C.UpdateCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Roster_C::UpdateCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Roster_C", "UpdateCard");



	UObject::ProcessEvent(Func, nullptr);

}

}


