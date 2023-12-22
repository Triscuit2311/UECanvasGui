#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TutorialMessageEntry.W_TutorialMessageEntry_C
// (None)

class UClass* UW_TutorialMessageEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TutorialMessageEntry_C");

	return Clss;
}


// W_TutorialMessageEntry_C W_TutorialMessageEntry.Default__W_TutorialMessageEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TutorialMessageEntry_C* UW_TutorialMessageEntry_C::GetDefaultObj()
{
	static class UW_TutorialMessageEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TutorialMessageEntry_C*>(UW_TutorialMessageEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TutorialMessageEntry.W_TutorialMessageEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TutorialMessageEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessageEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMessageEntry.W_TutorialMessageEntry_C.ExecuteUbergraph_W_TutorialMessageEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TutorialMessageEntry_C::ExecuteUbergraph_W_TutorialMessageEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessageEntry_C", "ExecuteUbergraph_W_TutorialMessageEntry");

	Params::UW_TutorialMessageEntry_C_ExecuteUbergraph_W_TutorialMessageEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


