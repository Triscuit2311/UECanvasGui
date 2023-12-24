#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_TCR.ANIMBP_TCR_C
// (None)

class UClass* UANIMBP_TCR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_TCR_C");

	return Clss;
}


// ANIMBP_TCR_C ANIMBP_TCR.Default__ANIMBP_TCR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_TCR_C* UANIMBP_TCR_C::GetDefaultObj()
{
	static class UANIMBP_TCR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_TCR_C*>(UANIMBP_TCR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_TCR.ANIMBP_TCR_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_TCR_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TCR_C", "AnimGraph");

	Params::UANIMBP_TCR_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_TCR.ANIMBP_TCR_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_TCR_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TCR_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_TCR_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_TCR.ANIMBP_TCR_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_TCR_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TCR_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_TCR.ANIMBP_TCR_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_TCR_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TCR_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_TCR.ANIMBP_TCR_C.ExecuteUbergraph_ANIMBP_TCR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_TCR_C::ExecuteUbergraph_ANIMBP_TCR(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TCR_C", "ExecuteUbergraph_ANIMBP_TCR");

	Params::UANIMBP_TCR_C_ExecuteUbergraph_ANIMBP_TCR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


