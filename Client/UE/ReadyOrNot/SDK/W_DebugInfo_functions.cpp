#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DebugInfo.W_DebugInfo_C
// (None)

class UClass* UW_DebugInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DebugInfo_C");

	return Clss;
}


// W_DebugInfo_C W_DebugInfo.Default__W_DebugInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DebugInfo_C* UW_DebugInfo_C::GetDefaultObj()
{
	static class UW_DebugInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DebugInfo_C*>(UW_DebugInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DebugInfo.W_DebugInfo_C.SetDebugValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DebugText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_DebugInfo_C::SetDebugValue(class FText DebugText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DebugInfo_C", "SetDebugValue");

	Params::UW_DebugInfo_C_SetDebugValue_Params Parms{};

	Parms.DebugText = DebugText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DebugInfo.W_DebugInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DebugInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DebugInfo_C", "PreConstruct");

	Params::UW_DebugInfo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DebugInfo.W_DebugInfo_C.ExecuteUbergraph_W_DebugInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DebugInfo_C::ExecuteUbergraph_W_DebugInfo(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DebugInfo_C", "ExecuteUbergraph_W_DebugInfo");

	Params::UW_DebugInfo_C_ExecuteUbergraph_W_DebugInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


