#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ButtonPrompt.W_ButtonPrompt_C
// (None)

class UClass* UW_ButtonPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ButtonPrompt_C");

	return Clss;
}


// W_ButtonPrompt_C W_ButtonPrompt.Default__W_ButtonPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ButtonPrompt_C* UW_ButtonPrompt_C::GetDefaultObj()
{
	static class UW_ButtonPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ButtonPrompt_C*>(UW_ButtonPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ButtonPrompt.W_ButtonPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ButtonPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonPrompt_C", "PreConstruct");

	Params::UW_ButtonPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ButtonPrompt.W_ButtonPrompt_C.ExecuteUbergraph_W_ButtonPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)

void UW_ButtonPrompt_C::ExecuteUbergraph_W_ButtonPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ButtonPrompt_C", "ExecuteUbergraph_W_ButtonPrompt");

	Params::UW_ButtonPrompt_C_ExecuteUbergraph_W_ButtonPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;

	UObject::ProcessEvent(Func, &Parms);

}

}


