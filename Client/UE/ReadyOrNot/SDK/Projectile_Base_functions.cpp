#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Base.Projectile_Base_C
// (Actor)

class UClass* AProjectile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Base_C");

	return Clss;
}


// Projectile_Base_C Projectile_Base.Default__Projectile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Base_C* AProjectile_Base_C::GetDefaultObj()
{
	static class AProjectile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Base_C*>(AProjectile_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Base.Projectile_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Base.Projectile_Base_C.OnDeflect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FHitResult                  DeflectionHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_Base_C::OnDeflect(const struct FHitResult& DeflectionHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Base_C", "OnDeflect");

	Params::AProjectile_Base_C_OnDeflect_Params Parms{};

	Parms.DeflectionHit = DeflectionHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_Base.Projectile_Base_C.ExecuteUbergraph_Projectile_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_DeflectionHit                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_Base_C::ExecuteUbergraph_Projectile_Base(int32 EntryPoint, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FHitResult& K2Node_Event_DeflectionHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Base_C", "ExecuteUbergraph_Projectile_Base");

	Params::AProjectile_Base_C_ExecuteUbergraph_Projectile_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_Event_DeflectionHit = K2Node_Event_DeflectionHit;

	UObject::ProcessEvent(Func, &Parms);

}

}


