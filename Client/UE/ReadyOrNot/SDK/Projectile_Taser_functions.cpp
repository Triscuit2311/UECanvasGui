#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Taser.Projectile_Taser_C
// (Actor)

class UClass* AProjectile_Taser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Taser_C");

	return Clss;
}


// Projectile_Taser_C Projectile_Taser.Default__Projectile_Taser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Taser_C* AProjectile_Taser_C::GetDefaultObj()
{
	static class AProjectile_Taser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Taser_C*>(AProjectile_Taser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Taser.Projectile_Taser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_Taser_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Taser_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Taser.Projectile_Taser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_Taser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Taser_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Taser.Projectile_Taser_C.OnDeflect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FHitResult                  DeflectionHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_Taser_C::OnDeflect(const struct FHitResult& DeflectionHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Taser_C", "OnDeflect");

	Params::AProjectile_Taser_C_OnDeflect_Params Parms{};

	Parms.DeflectionHit = DeflectionHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_Taser.Projectile_Taser_C.ExecuteUbergraph_Projectile_Taser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_DeflectionHit                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_Taser_C::ExecuteUbergraph_Projectile_Taser(int32 EntryPoint, const struct FHitResult& K2Node_Event_DeflectionHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Taser_C", "ExecuteUbergraph_Projectile_Taser");

	Params::AProjectile_Taser_C_ExecuteUbergraph_Projectile_Taser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeflectionHit = K2Node_Event_DeflectionHit;

	UObject::ProcessEvent(Func, &Parms);

}

}


