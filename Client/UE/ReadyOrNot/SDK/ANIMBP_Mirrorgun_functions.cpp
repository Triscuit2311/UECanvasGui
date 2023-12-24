#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Mirrorgun.ANIMBP_Mirrorgun_C
// (None)

class UClass* UANIMBP_Mirrorgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Mirrorgun_C");

	return Clss;
}


// ANIMBP_Mirrorgun_C ANIMBP_Mirrorgun.Default__ANIMBP_Mirrorgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Mirrorgun_C* UANIMBP_Mirrorgun_C::GetDefaultObj()
{
	static class UANIMBP_Mirrorgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Mirrorgun_C*>(UANIMBP_Mirrorgun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Mirrorgun.ANIMBP_Mirrorgun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Mirrorgun_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Mirrorgun_C", "AnimGraph");

	Params::UANIMBP_Mirrorgun_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Mirrorgun.ANIMBP_Mirrorgun_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Mirrorgun_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Mirrorgun_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Mirrorgun_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Mirrorgun.ANIMBP_Mirrorgun_C.ExecuteUbergraph_ANIMBP_Mirrorgun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_DynamicCast_AsBase_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipped_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Mirrorgun_C::ExecuteUbergraph_ANIMBP_Mirrorgun(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Mirrorgun_C", "ExecuteUbergraph_ANIMBP_Mirrorgun");

	Params::UANIMBP_Mirrorgun_C_ExecuteUbergraph_ANIMBP_Mirrorgun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsBase_Item = K2Node_DynamicCast_AsBase_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEquipped_ReturnValue = CallFunc_IsEquipped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


