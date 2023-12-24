#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BindConflictModal.W_BindConflictModal_C
// (None)

class UClass* UW_BindConflictModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BindConflictModal_C");

	return Clss;
}


// W_BindConflictModal_C W_BindConflictModal.Default__W_BindConflictModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BindConflictModal_C* UW_BindConflictModal_C::GetDefaultObj()
{
	static class UW_BindConflictModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BindConflictModal_C*>(UW_BindConflictModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BindConflictModal.W_BindConflictModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_BindConflictModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BindConflictModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BindConflictModal.W_BindConflictModal_C.ExecuteUbergraph_W_BindConflictModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BindConflictModal_C::ExecuteUbergraph_W_BindConflictModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BindConflictModal_C", "ExecuteUbergraph_W_BindConflictModal");

	Params::UW_BindConflictModal_C_ExecuteUbergraph_W_BindConflictModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


