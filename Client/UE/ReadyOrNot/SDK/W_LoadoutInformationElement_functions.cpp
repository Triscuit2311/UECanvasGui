#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutInformationElement.W_LoadoutInformationElement_C
// (None)

class UClass* UW_LoadoutInformationElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutInformationElement_C");

	return Clss;
}


// W_LoadoutInformationElement_C W_LoadoutInformationElement.Default__W_LoadoutInformationElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutInformationElement_C* UW_LoadoutInformationElement_C::GetDefaultObj()
{
	static class UW_LoadoutInformationElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutInformationElement_C*>(UW_LoadoutInformationElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutInformationElement.W_LoadoutInformationElement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInformationElement_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationElement_C", "PreConstruct");

	Params::UW_LoadoutInformationElement_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInformationElement.W_LoadoutInformationElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutInformationElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutInformationElement.W_LoadoutInformationElement_C.ExecuteUbergraph_W_LoadoutInformationElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInformationElement_C::ExecuteUbergraph_W_LoadoutInformationElement(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationElement_C", "ExecuteUbergraph_W_LoadoutInformationElement");

	Params::UW_LoadoutInformationElement_C_ExecuteUbergraph_W_LoadoutInformationElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


