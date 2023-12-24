#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Flare.Projectile_Flare_C
// (Actor)

class UClass* AProjectile_Flare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Flare_C");

	return Clss;
}


// Projectile_Flare_C Projectile_Flare.Default__Projectile_Flare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Flare_C* AProjectile_Flare_C::GetDefaultObj()
{
	static class AProjectile_Flare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Flare_C*>(AProjectile_Flare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Flare.Projectile_Flare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_Flare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Flare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Flare.Projectile_Flare_C.SpawnLensFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_Flare_C::SpawnLensFlare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Flare_C", "SpawnLensFlare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Flare.Projectile_Flare_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AProjectile_Flare_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Flare_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Flare.Projectile_Flare_C.ExecuteUbergraph_Projectile_Flare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LensFlare_FlareGun_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Flare_C::ExecuteUbergraph_Projectile_Flare(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_LensFlare_FlareGun_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Flare_C", "ExecuteUbergraph_Projectile_Flare");

	Params::AProjectile_Flare_C_ExecuteUbergraph_Projectile_Flare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


