#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Python.ANIMBP_Python_C
// (None)

class UClass* UANIMBP_Python_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Python_C");

	return Clss;
}


// ANIMBP_Python_C ANIMBP_Python.Default__ANIMBP_Python_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Python_C* UANIMBP_Python_C::GetDefaultObj()
{
	static class UANIMBP_Python_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Python_C*>(UANIMBP_Python_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Python.ANIMBP_Python_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Python_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "AnimGraph");

	Params::UANIMBP_Python_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Python.ANIMBP_Python_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4
// (BlueprintEvent)
// Parameters:

void UANIMBP_Python_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Python.ANIMBP_Python_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Python_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Python_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_RotateCylinder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Python_C::AnimNotify_RotateCylinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "AnimNotify_RotateCylinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ResetCyliner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Python_C::AnimNotify_ResetCyliner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "AnimNotify_ResetCyliner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ShowBullets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Python_C::AnimNotify_ShowBullets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "AnimNotify_ShowBullets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_HideBullets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Python_C::AnimNotify_HideBullets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "AnimNotify_HideBullets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Python.ANIMBP_Python_C.ExecuteUbergraph_ANIMBP_Python
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Python_C::ExecuteUbergraph_ANIMBP_Python(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Python_C", "ExecuteUbergraph_ANIMBP_Python");

	Params::UANIMBP_Python_C_ExecuteUbergraph_ANIMBP_Python_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


