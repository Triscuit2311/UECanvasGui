#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CommandInterface.W_CommandInterface_C
// (None)

class UClass* UW_CommandInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CommandInterface_C");

	return Clss;
}


// W_CommandInterface_C W_CommandInterface.Default__W_CommandInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CommandInterface_C* UW_CommandInterface_C::GetDefaultObj()
{
	static class UW_CommandInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CommandInterface_C*>(UW_CommandInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CommandInterface.W_CommandInterface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CommandInterface_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandInterface_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandInterface.W_CommandInterface_C.ExecuteUbergraph_W_CommandInterface
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandInterface_C::ExecuteUbergraph_W_CommandInterface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandInterface_C", "ExecuteUbergraph_W_CommandInterface");

	Params::UW_CommandInterface_C_ExecuteUbergraph_W_CommandInterface_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


