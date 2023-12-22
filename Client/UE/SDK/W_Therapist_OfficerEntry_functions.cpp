#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C
// (None)

class UClass* UW_Therapist_OfficerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Therapist_OfficerEntry_C");

	return Clss;
}


// W_Therapist_OfficerEntry_C W_Therapist_OfficerEntry.Default__W_Therapist_OfficerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Therapist_OfficerEntry_C* UW_Therapist_OfficerEntry_C::GetDefaultObj()
{
	static class UW_Therapist_OfficerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Therapist_OfficerEntry_C*>(UW_Therapist_OfficerEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.SetCharacterInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URosterCharacter*            Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_StressPercentageAsStatus_StatusText                     (None)
// struct FSlateColor                 CallFunc_StressPercentageAsStatus_StatusColor                    (None)

void UW_Therapist_OfficerEntry_C::SetCharacterInfo(class URosterCharacter* Character, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_OfficerEntry_C", "SetCharacterInfo");

	Params::UW_Therapist_OfficerEntry_C_SetCharacterInfo_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_StressPercentageAsStatus_StatusText = CallFunc_StressPercentageAsStatus_StatusText;
	Parms.CallFunc_StressPercentageAsStatus_StatusColor = CallFunc_StressPercentageAsStatus_StatusColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Therapist_OfficerEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_OfficerEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_OfficerEntry_C::BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_OfficerEntry_C", "BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Therapist_OfficerEntry_C_BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.ExecuteUbergraph_W_Therapist_OfficerEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_OfficerEntry_C::ExecuteUbergraph_W_Therapist_OfficerEntry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_OfficerEntry_C", "ExecuteUbergraph_W_Therapist_OfficerEntry");

	Params::UW_Therapist_OfficerEntry_C_ExecuteUbergraph_W_Therapist_OfficerEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Therapist_OfficerEntry_C* Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Therapist_OfficerEntry_C::OnClicked__DelegateSignature(class UW_Therapist_OfficerEntry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Therapist_OfficerEntry_C", "OnClicked__DelegateSignature");

	Params::UW_Therapist_OfficerEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}

}


