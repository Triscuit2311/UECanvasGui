#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Player_CoffeeBuff.GE_Player_CoffeeBuff_C
// (None)

class UClass* UGE_Player_CoffeeBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Player_CoffeeBuff_C");

	return Clss;
}


// GE_Player_CoffeeBuff_C GE_Player_CoffeeBuff.Default__GE_Player_CoffeeBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Player_CoffeeBuff_C* UGE_Player_CoffeeBuff_C::GetDefaultObj()
{
	static class UGE_Player_CoffeeBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Player_CoffeeBuff_C*>(UGE_Player_CoffeeBuff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GE_Player_CoffeeBuff.GE_Player_CoffeeBuff_C.ApplyEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGE_Player_CoffeeBuff_C::ApplyEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_Player_CoffeeBuff_C", "ApplyEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GE_Player_CoffeeBuff.GE_Player_CoffeeBuff_C.ResetEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGE_Player_CoffeeBuff_C::ResetEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_Player_CoffeeBuff_C", "ResetEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GE_Player_CoffeeBuff.GE_Player_CoffeeBuff_C.ExecuteUbergraph_GE_Player_CoffeeBuff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGE_Player_CoffeeBuff_C::ExecuteUbergraph_GE_Player_CoffeeBuff(int32 EntryPoint, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_Player_CoffeeBuff_C", "ExecuteUbergraph_GE_Player_CoffeeBuff");

	Params::UGE_Player_CoffeeBuff_C_ExecuteUbergraph_GE_Player_CoffeeBuff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


