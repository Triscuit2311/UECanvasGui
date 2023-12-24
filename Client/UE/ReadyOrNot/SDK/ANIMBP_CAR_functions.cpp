#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_CAR.ANIMBP_CAR_C
// (None)

class UClass* UANIMBP_CAR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_CAR_C");

	return Clss;
}


// ANIMBP_CAR_C ANIMBP_CAR.Default__ANIMBP_CAR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_CAR_C* UANIMBP_CAR_C::GetDefaultObj()
{
	static class UANIMBP_CAR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_CAR_C*>(UANIMBP_CAR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_CAR.ANIMBP_CAR_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_CAR_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CAR_C", "AnimGraph");

	Params::UANIMBP_CAR_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_CAR.ANIMBP_CAR_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CAR_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CAR_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_CAR_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_CAR.ANIMBP_CAR_C.AnimNotify_EjectMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_CAR_C::AnimNotify_EjectMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CAR_C", "AnimNotify_EjectMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_CAR.ANIMBP_CAR_C.ExecuteUbergraph_ANIMBP_CAR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_DynamicCast_AsBase_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CAR_C::ExecuteUbergraph_ANIMBP_CAR(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CAR_C", "ExecuteUbergraph_ANIMBP_CAR");

	Params::UANIMBP_CAR_C_ExecuteUbergraph_ANIMBP_CAR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Item = K2Node_DynamicCast_AsBase_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


