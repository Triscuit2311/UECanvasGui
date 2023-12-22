#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SubtitlesOverlay.W_SubtitlesOverlay_C
// (None)

class UClass* UW_SubtitlesOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SubtitlesOverlay_C");

	return Clss;
}


// W_SubtitlesOverlay_C W_SubtitlesOverlay.Default__W_SubtitlesOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SubtitlesOverlay_C* UW_SubtitlesOverlay_C::GetDefaultObj()
{
	static class UW_SubtitlesOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SubtitlesOverlay_C*>(UW_SubtitlesOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SubtitlesOverlay.W_SubtitlesOverlay_C.SetSubtitlesSize
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESubtitlesSize          Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubtitlesOverlay_C::SetSubtitlesSize(enum class ESubtitlesSize Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubtitlesOverlay_C", "SetSubtitlesSize");

	Params::UW_SubtitlesOverlay_C_SetSubtitlesSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubtitlesOverlay.W_SubtitlesOverlay_C.ExecuteUbergraph_W_SubtitlesOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesSize          K2Node_Event_Size                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubtitlesOverlay_C::ExecuteUbergraph_W_SubtitlesOverlay(int32 EntryPoint, enum class ESubtitlesSize K2Node_Event_Size, enum class ESubtitlesSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubtitlesOverlay_C", "ExecuteUbergraph_W_SubtitlesOverlay");

	Params::UW_SubtitlesOverlay_C_ExecuteUbergraph_W_SubtitlesOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


