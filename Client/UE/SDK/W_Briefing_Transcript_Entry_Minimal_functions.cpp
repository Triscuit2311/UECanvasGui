#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C
// (None)

class UClass* UW_Briefing_Transcript_Entry_Minimal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Transcript_Entry_Minimal_C");

	return Clss;
}


// W_Briefing_Transcript_Entry_Minimal_C W_Briefing_Transcript_Entry_Minimal.Default__W_Briefing_Transcript_Entry_Minimal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Transcript_Entry_Minimal_C* UW_Briefing_Transcript_Entry_Minimal_C::GetDefaultObj()
{
	static class UW_Briefing_Transcript_Entry_Minimal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Transcript_Entry_Minimal_C*>(UW_Briefing_Transcript_Entry_Minimal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Transcript_Entry_Minimal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "PreConstruct");

	Params::UW_Briefing_Transcript_Entry_Minimal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_Minimal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Transcript_Entry_Minimal_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.Reveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_Minimal_C::Reveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "Reveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_Minimal_C::SetActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "SetActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UW_Briefing_Transcript_Entry_Minimal_C::ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal");

	Params::UW_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.TranscriptEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EntryID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Transcript_Entry_Minimal_C::TranscriptEntryClicked__DelegateSignature(float EntryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_Minimal_C", "TranscriptEntryClicked__DelegateSignature");

	Params::UW_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature_Params Parms{};

	Parms.EntryID = EntryID;

	UObject::ProcessEvent(Func, &Parms);

}

}


