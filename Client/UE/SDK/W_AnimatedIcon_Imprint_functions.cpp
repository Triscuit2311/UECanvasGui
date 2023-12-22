#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C
// (None)

class UClass* UW_AnimatedIcon_Imprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AnimatedIcon_Imprint_C");

	return Clss;
}


// W_AnimatedIcon_Imprint_C W_AnimatedIcon_Imprint.Default__W_AnimatedIcon_Imprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AnimatedIcon_Imprint_C* UW_AnimatedIcon_Imprint_C::GetDefaultObj()
{
	static class UW_AnimatedIcon_Imprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AnimatedIcon_Imprint_C*>(UW_AnimatedIcon_Imprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_AnimatedIcon_Imprint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnimatedIcon_Imprint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AnimatedIcon_Imprint.W_AnimatedIcon_Imprint_C.ExecuteUbergraph_W_AnimatedIcon_Imprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AnimatedIcon_Imprint_C::ExecuteUbergraph_W_AnimatedIcon_Imprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnimatedIcon_Imprint_C", "ExecuteUbergraph_W_AnimatedIcon_Imprint");

	Params::UW_AnimatedIcon_Imprint_C_ExecuteUbergraph_W_AnimatedIcon_Imprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


