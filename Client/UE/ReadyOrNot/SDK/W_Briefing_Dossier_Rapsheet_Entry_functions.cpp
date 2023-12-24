#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C
// (None)

class UClass* UW_Briefing_Dossier_Rapsheet_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Dossier_Rapsheet_Entry_C");

	return Clss;
}


// W_Briefing_Dossier_Rapsheet_Entry_C W_Briefing_Dossier_Rapsheet_Entry.Default__W_Briefing_Dossier_Rapsheet_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Dossier_Rapsheet_Entry_C* UW_Briefing_Dossier_Rapsheet_Entry_C::GetDefaultObj()
{
	static class UW_Briefing_Dossier_Rapsheet_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Dossier_Rapsheet_Entry_C*>(UW_Briefing_Dossier_Rapsheet_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Dossier_Rapsheet_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_Entry_C", "PreConstruct");

	Params::UW_Briefing_Dossier_Rapsheet_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Dossier_Rapsheet_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Reveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Dossier_Rapsheet_Entry_C::Reveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_Entry_C", "Reveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Dossier_Rapsheet_Entry_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_Entry_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Dossier_Rapsheet_Entry_C::ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_Entry_C", "ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry");

	Params::UW_Briefing_Dossier_Rapsheet_Entry_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


