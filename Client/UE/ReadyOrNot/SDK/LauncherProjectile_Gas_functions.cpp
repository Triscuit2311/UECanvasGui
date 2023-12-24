#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LauncherProjectile_Gas.LauncherProjectile_Gas_C
// (Actor)

class UClass* ALauncherProjectile_Gas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LauncherProjectile_Gas_C");

	return Clss;
}


// LauncherProjectile_Gas_C LauncherProjectile_Gas.Default__LauncherProjectile_Gas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALauncherProjectile_Gas_C* ALauncherProjectile_Gas_C::GetDefaultObj()
{
	static class ALauncherProjectile_Gas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALauncherProjectile_Gas_C*>(ALauncherProjectile_Gas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LauncherProjectile_Gas.LauncherProjectile_Gas_C.OnDetonate_Blueprint
// (Event, Public, BlueprintEvent)
// Parameters:

void ALauncherProjectile_Gas_C::OnDetonate_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LauncherProjectile_Gas_C", "OnDetonate_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LauncherProjectile_Gas.LauncherProjectile_Gas_C.ExecuteUbergraph_LauncherProjectile_Gas
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALauncherProjectile_Gas_C::ExecuteUbergraph_LauncherProjectile_Gas(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LauncherProjectile_Gas_C", "ExecuteUbergraph_LauncherProjectile_Gas");

	Params::ALauncherProjectile_Gas_C_ExecuteUbergraph_LauncherProjectile_Gas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


