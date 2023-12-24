#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_IllegalUnbindModal.W_IllegalUnbindModal_C
// (None)

class UClass* UW_IllegalUnbindModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_IllegalUnbindModal_C");

	return Clss;
}


// W_IllegalUnbindModal_C W_IllegalUnbindModal.Default__W_IllegalUnbindModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_IllegalUnbindModal_C* UW_IllegalUnbindModal_C::GetDefaultObj()
{
	static class UW_IllegalUnbindModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_IllegalUnbindModal_C*>(UW_IllegalUnbindModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_IllegalUnbindModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IllegalUnbindModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_IllegalUnbindModal.W_IllegalUnbindModal_C.ExecuteUbergraph_W_IllegalUnbindModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IllegalUnbindModal_C::ExecuteUbergraph_W_IllegalUnbindModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IllegalUnbindModal_C", "ExecuteUbergraph_W_IllegalUnbindModal");

	Params::UW_IllegalUnbindModal_C_ExecuteUbergraph_W_IllegalUnbindModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


