#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Pepperball.Projectile_Pepperball_C
// (Actor)

class UClass* AProjectile_Pepperball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Pepperball_C");

	return Clss;
}


// Projectile_Pepperball_C Projectile_Pepperball.Default__Projectile_Pepperball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Pepperball_C* AProjectile_Pepperball_C::GetDefaultObj()
{
	static class AProjectile_Pepperball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Pepperball_C*>(AProjectile_Pepperball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Pepperball.Projectile_Pepperball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_Pepperball_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Pepperball_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_Pepperball.Projectile_Pepperball_C.ExecuteUbergraph_Projectile_Pepperball
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Pepperball_C::ExecuteUbergraph_Projectile_Pepperball(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Pepperball_C", "ExecuteUbergraph_Projectile_Pepperball");

	Params::AProjectile_Pepperball_C_ExecuteUbergraph_Projectile_Pepperball_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


