#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SR16.Primary_SR16_C
// (Actor)

class UClass* APrimary_SR16_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SR16_C");

	return Clss;
}


// Primary_SR16_C Primary_SR16.Default__Primary_SR16_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SR16_C* APrimary_SR16_C::GetDefaultObj()
{
	static class APrimary_SR16_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SR16_C*>(APrimary_SR16_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_SR16.Primary_SR16_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_SR16_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SR16_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SR16.Primary_SR16_C.ExecuteUbergraph_Primary_SR16
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_SR16_C::ExecuteUbergraph_Primary_SR16(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SR16_C", "ExecuteUbergraph_Primary_SR16");

	Params::APrimary_SR16_C_ExecuteUbergraph_Primary_SR16_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


