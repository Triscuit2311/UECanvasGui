#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Helmet_None.Helmet_None_C
// (Actor)

class UClass* AHelmet_None_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Helmet_None_C");

	return Clss;
}


// Helmet_None_C Helmet_None.Default__Helmet_None_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelmet_None_C* AHelmet_None_C::GetDefaultObj()
{
	static class AHelmet_None_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelmet_None_C*>(AHelmet_None_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Helmet_None.Helmet_None_C.ExecuteUbergraph_Helmet_None
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelmet_None_C::ExecuteUbergraph_Helmet_None(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Helmet_None_C", "ExecuteUbergraph_Helmet_None");

	Params::AHelmet_None_C_ExecuteUbergraph_Helmet_None_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


