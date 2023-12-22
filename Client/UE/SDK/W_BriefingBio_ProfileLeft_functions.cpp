#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BriefingBio_ProfileLeft.W_BriefingBio_ProfileLeft_C
// (None)

class UClass* UW_BriefingBio_ProfileLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BriefingBio_ProfileLeft_C");

	return Clss;
}


// W_BriefingBio_ProfileLeft_C W_BriefingBio_ProfileLeft.Default__W_BriefingBio_ProfileLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BriefingBio_ProfileLeft_C* UW_BriefingBio_ProfileLeft_C::GetDefaultObj()
{
	static class UW_BriefingBio_ProfileLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BriefingBio_ProfileLeft_C*>(UW_BriefingBio_ProfileLeft_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BriefingBio_ProfileLeft.W_BriefingBio_ProfileLeft_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingBio_ProfileLeft_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingBio_ProfileLeft_C", "PreConstruct");

	Params::UW_BriefingBio_ProfileLeft_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BriefingBio_ProfileLeft.W_BriefingBio_ProfileLeft_C.ExecuteUbergraph_W_BriefingBio_ProfileLeft
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingBio_ProfileLeft_C::ExecuteUbergraph_W_BriefingBio_ProfileLeft(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingBio_ProfileLeft_C", "ExecuteUbergraph_W_BriefingBio_ProfileLeft");

	Params::UW_BriefingBio_ProfileLeft_C_ExecuteUbergraph_W_BriefingBio_ProfileLeft_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


