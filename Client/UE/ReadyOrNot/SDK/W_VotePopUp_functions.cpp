#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VotePopUp.W_VotePopUp_C
// (None)

class UClass* UW_VotePopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VotePopUp_C");

	return Clss;
}


// W_VotePopUp_C W_VotePopUp.Default__W_VotePopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VotePopUp_C* UW_VotePopUp_C::GetDefaultObj()
{
	static class UW_VotePopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VotePopUp_C*>(UW_VotePopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VotePopUp.W_VotePopUp_C.GetVoteNo_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanVoteNo_Return_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_VotePopUp_C::GetVoteNo_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanVoteNo_Return_Value, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetVoteNo_Visibility");

	Params::UW_VotePopUp_C_GetVoteNo_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CanVoteNo_Return_Value = CallFunc_CanVoteNo_Return_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.CanVoteNo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AReadyOrNotPlayerState*>CallFunc_GetPlayersAvailableForVote_ReturnValue                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VotePopUp_C::CanVoteNo(bool* Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetPlayersAvailableForVote_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "CanVoteNo");

	Params::UW_VotePopUp_C_CanVoteNo_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayersAvailableForVote_ReturnValue = CallFunc_GetPlayersAvailableForVote_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_VotePopUp.W_VotePopUp_C.GetVoteNoKeyBinding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// class FString                      CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_VotePopUp_C::GetVoteNoKeyBinding(class FName CallFunc_MakeLiteralName_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetVoteNoKeyBinding");

	Params::UW_VotePopUp_C_GetVoteNoKeyBinding_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue = CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetVoteYesKeyBinding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// class FString                      CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_VotePopUp_C::GetVoteYesKeyBinding(class FName CallFunc_MakeLiteralName_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetVoteYesKeyBinding");

	Params::UW_VotePopUp_C_GetVoteYesKeyBinding_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue = CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetVoteQuestion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UW_VotePopUp_C::GetVoteQuestion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetVoteQuestion");

	Params::UW_VotePopUp_C_GetVoteQuestion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetText_4
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_VotePopUp_C::GetText_4(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetText_4");

	Params::UW_VotePopUp_C_GetText_4_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetNoVotes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_VotePopUp_C::GetNoVotes(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetNoVotes");

	Params::UW_VotePopUp_C_GetNoVotes_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetYesVotes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UW_VotePopUp_C::GetYesVotes(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetYesVotes");

	Params::UW_VotePopUp_C_GetYesVotes_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetVoteVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_VotePopUp_C::GetVoteVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetVoteVisibility");

	Params::UW_VotePopUp_C_GetVoteVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetbIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_VotePopUp_C::GetbIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetbIsEnabled_0");

	Params::UW_VotePopUp_C_GetbIsEnabled_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.GetText_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseController_C*        K2Node_DynamicCast_AsBP_Base_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UW_VotePopUp_C::GetText_1(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "GetText_1");

	Params::UW_VotePopUp_C_GetText_1_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_Controller = K2Node_DynamicCast_AsBP_Base_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_VotePopUp_C::VoteNo_Visibility_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "VoteNo_Visibility_2");

	Params::UW_VotePopUp_C_VoteNo_Visibility_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.VoteNo_Visibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_VotePopUp_C::VoteNo_Visibility_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "VoteNo_Visibility_1");

	Params::UW_VotePopUp_C_VoteNo_Visibility_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.VoteReason
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UW_VotePopUp_C::VoteReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "VoteReason");

	Params::UW_VotePopUp_C_VoteReason_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_VotePopUp.W_VotePopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VotePopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VotePopUp.W_VotePopUp_C.StartVote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        VoteReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        VoteQuestion                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bCanVoteNo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VotePopUp_C::StartVote(class FText VoteReason, class FText VoteQuestion, bool bCanVoteNo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "StartVote");

	Params::UW_VotePopUp_C_StartVote_Params Parms{};

	Parms.VoteReason = VoteReason;
	Parms.VoteQuestion = VoteQuestion;
	Parms.bCanVoteNo = bCanVoteNo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_VotePopUp.W_VotePopUp_C.VoteEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_VotePopUp_C::VoteEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "VoteEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VotePopUp.W_VotePopUp_C.ExecuteUbergraph_W_VotePopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseController_C*        K2Node_DynamicCast_AsBP_Base_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_VoteReason                                    (None)
// class FText                        K2Node_CustomEvent_VoteQuestion                                  (None)
// bool                               K2Node_CustomEvent_bCanVoteNo                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VotePopUp_C::ExecuteUbergraph_W_VotePopUp(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, class FText K2Node_CustomEvent_VoteReason, class FText K2Node_CustomEvent_VoteQuestion, bool K2Node_CustomEvent_bCanVoteNo, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VotePopUp_C", "ExecuteUbergraph_W_VotePopUp");

	Params::UW_VotePopUp_C_ExecuteUbergraph_W_VotePopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_Controller = K2Node_DynamicCast_AsBP_Base_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_VoteReason = K2Node_CustomEvent_VoteReason;
	Parms.K2Node_CustomEvent_VoteQuestion = K2Node_CustomEvent_VoteQuestion;
	Parms.K2Node_CustomEvent_bCanVoteNo = K2Node_CustomEvent_bCanVoteNo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


