#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C
// (None)

class UClass* UW_PlaceholderTutorialMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlaceholderTutorialMenu_C");

	return Clss;
}


// W_PlaceholderTutorialMenu_C W_PlaceholderTutorialMenu.Default__W_PlaceholderTutorialMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlaceholderTutorialMenu_C* UW_PlaceholderTutorialMenu_C::GetDefaultObj()
{
	static class UW_PlaceholderTutorialMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlaceholderTutorialMenu_C*>(UW_PlaceholderTutorialMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.MoveToLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlaceholderTutorialMenu_C::MoveToLoadout(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlaceholderTutorialMenu_C", "MoveToLoadout");

	Params::UW_PlaceholderTutorialMenu_C_MoveToLoadout_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlaceholderTutorialMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlaceholderTutorialMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.ExecuteUbergraph_W_PlaceholderTutorialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_StandardButton_C*         K2Node_CustomEvent_CallingButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout                                   (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData                            (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGS_Tutorial_C*              K2Node_DynamicCast_AsGS_Tutorial                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_1                                 (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_1                          (None)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_2                                 (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_2                          (None)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_3                                 (None)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_4                                 (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_3                          (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_4                          (None)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_5                                 (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_5                          (None)
// struct FSavedLoadout               K2Node_MakeStruct_SavedLoadout_6                                 (None)
// struct FTutorialMissionData        K2Node_MakeStruct_TutorialMissionData_6                          (None)

void UW_PlaceholderTutorialMenu_C::ExecuteUbergraph_W_PlaceholderTutorialMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_StandardButton_C* K2Node_CustomEvent_CallingButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGS_Tutorial_C* K2Node_DynamicCast_AsGS_Tutorial, bool K2Node_DynamicCast_bSuccess, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_1, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_1, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_2, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_2, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_3, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_4, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_3, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_4, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_5, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_5, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_6, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlaceholderTutorialMenu_C", "ExecuteUbergraph_W_PlaceholderTutorialMenu");

	Params::UW_PlaceholderTutorialMenu_C_ExecuteUbergraph_W_PlaceholderTutorialMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CallingButton = K2Node_CustomEvent_CallingButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_SavedLoadout = K2Node_MakeStruct_SavedLoadout;
	Parms.K2Node_MakeStruct_TutorialMissionData = K2Node_MakeStruct_TutorialMissionData;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGS_Tutorial = K2Node_DynamicCast_AsGS_Tutorial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SavedLoadout_1 = K2Node_MakeStruct_SavedLoadout_1;
	Parms.K2Node_MakeStruct_TutorialMissionData_1 = K2Node_MakeStruct_TutorialMissionData_1;
	Parms.K2Node_MakeStruct_SavedLoadout_2 = K2Node_MakeStruct_SavedLoadout_2;
	Parms.K2Node_MakeStruct_TutorialMissionData_2 = K2Node_MakeStruct_TutorialMissionData_2;
	Parms.K2Node_MakeStruct_SavedLoadout_3 = K2Node_MakeStruct_SavedLoadout_3;
	Parms.K2Node_MakeStruct_SavedLoadout_4 = K2Node_MakeStruct_SavedLoadout_4;
	Parms.K2Node_MakeStruct_TutorialMissionData_3 = K2Node_MakeStruct_TutorialMissionData_3;
	Parms.K2Node_MakeStruct_TutorialMissionData_4 = K2Node_MakeStruct_TutorialMissionData_4;
	Parms.K2Node_MakeStruct_SavedLoadout_5 = K2Node_MakeStruct_SavedLoadout_5;
	Parms.K2Node_MakeStruct_TutorialMissionData_5 = K2Node_MakeStruct_TutorialMissionData_5;
	Parms.K2Node_MakeStruct_SavedLoadout_6 = K2Node_MakeStruct_SavedLoadout_6;
	Parms.K2Node_MakeStruct_TutorialMissionData_6 = K2Node_MakeStruct_TutorialMissionData_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


