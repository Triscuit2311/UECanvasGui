#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SubtitleBlock.W_SubtitleBlock_C
// (None)

class UClass* UW_SubtitleBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SubtitleBlock_C");

	return Clss;
}


// W_SubtitleBlock_C W_SubtitleBlock.Default__W_SubtitleBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SubtitleBlock_C* UW_SubtitleBlock_C::GetDefaultObj()
{
	static class UW_SubtitleBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SubtitleBlock_C*>(UW_SubtitleBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SubtitleBlock.W_SubtitleBlock_C.SetBackgroundColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubtitleBlock_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubtitleBlock_C", "SetBackgroundColor");

	Params::UW_SubtitleBlock_C_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubtitleBlock.W_SubtitleBlock_C.SetText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SubtitleBlock_C::SetText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubtitleBlock_C", "SetText");

	Params::UW_SubtitleBlock_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubtitleBlock.W_SubtitleBlock_C.ExecuteUbergraph_W_SubtitleBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)

void UW_SubtitleBlock_C::ExecuteUbergraph_W_SubtitleBlock(int32 EntryPoint, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_Event_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubtitleBlock_C", "ExecuteUbergraph_W_SubtitleBlock");

	Params::UW_SubtitleBlock_C_ExecuteUbergraph_W_SubtitleBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_Text = K2Node_Event_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


