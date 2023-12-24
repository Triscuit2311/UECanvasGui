#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BugReporterMenu.W_BugReporterMenu_C
// (None)

class UClass* UW_BugReporterMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BugReporterMenu_C");

	return Clss;
}


// W_BugReporterMenu_C W_BugReporterMenu.Default__W_BugReporterMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BugReporterMenu_C* UW_BugReporterMenu_C::GetDefaultObj()
{
	static class UW_BugReporterMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BugReporterMenu_C*>(UW_BugReporterMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BugReporterMenu.W_BugReporterMenu_C.GetOkButtonEnabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_BugReporterMenu_C::GetOkButtonEnabled(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BugReporterMenu_C", "GetOkButtonEnabled");

	Params::UW_BugReporterMenu_C_GetOkButtonEnabled_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BugReporterMenu_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BugReporterMenu_C", "BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_BugReporterMenu_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BugReporterMenu_C::BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BugReporterMenu_C", "BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_BugReporterMenu_C_BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BugReporterMenu.W_BugReporterMenu_C.ExecuteUbergraph_W_BugReporterMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentOptionAsString_OptionAsString                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PostBugReport_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BugReporterMenu_C::ExecuteUbergraph_W_BugReporterMenu(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_GetCurrentOptionAsString_OptionAsString, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PostBugReport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BugReporterMenu_C", "ExecuteUbergraph_W_BugReporterMenu");

	Params::UW_BugReporterMenu_C_ExecuteUbergraph_W_BugReporterMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetCurrentOptionAsString_OptionAsString = CallFunc_GetCurrentOptionAsString_OptionAsString;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PostBugReport_ReturnValue = CallFunc_PostBugReport_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


