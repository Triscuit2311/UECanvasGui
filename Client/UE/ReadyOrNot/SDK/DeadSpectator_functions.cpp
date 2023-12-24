#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeadSpectator.DeadSpectator_C
// (Actor, Pawn)

class UClass* ADeadSpectator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeadSpectator_C");

	return Clss;
}


// DeadSpectator_C DeadSpectator.Default__DeadSpectator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeadSpectator_C* ADeadSpectator_C::GetDefaultObj()
{
	static class ADeadSpectator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeadSpectator_C*>(ADeadSpectator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeadSpectator.DeadSpectator_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeadSpectator_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "ReceivePossessed");

	Params::ADeadSpectator_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadSpectator.DeadSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeadSpectator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "ReceiveTick");

	Params::ADeadSpectator_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadSpectator.DeadSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADeadSpectator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeadSpectator.DeadSpectator_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 OldController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeadSpectator_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "ReceiveUnpossessed");

	Params::ADeadSpectator_C_ReceiveUnpossessed_Params Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadSpectator.DeadSpectator_C.Client Remove HUID
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeadSpectator_C::Client_Remove_HUID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "Client Remove HUID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeadSpectator.DeadSpectator_C.CreateHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeadSpectator_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "CreateHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeadSpectator.DeadSpectator_C.Client_SpecNextPlayer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeadSpectator_C::Client_SpecNextPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "Client_SpecNextPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeadSpectator.DeadSpectator_C.ExecuteUbergraph_DeadSpectator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ReplayController_C*      K2Node_DynamicCast_AsBP_Replay_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_Event_OldController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADeadSpectator_C::ExecuteUbergraph_DeadSpectator(int32 EntryPoint, class AController* K2Node_Event_NewController, float K2Node_Event_DeltaSeconds, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, class AController* K2Node_Event_OldController, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadSpectator_C", "ExecuteUbergraph_DeadSpectator");

	Params::ADeadSpectator_C_ExecuteUbergraph_DeadSpectator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsBP_Replay_Controller = K2Node_DynamicCast_AsBP_Replay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_OldController = K2Node_Event_OldController;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


