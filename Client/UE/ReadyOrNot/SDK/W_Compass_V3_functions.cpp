#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Compass_V3.W_Compass_V3_C
// (None)

class UClass* UW_Compass_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Compass_V3_C");

	return Clss;
}


// W_Compass_V3_C W_Compass_V3.Default__W_Compass_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Compass_V3_C* UW_Compass_V3_C::GetDefaultObj()
{
	static class UW_Compass_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Compass_V3_C*>(UW_Compass_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Compass_V3.W_Compass_V3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Compass_V3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Compass_V3_C", "Tick");

	Params::UW_Compass_V3_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Compass_V3.W_Compass_V3_C.ExecuteUbergraph_W_Compass_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NegateFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Compass_V3_C::ExecuteUbergraph_W_Compass_V3(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_ClampAxis_ReturnValue, float CallFunc_NegateFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Compass_V3_C", "ExecuteUbergraph_W_Compass_V3");

	Params::UW_Compass_V3_C_ExecuteUbergraph_W_Compass_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_ClampAxis_ReturnValue = CallFunc_ClampAxis_ReturnValue;
	Parms.CallFunc_NegateFloat_ReturnValue = CallFunc_NegateFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


