#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_Bio.W_Roster_Bio_C
// (None)

class UClass* UW_Roster_Bio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_Bio_C");

	return Clss;
}


// W_Roster_Bio_C W_Roster_Bio.Default__W_Roster_Bio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_Bio_C* UW_Roster_Bio_C::GetDefaultObj()
{
	static class UW_Roster_Bio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_Bio_C*>(UW_Roster_Bio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_Bio.W_Roster_Bio_C.SetBioText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BioText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Roster_Bio_C::SetBioText(class FText BioText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Bio_C", "SetBioText");

	Params::UW_Roster_Bio_C_SetBioText_Params Parms{};

	Parms.BioText = BioText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Bio.W_Roster_Bio_C.ExecuteUbergraph_W_Roster_Bio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_BioText                                       (None)

void UW_Roster_Bio_C::ExecuteUbergraph_W_Roster_Bio(int32 EntryPoint, class FText K2Node_CustomEvent_BioText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Bio_C", "ExecuteUbergraph_W_Roster_Bio");

	Params::UW_Roster_Bio_C_ExecuteUbergraph_W_Roster_Bio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BioText = K2Node_CustomEvent_BioText;

	UObject::ProcessEvent(Func, &Parms);

}

}


