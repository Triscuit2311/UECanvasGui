#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ClueFlare.BP_ClueFlare_C
// (Actor)

class UClass* ABP_ClueFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ClueFlare_C");

	return Clss;
}


// BP_ClueFlare_C BP_ClueFlare.Default__BP_ClueFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ClueFlare_C* ABP_ClueFlare_C::GetDefaultObj()
{
	static class ABP_ClueFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ClueFlare_C*>(ABP_ClueFlare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ClueFlare_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClueFlare_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ClueFlare.BP_ClueFlare_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ClueFlare_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClueFlare_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ClueFlare.BP_ClueFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ClueFlare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClueFlare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ClueFlare.BP_ClueFlare_C.ExecuteUbergraph_BP_ClueFlare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorLocalOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ClueFlare_C::ExecuteUbergraph_BP_ClueFlare(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClueFlare_C", "ExecuteUbergraph_BP_ClueFlare");

	Params::ABP_ClueFlare_C_ExecuteUbergraph_BP_ClueFlare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalOffset_SweepHitResult = CallFunc_K2_AddActorLocalOffset_SweepHitResult;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


