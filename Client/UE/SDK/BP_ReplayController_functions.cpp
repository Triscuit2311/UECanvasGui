#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReplayController.BP_ReplayController_C
// (Actor, PlayerController)

class UClass* ABP_ReplayController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReplayController_C");

	return Clss;
}


// BP_ReplayController_C BP_ReplayController.Default__BP_ReplayController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReplayController_C* ABP_ReplayController_C::GetDefaultObj()
{
	static class ABP_ReplayController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReplayController_C*>(ABP_ReplayController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReplayController.BP_ReplayController_C.InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ReplayController_C::InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3");

	Params::ABP_ReplayController_C_InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplayController.BP_ReplayController_C.InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ReplayController_C::InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2");

	Params::ABP_ReplayController_C_InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplayController.BP_ReplayController_C.InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ReplayController_C::InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1");

	Params::ABP_ReplayController_C_InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplayController.BP_ReplayController_C.InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ReplayController_C::InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0");

	Params::ABP_ReplayController_C_InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplayController.BP_ReplayController_C.ToggleReplayHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReplayController_C::ToggleReplayHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "ToggleReplayHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReplayController.BP_ReplayController_C.OnPauseMenuClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ReplayController_C::OnPauseMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "OnPauseMenuClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReplayController.BP_ReplayController_C.ExecuteUbergraph_BP_ReplayController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ReplayController_C*      K2Node_DynamicCast_AsBP_Replay_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ReplayController_C*      K2Node_DynamicCast_AsBP_Replay_Controller_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// class UW_ReplayControls_C*         K2Node_DynamicCast_AsW_Replay_Controls                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayControls_C*         K2Node_DynamicCast_AsW_Replay_Controls_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayControls_C*         K2Node_DynamicCast_AsW_Replay_Controls_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayControls_C*         K2Node_DynamicCast_AsW_Replay_Controls_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReplayController_C::ExecuteUbergraph_BP_ReplayController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, const struct FKey& K2Node_InputActionEvent_Key_3, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_2, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_1, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_2, bool K2Node_DynamicCast_bSuccess_4, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_3, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplayController_C", "ExecuteUbergraph_BP_ReplayController");

	Params::ABP_ReplayController_C_ExecuteUbergraph_BP_ReplayController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Replay_Controller = K2Node_DynamicCast_AsBP_Replay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Replay_Controller_1 = K2Node_DynamicCast_AsBP_Replay_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_DynamicCast_AsW_Replay_Controls = K2Node_DynamicCast_AsW_Replay_Controls;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsW_Replay_Controls_1 = K2Node_DynamicCast_AsW_Replay_Controls_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Replay_Controls_2 = K2Node_DynamicCast_AsW_Replay_Controls_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsW_Replay_Controls_3 = K2Node_DynamicCast_AsW_Replay_Controls_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


