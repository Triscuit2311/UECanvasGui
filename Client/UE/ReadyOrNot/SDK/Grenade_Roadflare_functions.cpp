#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_Roadflare.Grenade_Roadflare_C
// (Actor)

class UClass* AGrenade_Roadflare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_Roadflare_C");

	return Clss;
}


// Grenade_Roadflare_C Grenade_Roadflare.Default__Grenade_Roadflare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_Roadflare_C* AGrenade_Roadflare_C::GetDefaultObj()
{
	static class AGrenade_Roadflare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_Roadflare_C*>(AGrenade_Roadflare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grenade_Roadflare.Grenade_Roadflare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGrenade_Roadflare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Roadflare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade_Roadflare.Grenade_Roadflare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_Roadflare_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Roadflare_C", "ReceiveTick");

	Params::AGrenade_Roadflare_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_Roadflare.Grenade_Roadflare_C.DetonateBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseGrenade*                Grenade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_Roadflare_C::DetonateBind(class ABaseGrenade* Grenade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Roadflare_C", "DetonateBind");

	Params::AGrenade_Roadflare_C_DetonateBind_Params Parms{};

	Parms.Grenade = Grenade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_Roadflare.Grenade_Roadflare_C.GrenadeTimedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGrenade_Roadflare_C::GrenadeTimedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Roadflare_C", "GrenadeTimedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenade_Roadflare.Grenade_Roadflare_C.ExecuteUbergraph_Grenade_Roadflare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseGrenade*                K2Node_CustomEvent_Grenade                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LenFlare_RoadFlare_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_Roadflare_C::ExecuteUbergraph_Grenade_Roadflare(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class ABaseGrenade* K2Node_CustomEvent_Grenade, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_LenFlare_RoadFlare_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_Roadflare_C", "ExecuteUbergraph_Grenade_Roadflare");

	Params::AGrenade_Roadflare_C_ExecuteUbergraph_Grenade_Roadflare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Grenade = K2Node_CustomEvent_Grenade;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


