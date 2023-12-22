#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C
// (None)

class UClass* UW_Briefing_Transcript_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Transcript_Entry_C");

	return Clss;
}


// W_Briefing_Transcript_Entry_C W_Briefing_Transcript_Entry.Default__W_Briefing_Transcript_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Transcript_Entry_C* UW_Briefing_Transcript_Entry_C::GetDefaultObj()
{
	static class UW_Briefing_Transcript_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Transcript_Entry_C*>(UW_Briefing_Transcript_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Transcript_Entry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Briefing_Transcript_Entry_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Reveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_C::Reveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "Reveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Transcript_Entry_C::SetActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "SetActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.ExecuteUbergraph_W_Briefing_Transcript_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Transcript_Entry_C::ExecuteUbergraph_W_Briefing_Transcript_Entry(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "ExecuteUbergraph_W_Briefing_Transcript_Entry");

	Params::UW_Briefing_Transcript_Entry_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.TranscriptEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EntryID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Transcript_Entry_C::TranscriptEntryClicked__DelegateSignature(float EntryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Transcript_Entry_C", "TranscriptEntryClicked__DelegateSignature");

	Params::UW_Briefing_Transcript_Entry_C_TranscriptEntryClicked__DelegateSignature_Params Parms{};

	Parms.EntryID = EntryID;

	UObject::ProcessEvent(Func, &Parms);

}

}


