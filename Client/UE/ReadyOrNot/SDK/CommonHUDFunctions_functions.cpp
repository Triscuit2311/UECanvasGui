#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonHUDFunctions.CommonHUDFunctions_C
// (None)

class UClass* UCommonHUDFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonHUDFunctions_C");

	return Clss;
}


// CommonHUDFunctions_C CommonHUDFunctions.Default__CommonHUDFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonHUDFunctions_C* UCommonHUDFunctions_C::GetDefaultObj()
{
	static class UCommonHUDFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonHUDFunctions_C*>(UCommonHUDFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonHUDFunctions.CommonHUDFunctions_C.CenterPrint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MessageType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CenterprintText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonHUDFunctions_C::CenterPrint(class FName MessageType, class APlayerCharacter* Other, class UTextBlock* CenterprintText, class AGameStateBase* GameState, class UObject* __WorldContext, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonHUDFunctions_C", "CenterPrint");

	Params::UCommonHUDFunctions_C_CenterPrint_Params Parms{};

	Parms.MessageType = MessageType;
	Parms.Other = Other;
	Parms.CenterprintText = CenterprintText;
	Parms.GameState = GameState;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State_1 = K2Node_DynamicCast_AsReady_or_Not_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State_2 = K2Node_DynamicCast_AsReady_or_Not_Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


