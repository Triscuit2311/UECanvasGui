#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_COOPScorePopUp.W_COOPScorePopUp_C
// (None)

class UClass* UW_COOPScorePopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_COOPScorePopUp_C");

	return Clss;
}


// W_COOPScorePopUp_C W_COOPScorePopUp.Default__W_COOPScorePopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_COOPScorePopUp_C* UW_COOPScorePopUp_C::GetDefaultObj()
{
	static class UW_COOPScorePopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_COOPScorePopUp_C*>(UW_COOPScorePopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddScorePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InScoreText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              InCalculatedScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bGive                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_COOPScorePopUp_C::AddScorePopup(class FText InScoreText, int32 InCalculatedScore, bool bGive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPScorePopUp_C", "AddScorePopup");

	Params::UW_COOPScorePopUp_C_AddScorePopup_Params Parms{};

	Parms.InScoreText = InScoreText;
	Parms.InCalculatedScore = InCalculatedScore;
	Parms.bGive = bGive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddObjectivePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InObjectiveText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_COOPScorePopUp_C::AddObjectivePopup(class FText InObjectiveText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPScorePopUp_C", "AddObjectivePopup");

	Params::UW_COOPScorePopUp_C_AddObjectivePopup_Params Parms{};

	Parms.InObjectiveText = InObjectiveText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_COOPScorePopUp.W_COOPScorePopUp_C.ExecuteUbergraph_W_COOPScorePopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ObjectiveNotify_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InScoreText                                   (None)
// int32                              K2Node_CustomEvent_InCalculatedScore                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bGive                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InObjectiveText                               (None)
// class UW_ScoreNotify_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_COOPScorePopUp_C::ExecuteUbergraph_W_COOPScorePopUp(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_ObjectiveNotify_C* CallFunc_Create_ReturnValue, class FText K2Node_CustomEvent_InScoreText, int32 K2Node_CustomEvent_InCalculatedScore, bool K2Node_CustomEvent_bGive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class FText K2Node_CustomEvent_InObjectiveText, class UW_ScoreNotify_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPScorePopUp_C", "ExecuteUbergraph_W_COOPScorePopUp");

	Params::UW_COOPScorePopUp_C_ExecuteUbergraph_W_COOPScorePopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_InScoreText = K2Node_CustomEvent_InScoreText;
	Parms.K2Node_CustomEvent_InCalculatedScore = K2Node_CustomEvent_InCalculatedScore;
	Parms.K2Node_CustomEvent_bGive = K2Node_CustomEvent_bGive;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CustomEvent_InObjectiveText = K2Node_CustomEvent_InObjectiveText;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


