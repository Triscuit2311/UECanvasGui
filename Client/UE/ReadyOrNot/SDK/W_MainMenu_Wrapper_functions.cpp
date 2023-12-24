#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_Wrapper.W_MainMenu_Wrapper_C
// (None)

class UClass* UW_MainMenu_Wrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_Wrapper_C");

	return Clss;
}


// W_MainMenu_Wrapper_C W_MainMenu_Wrapper.Default__W_MainMenu_Wrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_Wrapper_C* UW_MainMenu_Wrapper_C::GetDefaultObj()
{
	static class UW_MainMenu_Wrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_Wrapper_C*>(UW_MainMenu_Wrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_Wrapper.W_MainMenu_Wrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_Wrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Wrapper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Wrapper.W_MainMenu_Wrapper_C.ExecuteUbergraph_W_MainMenu_Wrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Wrapper_C::ExecuteUbergraph_W_MainMenu_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Wrapper_C", "ExecuteUbergraph_W_MainMenu_Wrapper");

	Params::UW_MainMenu_Wrapper_C_ExecuteUbergraph_W_MainMenu_Wrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


