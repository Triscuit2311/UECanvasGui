#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// (Actor)

class UClass* AMagicLeapSharedWorldGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapSharedWorldGameMode");

	return Clss;
}


// MagicLeapSharedWorldGameMode MagicLeapSharedWorld.Default__MagicLeapSharedWorldGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AMagicLeapSharedWorldGameMode* AMagicLeapSharedWorldGameMode::GetDefaultObj()
{
	static class AMagicLeapSharedWorldGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagicLeapSharedWorldGameMode*>(AMagicLeapSharedWorldGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameMode", "SendSharedWorldDataToClients");

	Params::AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameMode", "SelectChosenOne");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameMode", "MagicLeapOnNewLocalDataFromClients__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
// (BlueprintAuthorityOnly, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapSharedWorldSharedDataNewSharedWorldData                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameMode", "DetermineSharedWorldData");

	Params::AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = std::move(Parms.NewSharedWorldData);

}


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// (Actor)

class UClass* AMagicLeapSharedWorldGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapSharedWorldGameState");

	return Clss;
}


// MagicLeapSharedWorldGameState MagicLeapSharedWorld.Default__MagicLeapSharedWorldGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class AMagicLeapSharedWorldGameState* AMagicLeapSharedWorldGameState::GetDefaultObj()
{
	static class AMagicLeapSharedWorldGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagicLeapSharedWorldGameState*>(AMagicLeapSharedWorldGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
// (Final, Native, Private)
// Parameters:

void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameState", "OnReplicate_SharedWorldData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
// (Final, Native, Private)
// Parameters:

void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameState", "OnReplicate_AlignmentTransforms");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameState", "MagicLeapSharedWorldEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldGameState", "CalculateXRCameraRootTransform");

	Params::AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// (Actor, PlayerController)

class UClass* AMagicLeapSharedWorldPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapSharedWorldPlayerController");

	return Clss;
}


// MagicLeapSharedWorldPlayerController MagicLeapSharedWorld.Default__MagicLeapSharedWorldPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AMagicLeapSharedWorldPlayerController* AMagicLeapSharedWorldPlayerController::GetDefaultObj()
{
	static class AMagicLeapSharedWorldPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagicLeapSharedWorldPlayerController*>(AMagicLeapSharedWorldPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldLocalDataLocalWorldReplicationData                                        (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "ServerSetLocalWorldData");

	Params::AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params Parms{};

	Parms.LocalWorldReplicationData = LocalWorldReplicationData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldAlignmentTransformsInAlignmentTransforms                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "ServerSetAlignmentTransforms");

	Params::AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params Parms{};

	Parms.InAlignmentTransforms = InAlignmentTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "IsChosenOne");

	Params::AMagicLeapSharedWorldPlayerController_IsChosenOne_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// bool                               bChosenOne                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "ClientSetChosenOne");

	Params::AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params Parms{};

	Parms.bChosenOne = bChosenOne;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "ClientMarkReadyForSendingLocalData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSharedWorldPlayerController", "CanSendLocalDataToServer");

	Params::AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


