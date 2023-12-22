#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SceneCapturePlayerCamera.SceneCapturePlayerCamera_C
// (Actor)

class UClass* ASceneCapturePlayerCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneCapturePlayerCamera_C");

	return Clss;
}


// SceneCapturePlayerCamera_C SceneCapturePlayerCamera.Default__SceneCapturePlayerCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASceneCapturePlayerCamera_C* ASceneCapturePlayerCamera_C::GetDefaultObj()
{
	static class ASceneCapturePlayerCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASceneCapturePlayerCamera_C*>(ASceneCapturePlayerCamera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASceneCapturePlayerCamera_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneCapturePlayerCamera_C", "Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABasePlayer_C*               K2Node_DynamicCast_AsBase_Player                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASceneCapturePlayerCamera_C::Start(class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneCapturePlayerCamera_C", "Start");

	Params::ASceneCapturePlayerCamera_C_Start_Params Parms{};

	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Player = K2Node_DynamicCast_AsBase_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASceneCapturePlayerCamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneCapturePlayerCamera_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SceneCapturePlayerCamera.SceneCapturePlayerCamera_C.ExecuteUbergraph_SceneCapturePlayerCamera
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneCapturePlayerCamera_C::ExecuteUbergraph_SceneCapturePlayerCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneCapturePlayerCamera_C", "ExecuteUbergraph_SceneCapturePlayerCamera");

	Params::ASceneCapturePlayerCamera_C_ExecuteUbergraph_SceneCapturePlayerCamera_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


