#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C
// (Actor)

class UClass* ABP_CoverLandmarkProxy_Closet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoverLandmarkProxy_Closet_C");

	return Clss;
}


// BP_CoverLandmarkProxy_Closet_C BP_CoverLandmarkProxy_Closet.Default__BP_CoverLandmarkProxy_Closet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CoverLandmarkProxy_Closet_C* ABP_CoverLandmarkProxy_Closet_C::GetDefaultObj()
{
	static class ABP_CoverLandmarkProxy_Closet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CoverLandmarkProxy_Closet_C*>(ABP_CoverLandmarkProxy_Closet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_CoverLandmarkProxy_Closet_C::CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "CanInteract");

	Params::ABP_CoverLandmarkProxy_Closet_C_CanInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteractThroughHitActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_CoverLandmarkProxy_Closet_C::CanInteractThroughHitActors(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "CanInteractThroughHitActors");

	Params::ABP_CoverLandmarkProxy_Closet_C_CanInteractThroughHitActors_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineActionText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_CoverLandmarkProxy_Closet_C::DetermineActionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DetermineActionText");

	Params::ABP_CoverLandmarkProxy_Closet_C_DetermineActionText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineAnimatedIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_CoverLandmarkProxy_Closet_C::DetermineAnimatedIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DetermineAnimatedIcon");

	Params::ABP_CoverLandmarkProxy_Closet_C_DetermineAnimatedIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineCurrentProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_CoverLandmarkProxy_Closet_C::DetermineCurrentProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DetermineCurrentProgress");

	Params::ABP_CoverLandmarkProxy_Closet_C_DetermineCurrentProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInputEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EInputEvent             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputEvent ABP_CoverLandmarkProxy_Closet_C::DetermineInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DetermineInputEvent");

	Params::ABP_CoverLandmarkProxy_Closet_C_DetermineInputEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_CoverLandmarkProxy_Closet_C::DetermineInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DetermineInteractionDistance");

	Params::ABP_CoverLandmarkProxy_Closet_C_DetermineInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.GetInteractableComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractableComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInteractableComponent* ABP_CoverLandmarkProxy_Closet_C::GetInteractableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "GetInteractableComponent");

	Params::ABP_CoverLandmarkProxy_Closet_C_GetInteractableComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnRep_bOpen
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMODParam>           Params                                                           (Edit, BlueprintVisible)
// class UWorld*                      CallFunc_GetWorldStatic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class USoundSource*                CallFunc_CreateThirdPersonSound_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::OnRep_bOpen(const TArray<struct FMODParam>& Params, class UWorld* CallFunc_GetWorldStatic_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USoundSource* CallFunc_CreateThirdPersonSound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "OnRep_bOpen");

	Params::ABP_CoverLandmarkProxy_Closet_C_OnRep_bOpen_Params Parms{};

	Parms.Params = Params;
	Parms.CallFunc_GetWorldStatic_ReturnValue = CallFunc_GetWorldStatic_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_CreateThirdPersonSound_ReturnValue = CallFunc_CreateThirdPersonSound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MoveDoor_TImeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::MoveDoor_TImeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "MoveDoor_TImeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MoveDoor_TImeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::MoveDoor_TImeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "MoveDoor_TImeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DoubleTapInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DoubleTapInteract");

	Params::ABP_CoverLandmarkProxy_Closet_C_DoubleTapInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "EndFire");

	Params::ABP_CoverLandmarkProxy_Closet_C_EndFire_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "EndInteract");

	Params::ABP_CoverLandmarkProxy_Closet_C_EndInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Fire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "Fire");

	Params::ABP_CoverLandmarkProxy_Closet_C_Fire_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MeleeInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "MeleeInteract");

	Params::ABP_CoverLandmarkProxy_Closet_C_MeleeInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusGain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "OnFocusGain");

	Params::ABP_CoverLandmarkProxy_Closet_C_OnFocusGain_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusLost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "OnFocusLost");

	Params::ABP_CoverLandmarkProxy_Closet_C_OnFocusLost_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyUse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoverLandmarkProxy_Closet_C::OnProxyUse(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "OnProxyUse");

	Params::ABP_CoverLandmarkProxy_Closet_C_OnProxyUse_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoverLandmarkProxy_Closet_C::OnProxyEnd(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "OnProxyEnd");

	Params::ABP_CoverLandmarkProxy_Closet_C_OnProxyEnd_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "ReceiveTick");

	Params::ABP_CoverLandmarkProxy_Closet_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "Interact");

	Params::ABP_CoverLandmarkProxy_Closet_C_Interact_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ToggleDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::ToggleDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "ToggleDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Server_Interact
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoverLandmarkProxy_Closet_C::Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "Server_Interact");

	Params::ABP_CoverLandmarkProxy_Closet_C_Server_Interact_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EnableProxyInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::EnableProxyInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "EnableProxyInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DisableProxyInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CoverLandmarkProxy_Closet_C::DisableProxyInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "DisableProxyInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ExecuteUbergraph_BP_CoverLandmarkProxy_Closet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_7                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActive                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_InteractInstigator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_CustomEvent_InInteractableComponent                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoverLandmarkProxy_Closet_C::ExecuteUbergraph_BP_CoverLandmarkProxy_Closet(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_7, class UInteractableComponent* K2Node_Event_InInteractableComponent_7, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_6, class UInteractableComponent* K2Node_Event_InInteractableComponent_6, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_5, class UInteractableComponent* K2Node_Event_InInteractableComponent_5, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_4, class UInteractableComponent* K2Node_Event_InInteractableComponent_4, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1, bool K2Node_Event_bIsActive, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_Event_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, class AReadyOrNotCharacter* K2Node_CustomEvent_InteractInstigator, class UInteractableComponent* K2Node_CustomEvent_InInteractableComponent, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoverLandmarkProxy_Closet_C", "ExecuteUbergraph_BP_CoverLandmarkProxy_Closet");

	Params::ABP_CoverLandmarkProxy_Closet_C_ExecuteUbergraph_BP_CoverLandmarkProxy_Closet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_InteractInstigator_7 = K2Node_Event_InteractInstigator_7;
	Parms.K2Node_Event_InInteractableComponent_7 = K2Node_Event_InInteractableComponent_7;
	Parms.K2Node_Event_InteractInstigator_6 = K2Node_Event_InteractInstigator_6;
	Parms.K2Node_Event_InInteractableComponent_6 = K2Node_Event_InInteractableComponent_6;
	Parms.K2Node_Event_InteractInstigator_5 = K2Node_Event_InteractInstigator_5;
	Parms.K2Node_Event_InInteractableComponent_5 = K2Node_Event_InInteractableComponent_5;
	Parms.K2Node_Event_InteractInstigator_4 = K2Node_Event_InteractInstigator_4;
	Parms.K2Node_Event_InInteractableComponent_4 = K2Node_Event_InInteractableComponent_4;
	Parms.K2Node_Event_InteractInstigator_3 = K2Node_Event_InteractInstigator_3;
	Parms.K2Node_Event_InInteractableComponent_3 = K2Node_Event_InInteractableComponent_3;
	Parms.K2Node_Event_InteractInstigator_2 = K2Node_Event_InteractInstigator_2;
	Parms.K2Node_Event_InInteractableComponent_2 = K2Node_Event_InInteractableComponent_2;
	Parms.K2Node_Event_InteractInstigator_1 = K2Node_Event_InteractInstigator_1;
	Parms.K2Node_Event_InInteractableComponent_1 = K2Node_Event_InInteractableComponent_1;
	Parms.K2Node_Event_bIsActive = K2Node_Event_bIsActive;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_InteractInstigator = K2Node_Event_InteractInstigator;
	Parms.K2Node_Event_InInteractableComponent = K2Node_Event_InInteractableComponent;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_CustomEvent_InteractInstigator = K2Node_CustomEvent_InteractInstigator;
	Parms.K2Node_CustomEvent_InInteractableComponent = K2Node_CustomEvent_InInteractableComponent;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


