#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Keycard.BP_Keycard_C
// (Actor)

class UClass* ABP_Keycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Keycard_C");

	return Clss;
}


// BP_Keycard_C BP_Keycard.Default__BP_Keycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Keycard_C* ABP_Keycard_C::GetDefaultObj()
{
	static class ABP_Keycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Keycard_C*>(ABP_Keycard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Keycard.BP_Keycard_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Keycard_C::CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "CanInteract");

	Params::ABP_Keycard_C_CanInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.CanInteractThroughHitActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Keycard_C::CanInteractThroughHitActors(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "CanInteractThroughHitActors");

	Params::ABP_Keycard_C_CanInteractThroughHitActors_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DetermineActionText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_Keycard_C::DetermineActionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DetermineActionText");

	Params::ABP_Keycard_C_DetermineActionText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DetermineAnimatedIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_Keycard_C::DetermineAnimatedIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DetermineAnimatedIcon");

	Params::ABP_Keycard_C_DetermineAnimatedIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DetermineCurrentProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Keycard_C::DetermineCurrentProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DetermineCurrentProgress");

	Params::ABP_Keycard_C_DetermineCurrentProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DetermineInputEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EInputEvent             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputEvent ABP_Keycard_C::DetermineInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DetermineInputEvent");

	Params::ABP_Keycard_C_DetermineInputEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DetermineInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Keycard_C::DetermineInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DetermineInteractionDistance");

	Params::ABP_Keycard_C_DetermineInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.GetInteractableComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractableComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInteractableComponent* ABP_Keycard_C::GetInteractableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "GetInteractableComponent");

	Params::ABP_Keycard_C_GetInteractableComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keycard.BP_Keycard_C.DoubleTapInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "DoubleTapInteract");

	Params::ABP_Keycard_C_DoubleTapInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.EndFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "EndFire");

	Params::ABP_Keycard_C_EndFire_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.EndInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "EndInteract");

	Params::ABP_Keycard_C_EndInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.Fire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "Fire");

	Params::ABP_Keycard_C_Fire_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.MeleeInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "MeleeInteract");

	Params::ABP_Keycard_C_MeleeInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.OnFocusGain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "OnFocusGain");

	Params::ABP_Keycard_C_OnFocusGain_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.OnFocusLost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "OnFocusLost");

	Params::ABP_Keycard_C_OnFocusLost_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Keycard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Keycard.BP_Keycard_C.Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Keycard_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "Interact");

	Params::ABP_Keycard_C_Interact_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keycard.BP_Keycard_C.ExecuteUbergraph_BP_Keycard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Keycard_C::ExecuteUbergraph_BP_Keycard(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_7, class UInteractableComponent* K2Node_Event_InInteractableComponent_7, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_6, class UInteractableComponent* K2Node_Event_InInteractableComponent_6, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_5, class UInteractableComponent* K2Node_Event_InInteractableComponent_5, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_4, class UInteractableComponent* K2Node_Event_InInteractableComponent_4, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keycard_C", "ExecuteUbergraph_BP_Keycard");

	Params::ABP_Keycard_C_ExecuteUbergraph_BP_Keycard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
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
	Parms.K2Node_Event_InteractInstigator = K2Node_Event_InteractInstigator;
	Parms.K2Node_Event_InInteractableComponent = K2Node_Event_InInteractableComponent;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


