#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vote_EndRound.Vote_EndRound_C
// (Actor)

class UClass* AVote_EndRound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vote_EndRound_C");

	return Clss;
}


// Vote_EndRound_C Vote_EndRound.Default__Vote_EndRound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVote_EndRound_C* AVote_EndRound_C::GetDefaultObj()
{
	static class AVote_EndRound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVote_EndRound_C*>(AVote_EndRound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vote_EndRound.Vote_EndRound_C.OnReferendumPassed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVote_EndRound_C::OnReferendumPassed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vote_EndRound_C", "OnReferendumPassed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vote_EndRound.Vote_EndRound_C.ExecuteUbergraph_Vote_EndRound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameMode_PVP*     K2Node_DynamicCast_AsReady_or_Not_Game_Mode_PVP                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACoopGM*                     K2Node_DynamicCast_AsCoop_GM                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVote_EndRound_C::ExecuteUbergraph_Vote_EndRound(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotGameMode_PVP* K2Node_DynamicCast_AsReady_or_Not_Game_Mode_PVP, bool K2Node_DynamicCast_bSuccess, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vote_EndRound_C", "ExecuteUbergraph_Vote_EndRound");

	Params::AVote_EndRound_C_ExecuteUbergraph_Vote_EndRound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Mode_PVP = K2Node_DynamicCast_AsReady_or_Not_Game_Mode_PVP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCoop_GM = K2Node_DynamicCast_AsCoop_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


