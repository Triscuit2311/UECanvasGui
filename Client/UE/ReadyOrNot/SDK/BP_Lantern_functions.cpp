#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// (Actor)

class UClass* ABP_Lantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lantern_C");

	return Clss;
}


// BP_Lantern_C BP_Lantern.Default__BP_Lantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Lantern_C* ABP_Lantern_C::GetDefaultObj()
{
	static class ABP_Lantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Lantern_C*>(ABP_Lantern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Lantern.BP_Lantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lantern_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Lantern_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Lantern.BP_Lantern_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lantern_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Lantern_C", "ReceiveTick");

	Params::ABP_Lantern_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lantern_C::ExecuteUbergraph_BP_Lantern(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Lantern_C", "ExecuteUbergraph_BP_Lantern");

	Params::ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


