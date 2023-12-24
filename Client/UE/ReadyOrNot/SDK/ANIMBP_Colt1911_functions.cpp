#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Colt1911.ANIMBP_Colt1911_C
// (None)

class UClass* UANIMBP_Colt1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Colt1911_C");

	return Clss;
}


// ANIMBP_Colt1911_C ANIMBP_Colt1911.Default__ANIMBP_Colt1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Colt1911_C* UANIMBP_Colt1911_C::GetDefaultObj()
{
	static class UANIMBP_Colt1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Colt1911_C*>(UANIMBP_Colt1911_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Colt1911_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimGraph");

	Params::UANIMBP_Colt1911_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725
// (BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76
// (BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_SlideBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::AnimNotify_SlideBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_SlideBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_SlideForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Colt1911_C::AnimNotify_SlideForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_SlideForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.ExecuteUbergraph_ANIMBP_Colt1911
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Colt1911_C::ExecuteUbergraph_ANIMBP_Colt1911(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "ExecuteUbergraph_ANIMBP_Colt1911");

	Params::UANIMBP_Colt1911_C_ExecuteUbergraph_ANIMBP_Colt1911_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


