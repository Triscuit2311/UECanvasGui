#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TutorialMissionButton.W_TutorialMissionButton_C
// (None)

class UClass* UW_TutorialMissionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TutorialMissionButton_C");

	return Clss;
}


// W_TutorialMissionButton_C W_TutorialMissionButton.Default__W_TutorialMissionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TutorialMissionButton_C* UW_TutorialMissionButton_C::GetDefaultObj()
{
	static class UW_TutorialMissionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TutorialMissionButton_C*>(UW_TutorialMissionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TutorialMissionButton.W_TutorialMissionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TutorialMissionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMissionButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMissionButton.W_TutorialMissionButton_C.UpdateTutorialMissionData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TutorialMissionButton_C::UpdateTutorialMissionData(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMissionButton_C", "UpdateTutorialMissionData");

	Params::UW_TutorialMissionButton_C_UpdateTutorialMissionData_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TutorialMissionButton.W_TutorialMissionButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TutorialMissionButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMissionButton_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMissionButton.W_TutorialMissionButton_C.ExecuteUbergraph_W_TutorialMissionButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATutorialGS*                 K2Node_DynamicCast_AsTutorial_GS                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_CustomEvent_CallingButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TutorialMissionButton_C::ExecuteUbergraph_W_TutorialMissionButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATutorialGS* K2Node_DynamicCast_AsTutorial_GS, bool K2Node_DynamicCast_bSuccess, class UW_StandardButton_C* K2Node_CustomEvent_CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMissionButton_C", "ExecuteUbergraph_W_TutorialMissionButton");

	Params::UW_TutorialMissionButton_C_ExecuteUbergraph_W_TutorialMissionButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTutorial_GS = K2Node_DynamicCast_AsTutorial_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_CallingButton = K2Node_CustomEvent_CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


